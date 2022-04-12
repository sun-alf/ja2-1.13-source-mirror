@@ -7980,8 +7980,12 @@ UINT16 UseKitPoints( OBJECTTYPE * pObj, UINT16 usPoints, SOLDIERTYPE *pSoldier )
#endif


#define NEW_IMPL  (1)
UINT16 MagazineClassIndexToItemType(UINT16 usMagIndex)
{
#if NEW_IMPL
	return Magazine[usMagIndex].uiIndex;
#else
	// Note: if any ammo items in the item table are separated from the main group,
	// this function will have to be rewritten to scan the item table for an item
	// with item class ammo, which has class index usMagIndex
@ -8001,6 +8005,7 @@ UINT16 MagazineClassIndexToItemType(UINT16 usMagIndex)

	DebugMsg( TOPIC_JA2, DBG_LEVEL_3, String( "MagazineClassIndexToItemType: return none, got to %d", usLoop ) );
	return(NONE);
#endif
}


@ -8127,20 +8132,32 @@ UINT16 RandomMagazine( UINT16 usItem, UINT8 ubPercentStandard, UINT8 maxCoolness
		return( 0 );
	}

	//TEMP:
	#include "Debug Control.h"
	#include "Timer control.h"
	LONGLONG GetJA2Microseconds();

	CHAR tmpMPDbgString[512];
	static LONGLONG totalElapsedUs = 0;
	LONGLONG startUs = GetJA2Microseconds();
	//TEMP: end

	pWeapon = &(Weapon[usItem]);

	// find & store all possible mag types that fit this gun
	usLoop = 0;
	while ( Magazine[ usLoop ].ubCalibre != NOAMMO )
	{
		// make sure we have space for additional possible mag
		if ( usPossibleMagCnt >= MAX_AMMO_TYPES_PER_GUN )
			break;

		loopItem = MagazineClassIndexToItemType(usLoop);

		if (Magazine[usLoop].ubCalibre == pWeapon->ubCalibre &&
				Magazine[usLoop].ubMagSize == pWeapon->ubMagSize && ItemIsLegal(loopItem)
				&& maxCoolness >= Item[loopItem].ubCoolness )
		{
			// store it! (make sure array is big enough)
			Assert(usPossibleMagCnt < MAX_AMMO_TYPES_PER_GUN);
			// Madd: check to see if allowed by army
			if ( gArmyItemChoices[bSoldierClass][ENEMYAMMOTYPES].ubChoices > 0 )
			{
@ -8162,6 +8179,13 @@ UINT16 RandomMagazine( UINT16 usItem, UINT8 ubPercentStandard, UINT8 maxCoolness
		usLoop++;
	}

	//TEMP:
	LONGLONG elapsedUs = GetJA2Microseconds() - startUs;
	totalElapsedUs += elapsedUs;
	sprintf( tmpMPDbgString, "RandomMagazine: %lld us (total %lld us)\n", elapsedUs, totalElapsedUs );
	MPDebugMsg( tmpMPDbgString );
	//TEMP: end

	// no matches?
	if (usPossibleMagCnt == 0)
	{
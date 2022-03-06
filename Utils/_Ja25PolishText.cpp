﻿// WANNE: This pragma should not be needed anymore for Polish version, after we set the encoding to UTF8 
// WANNE: Yes we need this here exclusivly in Polish version, because we do not have a codepage in the code like for other versions.
//#pragma setlocale("POLISH")

#ifdef PRECOMPILEDHEADERS
	#include "Utils All.h"
	#include "_Ja25Polishtext.h"
#else
	#include "Language Defines.h"
	#ifdef POLISH
		#include "text.h"
		#include "Fileman.h"
	#endif
#endif

//suppress : warning LNK4221: no public symbols found; archive member will be inaccessible
void this_is_the_Ja25PolishText_public_symbol(void){;}

#ifdef POLISH

// VERY TRUNCATED FILE COPIED FROM JA2.5 FOR ITS FEATURES FOR JA2 GOLD

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// SANDRO - New STOMP laptop strings
//these strings match up with the defines in IMP Skill trait.cpp
STR16 gzIMPSkillTraitsText[]=
{
	L"Otwieranie zamków",
	L"Walka wręcz",
	L"Elektronika",
	L"Operacje nocne",
	L"Rzucanie",
	L"Szkolenie",
	L"Broñ ciężka",
	L"Broñ automatyczna",
	L"Skradanie się",
	L"Oburęczność",
	L"Broñ biała",
	L"Snajper",
	L"Kamuflaż",
	L"Sztuki walki",

	L"Brak",
	L"Umiejętności",
	L"(Ekspert)",

};

//added another set of skill texts for new major traits
STR16 gzIMPSkillTraitsTextNewMajor[]=
{
	L"Broñ automatyczna",
	L"Broñ ciężka",
	L"Strzelec wyborowy",
	L"£owca",
	L"Rewolwerowiec",
	L"Walka wręcz",
	L"Zastępca szeryfa",
	L"Technik",
	L"Paramedyk",
	L"Covert Ops",	// TODO.Translate

	L"None",
	L"Główne cechy I.M.P",
	// second names
	L"Strzelec CKM",
	L"Bombardier",
	L"Snajper",
	L"Leśniczy",
	L"Rewolwerowiec",
	L"Walka wręcz",
	L"Dowódca drużyny",
	L"Inżynier",
	L"Doktor",
	L"Spy",	// TODO.Translate
};

//added another set of skill texts for new minor traits
STR16 gzIMPSkillTraitsTextNewMinor[]=
{
	L"Oburęczność",
	L"Walka wręcz",
	L"Rzucanie",
	L"Operacje nocne",
	L"Cichy",
	L"Atletyka",
	L"Bodybuilding",
	L"£adunki wybuchowe",
	L"Nauczanie",
	L"Zwiad",
	L"Radio Operator",
	L"Survival",	//TODO.Translate

	L"Brak",
	L"Pomniejsze cechy I.M.P",
};

//these texts are for help popup windows, describing trait properties
STR16 gzIMPMajorTraitsHelpTextsAutoWeapons[]=
{
	L"+%d%s do szansy trafienia karabinem szturmowym\n",
	L"+%d%s do szansy trafienia pistoletem maszynowym\n",
	L"+%d%s do szansy trafienia erkaemem\n",
	L"-%d%s do liczby PA potrzebnych do strzału erkaemem w trybie automatycznym lub serią\n",
	L"-%d%s do liczby PA potrzebnych do przygotowania erkaemu\n",
	L"Kara do szansy trafienia ogniem automatycznym/serią jest zmniejszona o %d%s\n",
	L"Zmniejszona szansa na wystrzelenie przez przypadek większej liczby pocisków w ogniu automatycznym o -%d%s\n",

};
STR16 gzIMPMajorTraitsHelpTextsHeavyWeapons[]=
{
	L"-%d%s do liczby PA potrzebnych do strzału z granatnika\n",
	L"-%d%s do liczby PA potrzebnych do strzału z wyrzutni rakiet\n",
	L"+%d%s do szansy trafienia grantnikiem\n",
	L"+%d%s do szansy trafienia wyrzutnią rakiet\n",
	L"-%d%s do liczby PA potrzebnych do strzału z moździerza\n",
	L"Reduced penalty for mortar CtH by %d%s\n",
	L"+%d%s damage to tanks with heavy weapons, grenades and explosives\n",
	L"+%d%s damage to other targets with heavy weapons\n",
};

STR16 gzIMPMajorTraitsHelpTextsSniper[]=
{
	L"+%d%s CtH with Rifles\n",
	L"+%d%s CtH with Sniper Rifles\n",
	L"-%d%s effective range to target with all weapons\n",
	L"+%d%s aiming bonus per aim click (except for handguns)\n",
	L"+%d%s damage on shot",
	L" plus",
	L" per every aim click",
	L" after first",
	L" after second",
	L" after third",
	L" after fourth",
	L" after fifth",
	L" after sixth",
	L" after seventh",
	L"-%d%s APs to chamber a round with bolt-action rifles \n",
	L"Adds one more aim click for rifle-type guns\n",
	L"Adds %d more aim clicks for rifle-type guns\n",
	L"Makes aiming faster with rifle-type guns by one aim click\n",
	L"Makes aiming faster with rifle-type guns by %d aim clicks\n",
	L"Focus skill: +%d interrupt modifier in marked area\n",	// TODO.Translate
};

STR16 gzIMPMajorTraitsHelpTextsRanger[]=
{
	L"+%d%s CtH with Rifles\n",
	L"+%d%s CtH with Shotguns\n",
	L"-%d%s APs needed to pump Shotguns\n",
	L"-%d%s APs to fire Shotguns\n",
	L"Adds %d more aim click for Shotguns\n",
	L"Adds %d more aim clicks for Shotguns\n",
	L"+%d%s effective range with Shotguns\n",
	L"-%d%s APs to reload single Shotgun shells\n",
	L"Adds %d more aim click for Rifles\n",
	L"Adds %d more aim clicks for Rifles\n",
};

STR16 gzIMPMajorTraitsHelpTextsGunslinger[]=
{
	L"-%d%s APs to fire with pistols and revolvers\n",
	L"+%d%s effective range with pistols and revolvers\n",
	L"+%d%s CtH with pistols and revolvers\n",
	L"+%d%s CtH with machine pistols",
	L" (on single shots only)",
	L"+%d%s aiming bonus per click with pistols, machine pistols and revolvers\n",
	L"-%d%s APs to ready pistols and revolvers\n",
	L"-%d%s APs to reload pistols, machine pistols and revolvers\n",
	L"Adds %d more aim click for pistols, machine pistols and revolvers\n",
	L"Adds %d more aim clicks for pistols, machine pistols and revolvers\n",
	L"Can fan the hammer with revolvers\n",	// TODO.Translate
};

STR16 gzIMPMajorTraitsHelpTextsMartialArts[]=
{
	L"-%d%s AP for hand to hand attacks (bare hands or with brass knuckles)\n",
	L"+%d%s CtH with hand to hand attacks with bare hands\n",
	L"+%d%s CtH with hand to hand attacks with brass knuckles\n",
	L"+%d%s damage of hand to hand attacks (bare hands or with brass knuckles)\n",
	L"+%d%s breath damage of hand to hand attacks (bare hands or with brass knuckles)\n",
	L"Enemy knocked out due to your HtH attacks takes slightly longer to recuperate\n",
	L"Enemy knocked out due to your HtH attacks takes longer to recuperate\n",
	L"Enemy knocked out due to your HtH attacks takes much longer to recuperate\n",
	L"Enemy knocked out due to your HtH attacks takes very long to recuperate\n",
	L"Enemy knocked out due to your HtH attacks takes extremely long to recuperate\n",
	L"Enemy knocked out due to your HtH attacks takes long hours to recuperate\n",
	L"Enemy knocked out due to your HtH attacks probably never stand up\n",
	L"Focused (aimed) punch deals +%d%s more damage\n",
	L"Special spinning kick deals +%d%s more damage\n",
	L"+%d%s chance to dodge hand to hand attacks\n",
	L"+%d%s additional chance to dodge HtH attacks with bare hands",
	L" or brass knuckles",
	L" (+%d%s with brass knuckles)",
	L"+%d%s additional chance to dodge HtH attacks with brass knuckles\n",
	L"+%d%s chance to dodge attacks by any melee weapon\n",
	L"-%d%s APs to steal weapon from enemy hands\n",
	L"-%d%s APs to change stance (stand, crouch, lie down), turn around, climb on/off roof and jump obstacles\n",
	L"-%d%s APs to change stance (stand, crouch, lie down)\n",
	L"-%d%s APs to turn around\n",
	L"-%d%s APs to climb on/off roof and jump obstacles\n",
	L"+%d%s chance to kick open doors\n",
	L"Gains special animations for hand to hand combat\n",
	L"-%d%s chance to be interrupted when charging towards an enemy on close range\n",
};

STR16 gzIMPMajorTraitsHelpTextsSquadleader[]=
{
	L"+%d%s APs per round of other mercs in vicinity\n",
	L"+%d effective exp level of other mercs in vicinity, which have lesser level than the %s\n",
	L"+%d effective exp level to count as a standby when counting friends' bonus for suppression\n",
	L"+%d%s total suppression tolerance for other mercs in the vicinity and %s himself\n",
	L"+%d morale gain for other mercs in the vicinity\n",
	L"-%d morale loss for other mercs in the vicinity\n",
	L"The vicinity for bonuses is %d tiles",
	L" (%d tiles with extended ears)",
	L"(Max simultaneous bonuses for one soldier is %d)\n",
	L"+%d%s fear resistence of %s\n",
	L"Drawback: %dx morale loss for %s's death for all other mercs\n",
	L"+%d%s chance to trigger collective interrupts\n",
};

STR16 gzIMPMajorTraitsHelpTextsTechnician[]=
{
	L"+%d%s to repair speed\n",
	L"+%d%s to lockpick (normal/electronic locks)\n",
	L"+%d%s to disarm electronic traps\n",
	L"+%d%s to attach special items and combining things\n",
	L"+%d%s to unjamm a gun in combat\n",
	L"Reduced penalty to repair electronic items by %d%s\n",
	L"Increased chance to detect traps and mines (+%d detect level)\n",
	L"+%d%s robot's CtH controlled by the %s\n",
	L"%s trait grants ability to repair the robot\n",
	L"Reduced penalty to repair speed of the robot by %d%s\n",
	L"Able to restore item threshold to 100%% during repair\n",	// TODO.Translate
};

STR16 gzIMPMajorTraitsHelpTextsDoctor[]=
{
	L"Able to use medical bag to perform surgical intervention on wounded soldier\n",
	L"Surgery instantly returns %d%s of lost health back.",
	L" (This will deplete the medical bag.)",
	L"Able to heal lost stats (from critical hits) by",
	L" surgery or",
	L" doctor assignment.\n",
	L"+%d%s effectiveness on doctor-patient assignment\n",
	L"+%d%s bandaging speed\n",
	L"+%d%s natural regeneration speed for all soldiers in the same sector",
	L" (max %d of these bonuses per sector stack)",
	L"Returned health can be boosted an additional %d%s by using blood bags.\n",	// TODO.Translate
};

STR16 gzIMPMajorTraitsHelpTextsCovertOps[]=
{
	L"Able to disguise as a civilian or soldier to slip behind enemy lines.\n",
	L"Will be detected if performing suspicious actions, having\nsuspicious gear or being near fresh corpses.\n",
	L"Will be detected if disguised as a soldier and\ncloser than %d tiles to the enemy.\n",
	L"Will be detected if disguised as a soldier and\ncloser than %d tiles to a fresh corpse.\n",
	L"+%d%s CtH with covert melee weapons\n",
	L"+%d%s chance of instakill with covert melee weapons\n",
	L"Disguise AP cost lowered by %d%s.\n",
	L"Can convince enemy soldiers to secretly change sides.\n",	// TODO.Translate
};

STR16 gzIMPMajorTraitsHelpTextsRadioOperator[]=	// TODO.Translate
{
	L"Can use communications equipment.\n", 
	L"Can call in artillery strikes from allies in neighbouring sectors.\n",
	L"Via Frequency Scan assignment, enemy patrols can be located.\n",
	L"Communications can be jammed sector-wide.\n",
	L"If communications are jammed, an operator can scan for the jamming device.\n",
	L"Can call in militia reinforcements from neighbouring sectors.\n",
};

STR16 gzIMPMajorTraitsHelpTextsNone[]=
{
	L"No bonuses",
};

STR16 gzIMPMinorTraitsHelpTextsAmbidextrous[]=
{
	L"Reduced penalty to shoot if offhand item is equipped by %d%s\n",	// TODO.Translate
	L"+%d%s speed on reloading guns with magazines\n",
	L"+%d%s speed on reloading guns with loose rounds\n",
	L"-%d%s APs to pickup items\n",
	L"-%d%s APs to work backpack\n",
	L"-%d%s APs to handle doors\n",
	L"-%d%s APs to plant/remove bombs and mines\n",
	L"-%d%s APs to attach items\n",
};

STR16 gzIMPMinorTraitsHelpTextsMelee[]=
{
	L"-%d%s APs to attack with blades\n",
	L"+%d%s CtH with blades\n",
	L"+%d%s CtH with blunt melee weapons\n",
	L"+%d%s damage with blades\n",
	L"+%d%s damage with blunt melee weapons\n",
	L"Aimed attack with any melee weapon deals +%d%s damage\n",
	L"+%d%s chance to dodge attack from melee blades\n",
	L"+%d%s additional chance to dodge melee blades if holding a blade\n",
	L"+%d%s chance to dodge attack from blunt melee weapons\n",
	L"+%d%s additional chance to dodge blunt melee weapons if holding a blade\n",
};

STR16 gzIMPMinorTraitsHelpTextsThrowing[]=
{
	L"-%d%s basic APs to throw blades\n",
	L"+%d%s max range when throwing blades\n",
	L"+%d%s CtH when throwing blades\n",
	L"+%d%s CtH when throwing blades per aim click\n",
	L"+%d%s damage with throwing blades\n",
	L"+%d%s damage with throwing blades per aim click\n",
	L"+%d%s chance to inflict critical hit with throwing blade if not seen or heard\n",
	L"+%d critical hit with throwing blade multiplier\n",
	L"Adds %d more aim click for throwing blades\n",
	L"Adds %d more aim clicks for throwing blades\n",
};

STR16 gzIMPMinorTraitsHelpTextsNightOps[]=
{
	L"+%d to effective sight range in the dark\n",
	L"+%d to general effective hearing range\n",
	L"+%d additional hearing range in the dark\n",
	L"+%d to interrupts modifier in the dark\n",
	L"-%d need to sleep\n",
};

STR16 gzIMPMinorTraitsHelpTextsStealthy[]=
{
	L"-%d%s APs to move quietly\n",
	L"+%d%s chance to move quietly\n",
	L"+%d%s stealth (being 'invisible' if unnoticed)\n",
	L"Reduced cover penalty for movement by %d%s\n",
	L"-%d%s chance to be interrupted\n",
};

STR16 gzIMPMinorTraitsHelpTextsAthletics[]=
{
	L"-%d%s APs for movement (running, walking, squatting, crawling, swimming, etc.)\n",
	L"-%d%s energy spent for moving, roof-climbing, obstacle-jumping, swimming, etc.\n",
};

STR16 gzIMPMinorTraitsHelpTextsBodybuilding[]=
{
	L"%d%s damage resistance\n",
	L"+%d%s effective strength for carrying weight capacity\n",
	L"Reduced energy lost when hit by HtH attack by %d%s\n",
	L"Increased damage needed to fall down by %d%s if hit on legs\n",
};

STR16 gzIMPMinorTraitsHelpTextsDemolitions[]=
{
	L"-%d%s APs to throw grenades\n",
	L"+%d%s max range when throwing grenades\n",
	L"+%d%s CtH when throwing grenades\n",
	L"+%d%s damage for set bombs and mines\n",
	L"+%d%s to attaching detonators check\n",
	L"+%d%s to planting/removing bombs check\n",
	L"Decreased chance of enemy detecting your bombs and mines (+%d bomb level)\n",
	L"Increased chance for shaped charge on opening doors (damage multiplied by %d)\n",
};

STR16 gzIMPMinorTraitsHelpTextsTeaching[]=
{
	L"+%d%s bonus to militia training speed\n",
	L"+%d%s bonus to effective leadership for determining militia training\n",
	L"+%d%s bonus to teach other mercs\n",
	L"Skill value treated to be +%d higher for being able to teach this skill to other mercs\n",
	L"+%d%s bonus to train stats through self-practice assignment\n",
};

STR16 gzIMPMinorTraitsHelpTextsScouting[]=
{
	L"+%d%% to effective sight range with scopes on weapons\n",
	L"+%d%% to effective sight range with binoculars (and scopes separated from weapons)\n",
	L"-%d%% tunnel vision with binoculars (and scopes separated from weapons)\n",
	L"If in sector, adjacent sectors will show exact number of enemies\n",
	L"If in sector, adjacent sectors will show presence of enemies, if any\n",
	L"Prevents enemy ambushes on your squad\n",
	L"Prevents bloodcat ambushes on your squad\n",
};
STR16 gzIMPMinorTraitsHelpTextsSnitch[]=
{
	L"Okazyjnie poinformuje cię o opiniach kolegów z oddziału.\n",
	L"Zapobiega złemu zachowaniu kolegów z oddziału (narkotyki, alkohol, kradzieże).\n",
	L"Może szerzyć propagandę w miastach.\n",
	L"Może zbierać plotki w miastach.\n",
	L"Może zostać umieszczony w więzieniu jako tajniak.\n",
	L"Jeżeli w dobrym nastroju, poprawia twoją reputację o %d każdego dnia.\n",
	L"+%d zasięg słuchu\n",	
};

STR16 gzIMPMajorTraitsHelpTextsSurvival[] =	// TODO.Translate
{
	L"-%d%s travel time needed between sectors if traveling by foot\n",
	L"-%d%s travel time needed between sectors if traveling in vehicle (except helicopter)\n",
	L"-%d%s less energy spent for travelling between sectors\n",
	L"-%d%s weather penalties\n",
	L"-%d%s worn out speed of camouflage by water or time\n",
	L"Can spot tracks up to %d tiles away\n",

	L"%s%d%% disease resistance\n",
	L"%s%d%% food consumption\n",
	L"%s%d%% water consumption\n",
	L"+%d%% snake evasion\n",	// TODO.Translate
	L"+%d%% camouflage effectiveness\n",
};

STR16 gzIMPMinorTraitsHelpTextsNone[]=
{
	L"No bonuses",
};

STR16 gzIMPOldSkillTraitsHelpTexts[]=
{
	L"+%d%s bonus to lockpicking\n",	// 0
	L"+%d%s hand to hand chance to hit\n",
	L"+%d%s hand to hand damage\n",
	L"+%d%s chance to dodge hand to hand attacks\n",
	L"Eliminates penalty to repair and handle\nelectronic things (locks, traps, rem. detonators, robot, etc.)\n",
	L"+%d to effective sight range in the dark\n",
	L"+%d to general effective hearing range\n",
	L"+%d extra hearing range in the dark\n",
	L"+%d to interrupts modifier in the dark\n",
	L"-%d need to sleep\n",
	L"+%d%s max range when throwing anything\n",	// 10
	L"+%d%s chance to hit when throwing anything\n",
	L"+%d%s chance to instantly kill by throwing knife if not seen or heard\n",
	L"+%d%s bonus to militia training and other mercs instructing speed\n",
	L"+%d%s effective leadership for militia training calculations\n",
	L"+%d%s chance to hit with rocket/grenade launchers and mortar\n",
	L"Auto fire/burst chance to hit penalty is divided by %d\n",
	L"Reduced chance for shooting unwanted bullets on autofire\n",
	L"+%d%s chance to move quietly\n",
	L"+%d%s stealth (being 'invisible' if unnoticed)\n",
	L"Eliminates CtH penalty when firing two weapons at once\n",	// 20
	L"+%d%s chance to hit with melee blades\n",
	L"+%d%s chance to dodge attacks by melee blades if having blade in hands\n",
	L"+%d%s chance to dodge attacks by melee blades if having anything else in hands\n",
	L"+%d%s chance to dodge hand to hand attacks if having blade in hands\n",
	L"-%d%s effective range to target with all weapons\n",
	L"+%d%s aiming bonus per aim click\n",
	L"Provides permanent camouflage\n",
	L"+%d%s hand to hand chance to hit\n",
	L"+%d%s hand to hand damage\n",
	L"+%d%s chance to dodge hand to hand attacks if having empty hands\n",	// 30
	L"+%d%s chance to dodge hand to hand attacks if not having empty hands\n",
	L"+%d%s chance to dodge attacks by melee blades\n",
	L"Can perform spinning kick attack on weakened enemies to deal double damage\n",
	L"Gains special animations for hand to hand combat\n",
	L"No bonuses",
};

STR16 gzIMPNewCharacterTraitsHelpTexts[]=
{
	L"A: No advantage.\nD: No disadvantage.",
	L"A: Better performance when a couple of mercs are nearby.\nD: Gains no morale when no other merc is nearby.",
	L"A: Better performance when no other merc is nearby.\nD: Gains no morale when in a group.",
	L"A: Morale sinks a little slower and grows faster than normal.\nD: Lower chance to detect traps and mines.",
	L"A: Bonus on training militia and is better at communicating with people.\nD: Gains no morale for actions of other mercs.",
	L"A: Slightly faster learning when self-practicing or as a student.\nD: Lower suppression and fear resistance.",
	L"A: Energy goes down a bit slower except on assignments such as doctor, repairman, militia trainer or if learning certain skills.\nD: Wisdom, leadership, explosives, mechanical and medical skills improve slightly slower.",
	L"A: Slightly better CtH on burst/autofire and inflicts slightly bigger damage in close combat\n    Gains a little more morale for killing.\nD: Penalty for actions that need patience like repairing items, picking locks, removing traps, doctoring, training militia.",
	L"A: Bonus for actions that need patience like repairing items, picking locks, removing traps, doctoring and training militia.\nD: Interrupt chance is slightly lowered.",
	L"A: Higher suppression and fear resistance.\n    Morale loss for taking damage and companions deaths is lower.\nD: Higher chance to be hit and enemy's penalty reduced when oneself is the moving target.",
	L"A: Gains morale on non-combat assignments (except training militia).\nD: Gains no morale for killing.",
	L"A: Higher chance for inflicting stat loss, which may also inflict special painful wounds.\n   Gains bonus morale for inflicting stat loss.\nD: Penalty in communicating with people and morale sinks faster while not in battle.",
	L"A: Better performance when mercs of opposite gender are nearby.\nD: Morale for mercs of the same gender grows slower when nearby.",
	L"A: Gains morale when retreating.\nD: Loses morale when encountering numerically superior enemy forces.", // TODO.Translate
};

STR16 gzIMPDisabilitiesHelpTexts[]=
{
	L"No effects.",
	L"Problems with breathing and reduced overall performance when in tropical or desert sectors.",
	L"Will suffer panic attack if left alone in certain situations.",
	L"Overall performance is reduced when underground.",
	L"Will drown easily if attempt to swim.",
	L"A look at large insects can cause big problems\nand being in tropical sectors also reduces performance a bit.",
	L"Sometimes forgets orders given and will lose some APs if it happens in combat.",
	L"Will go psycho and shoot like mad once in a while\nand will lose morale if unable to do so with equipped weapon.",
	L"Drastically reduced hearing.",
	L"Reduced sight range.",
	L"Drastically increased bleeding.",	// TODO.Translate
	L"Performance suffers while on a rooftop.",	// TODO.Translate
	L"Occasionally harms self.",
};


STR16 gzIMPProfileCostText[]=
{
	L"The profile cost is $%d. Authorize payment?",
};

STR16 zGioNewTraitsImpossibleText[]=
{
	L"You cannot choose the New Trait System with PROFEX utility deactivated. Check your JA2_Options.ini for entry: READ_PROFILE_DATA_FROM_XML.",
};
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//@@@:  New string as of March 3, 2000.
STR16	gzIronManModeWarningText[]=
{
	L"Wybrałeś tryb CZŁOWIEKA Z ŻELAZA. Opcja ta sprawi, że gra będzie dużo trudniejsza, ponieważ nie będzie możliwości zapisywania gry podczas walki. Będzie to miało wpływ na cały przebieg rozgrywki. Czy na pewno chcesz grać w trybie CZŁOWIEKA Z ŻELAZA?",
	L"Wybrałeś tryb CZŁOWIEKA Z ŻELIWA. Opcja ta sprawi, że gra będzie nieco trudniejsza, gdyż nie będziesz miał możliwości zapisywania gry podczas walki w trybie turowym. Będzie to miało wpływ na cały przebieg rozgrywki.  Czy na pewno chcesz grać w trybie CZŁOWIEKA Z ŻELIWA?",
	L"Wybrałeś tryb CZŁOWIEKA ZE STALI. Opcja ta sprawi, że gra będzie znacznie trudniejsza, gdyż będziesz mógł zapisać grę zaledwie raz dziennie, o %02d:00. Będzie to miało wpływ na cały przebieg rozgrywki. Jesteś pewien, że gra w trybie CZŁOWIEKA ZE STALI to dobry pomysł?",
};

STR16 gzDisplayCoverText[]=
{
	L"Osłona: %d/100 %s, Oświetlenie: %d/100",
	L"Zasięg broni: %d/%d pól, Szansa trafienia: %d/100",
	L"Zasięg broni: %d/%d pól, Stabilność broni: %d/100",
	L"Ukryj wyświetlani informacji o osłonie",
	L"Pokaż zasięg wzroku postaci",
	L"Pokaż stefy zagrożenia postaci",
	L"Las", // wanted to use jungle , but wood is shorter in german too (dschungel vs wald)
	L"Miasto",
	L"Pustynia",
	L"Śnieg",
	L"Las i pustynia",
	L"Las i miasto",
	L"Las i śnieg",
	L"Pustynia i miasto",
	L"Pustynia i śnieg",
	L"Miasto i śnieg",
	L"-", // yes empty for now				// TODO.Translate
	L"Cover: %d/100, Brightness: %d/100",
	L"Footstep volume",
	L"Stealth difficulty",
	L"Trap level",
};


#endif

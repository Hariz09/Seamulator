//  ,---.                                   ,--.          ,--.                 
// '   .-'  ,---.  ,--,--.,--,--,--.,--.,--.|  | ,--,--.,-'  '-. ,---. ,--.--. 
// `.  `-. | .-. :' ,-.  ||        ||  ||  ||  |' ,-.  |'-.  .-'| .-. ||  .--' 
// .-'    |\   --.\ '-'  ||  |  |  |'  ''  '|  |\ '-'  |  |  |  ' '-' '|  |    
// `-----'  `----' `--`--'`--`--`--' `----' `--' `--`--'  `--'   `---' `--'  Hriz                                                       
//———————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————

// Creator: Hriz#1171
// Helper: Adumb#9587, aluqis_#9232, 「Zhyr」#5187
// Title: Seamulator
// Version: 3.0
// Language: C++
// Time: 29 July 2022 - 9 Aug 2022
// Code: 2.885 Line



/*
,--.  ,--.                  ,--.               
|  '--'  | ,---.  ,--,--. ,-|  | ,---. ,--.--. 
|  .--.  || .-. :' ,-.  |' .-. || .-. :|  .--' 
|  |  |  |\   --.\ '-'  |\ `-' |\   --.|  |    
`--'  `--' `----' `--`--' `---'  `----'`--'   
*/
#include <bits/stdc++.h>
#include <unistd.h>
using namespace std;
#define AdumB string pwAdumB = moznckopl(7772658273904857);
#define ryu string pwryu = moznckopl(83786580);
#define RealFerron14 string pwRealFerron14 = moznckopl(6568777378);
#define namakolimit string pwnamakolimit = moznckopl(787165848582);
#define Back cout << "\n\nPress the enter to go back "; cin.get(); if(cin.get() == '\n') system("clear");
#define Less system("clear"), cout << "\x1b[31myou don't have enough money!\033[0m";
#define Answer cout << "\nEnter a number or type \"0\" to go back "; cin >> ans; if(ans == "0") system("clear");
#define soldBegin cout << "\x1b[38;2;70;70;70m";
#define soldEnd cout << "\x1b[1m\x1b[38;2;255;0;0m[SOLD]\x1b[0m";
#define alrSold system("clear"), cout << "\x1b[1m\x1b[38;2;255;0;0mSOLD!\x1b[0m";
#define ll long long
#define pb push_back
#define fi first
#define se second


/*                                              
,------.            ,--.           
|  .-.  \  ,--,--.,-'  '-. ,--,--. 
|  |  \  :' ,-.  |'-.  .-'' ,-.  | 
|  '--'  /\ '-'  |  |  |  \ '-'  | 
`-------'  `--`--'  `--'   `--`--'  
*/

//Special
char* pwHriz = getenv("pwHriz");
char* pwEx = getenv("pwEx");

//Var
ll level(1), bplevel(0), xp(0), backpack(10), fish(0), Level_Rank(0), Game(1), sizeBp(0), Random(0), Loading_Cnt(0);
string nickname, locks = "[🔒]", unlocks = "    ", Gap = " ", GapTxt = "    ", wait = ".";
//Arr
string Pin_Map[4]; 

bool coma = false, loop = false;
//ans
string ans;
//Money
ll Allmoney(0), money(0), money_K(0), money_M(0), money_B(0), money_T(0), money_Qa(0), money_Qi(0), money_Sx(0);
//Items
ll wood(0), wood_K(0), wood_plank(0), gold(0), gold_K(0), gold_bar(0), diamond(0), ruby(0);
//Curr
ll CurrRod(0), CurrMap(1), CurrBait(0), CurrPot(0), CurrBoat(0), CurrHat(0), CurrVest(0), CurrHire(0), CurrRide(0), CurrPet(0);

ll BestMoney(0), BestFish(0), BestWood(0), BestGold(0);
//Map
bool MapPiece_1(false), MapPiece_2(false), MapPiece_3(false), CompleteMap(false);
//Fortune
ll N_Cookies(0), L_Cookies(0);

//Admin
ll CostumeBMoney(0), CostumeBExp(0), CostumeBCatch(0);
string ID = " ", pw = " ";
string ID_Ex = "\x1b[1m\x1b[38;2;000;255;126mE\x1b[38;2;127;255;110mx\x1b[38;2;179;254;102mam\x1b[38;2;200;253;101mp\x1b[38;2;237;251;106mle 🎖 🥇{10x}🥈{50x}🥉{99x}\x1b[0m";

bool Tax = true, Daily_Commission = false;

//Vector
vector<string> bp;
vector<string> Stat;
vector<string> Rarity;
vector<string> Rod;
vector<string> Baits;
vector<string> InfBait;
vector<string> Potions;
vector<string> InfPot;
vector<string> TipsTxt;
vector<string> Load_Txt;
vector<string> Boat;
vector<string> Hat;
vector<string> InfHat;
vector<string> CostHat;
vector<string> Vest;
vector<string> Hire;
vector<string> Ride;
vector<string> Pet;
//FortuneEvent
vector<string> Cookies;
//Vector elements
void Fill_All(){
  //Tips Text
  TipsTxt.pb("Type 0 and save your progress so you can continue it later");
  TipsTxt.pb("Open Treasure Chest to get a rare Rod that gives you buff!");
  TipsTxt.pb("Check Library there is a lot of useful information");
  TipsTxt.pb("Open the map to explore further and unlock new features");
  TipsTxt.pb("Check Leaderboard and Achievemet to get exclusive rewards");
  //Status Text
Stat.pb("\x1b[38;2;000;255;126mR\x1b[38;2;127;255;110mi\x1b[38;2;179;254;102mc\x1b[38;2;200;253;101mh\x1b[38;2;237;251;106m!\033[0m");
  Stat.pb("\x1b[38;2;004;053;179mL\x1b[38;2;000;117;228mu\x1b[38;2;000;168;235mc\x1b[38;2;000;214;216mk\x1b[38;2;109;255;195my!\033[0m");
  Stat.pb("\x1b[38;2;090;50;205mB\x1b[38;2;126;60;218mo\x1b[38;2;159;72;231mo\x1b[38;2;190;85;243ms\x1b[38;2;220;98;255mt!\033[0m");
Stat.pb("\x1b[38;2;255;0;0mF\x1b[38;2;255;160;0me\x1b[38;2;31;252;87ms\x1b[38;2;84;244;158mt\x1b[38;2;0;137;255mi\x1b[38;2;0;201;251mv\x1b[38;2;255;0;252ma\x1b[38;2;180;152;255ml 🎭\033[0m");
  Stat.pb("\x1b[1m\x1b[38;2;000;255;126mSu\x1b[38;2;127;255;110mper \x1b[38;2;179;254;102mLu\x1b[38;2;200;253;101mc\x1b[38;2;237;251;106mky! 🍀\x1b[0m");
  Stat.pb("\x1b[38;2;0;255;220mR\x1b[38;2;10;235;220mu\x1b[38;2;20;215;220ml\x1b[38;2;30;195;220me\x1b[38;2;40;175;220mrs \x1b[38;2;0;255;220mo\x1b[38;2;10;235;220mf \x1b[38;2;0;255;220mt\x1b[38;2;10;235;220mh\x1b[38;2;20;215;220me \x1b[38;2;30;195;220mS\x1b[38;2;40;175;220me\x1b[38;2;50;155;220ma 👑\033[0m");
  //Baits
  Baits.pb("Worms");
  Baits.pb("\x1b[38;2;222;255;0mShrimp Lure\033[0m");
  Baits.pb("\x1b[38;2;255;0;0mOther\x1b[38;2;253;104;20mworld\x1b[38;2;251;151;61mly \x1b[38;2;250;189;110mBait\033[0m");
  Baits.pb("\x1b[38;2;0;255;126mCatch-\x1b[38;2;127;255;110mof-\x1b[38;2;179;254;102mthe-\x1b[38;2;200;253;101mDay \x1b[38;2;237;251;106mBait\033[0m");
  InfBait.pb("~ Normal Fishing");
  InfBait.pb("~ Double your fish size!");
  InfBait.pb("~ Triple your fish size!");
  InfBait.pb("~ Quadraple your Exp gain and fish size!");
  //Rod
  Rod.pb("Hand");
  Rod.pb("Wooden Rod");
  Rod.pb("Bamboo Rod");
  Rod.pb("Mighty Snow Rod");
  Rod.pb("Cursed Rod");
  Rod.pb("\033[93mGolden Rod\033[0m");
Rod.pb("\x1b[38;2;255;00;00mF\x1b[38;2;255;160;0me\x1b[38;2;31;252;87ms\x1b[38;2;84;244;158mt\x1b[38;2;0;137;255mi\x1b[38;2;0;201;251mv\x1b[38;2;255;0;252ma\x1b[38;2;180;152;255ml \x1b[38;2;255;0;0mR\x1b[38;2;31;252;87mo\x1b[38;2;0;137;255md 🎉\033[0m");  Rod.pb("\x1b[38;2;230;255;112mF\x1b[38;2;216;255;97mo\x1b[38;2;199;255;83mr\x1b[38;2;180;255;69mt\x1b[38;2;159;255;54mu\x1b[38;2;133;255;39mn\x1b[38;2;100;255;22me \x1b[38;2042;255;00mRod 🍀\033[0m");
  Rod.pb("\x1b[38;2;255;90;5mAn\x1b[38;2;255;80;10mces\x1b[38;2;255;70;15mtral \x1b[38;2;255;60;20mRod\x1b[38;2;255;50;25m ༗\033[0m");
  Rod.pb("\x1b[38;2;255;255;0mHea\x1b[38;2;255;245;10mven\x1b[38;2;255;235;15mly \x1b[38;2;255;225;20mRod 😇\033[0m");
  Rod.pb("\x1b[38;2;0;255;220mNep\x1b[38;2;5;245;220mtu\x1b[38;2;10;235;220mne's \x1b[38;2;15;225;220mTri\x1b[38;2;20;215;220mdent 🔱\033[0m");
  //Potion
  Potions.pb("Fresh Water");
  Potions.pb("\033[92mBootle of Greed\033[0m");
  Potions.pb("\x1b[38;2;253;149;0mExperience Potion\033[0m");
  Potions.pb("\033[94mPristine Potion\033[0m");
  Potions.pb("\x1b[38;2;0;255;126mExqui\x1b[38;2;127;255;110msi\x1b[38;2;179;254;102mte \x1b[38;2;200;253;101mPot\x1b[38;2;237;251;106mion\033[0m");
  Potions.pb("\x1b[38;2;253;149;0mEs \x1b[38;2;255;172;0mTe\x1b[38;2;255;196;0mh \x1b[38;2;255;220;0mAng\x1b[38;2;253;244;0met\033[0m");
  Potions.pb("\x1b[38;2;0;255;220mS\x1b[38;2;10;235;220me\x1b[38;2;20;215;220ma\x1b[38;2;30;195;220mG\x1b[38;2;40;175;220mo\x1b[38;2;50;155;220md's \x1b[38;2;0;255;220mT\x1b[38;2;10;235;220me\x1b[38;2;20;215;220ma\x1b[38;2;30;195;220mr\x1b[38;2;40;175;220ms\033[0m");
  InfPot.pb("~ Keep you fresh :)");
  InfPot.pb("~ Double your fish size!");
  InfPot.pb("~ Double your Exp gain from fishing!");
  InfPot.pb("~ Double your Exp and fish size!");
  InfPot.pb("~ Double your fish catch!");
  InfPot.pb("~ Quadraple your fish catch!");
  InfPot.pb("~ Quintuple your fish catch, size, and Exp!");
  //Rarity
  Rarity.pb("\x1b[38;2;188;71;238m{Epic}\033[0m");
  Rarity.pb("\x1b[38;2;20;215;220m{ℒℯℊℯ𝓃𝒹𝒶𝓇𝓎}\033[0m");
  Rarity.pb("\x1b[38;2;255;0;0m{𝓜𝔂𝓽𝓱𝓲𝓬𝓪𝓵}\033[0m");
  //Boat
  Boat.pb("-");
  Boat.pb("\x1b[38;2;181;117;74mWooden Boat\x1b[0m");
  Boat.pb("\x1b[38;2;249;191;43mFancy Golden Boat\033[0m");
  //Hat
  Hat.pb("-");
  Hat.pb("\x1b[38;2;181;117;74mWooden Hat\x1b[0m");
  Hat.pb("\x1b[38;2;134;081;012mSt\x1b[38;2;155;107;048mra\x1b[38;2;176;133;081mw \x1b[38;2;176;133;081mH\x1b[38;2;196;160;115mat Lvl.2\x1b[0m");
  Hat.pb("\x1b[38;2;237;251;106mPro\x1b[38;2;200;253;101mfes\x1b[38;2;179;254;102msio\x1b[38;2;127;255;110mnal \x1b[38;2;237;251;106mFis\x1b[38;2;200;253;101mhi\x1b[38;2;179;254;102ng \x1b[38;2;000;255;126mHat Lvl.3\x1b[0m");
  Hat.pb("\x1b[1m✨ \x1b[38;2;255;100;24mLux\x1b[38;2;255;129;13mu\x1b[38;2;255;155;07mry \x1b[38;2;255;100;24mGol\x1b[38;2;255;129;13mden \x1b[38;2;255;155;07mFi\x1b[38;2;255;180;18msh\x1b[38;2;255;205;38ming \x1b[38;2;255;180;18mH\x1b[38;2;255;205;38mat Lvl.4\x1b[0m");
  Hat.pb("\x1b[1m\x1b[38;2;255;03;03m༗  An\x1b[38;2;255;40;38mces\x1b[38;2;255;62;60mtor \x1b[38;2;255;40;38mFi\x1b[38;2;255;62;60msh\x1b[38;2;255;79;80ming H\x1b[38;2;255;95;99mat Lvl.5\x1b[0m");
  Hat.pb("\x1b[1m💠 \x1b[38;2;003;056;255mCe\x1b[38;2;000;106;255mle\x1b[38;2;000;140;255mst\x1b[38;2;000;169;255mial \x1b[38;2;000;140;255mFi\x1b[38;2;000;169;255msh\x1b[38;2;000;195;255min\x1b[38;2;073;218;255mg H\x1b[38;2;162;239;253mat\x1b[0m");
  InfHat.pb(Stat[0] + "{2x}");
  InfHat.pb(Stat[0] + "{2x}, " + Stat[2] + "{10x}");
  InfHat.pb(Stat[0] + "{5x}, " + Stat[2] + "{15x}");
  InfHat.pb(Stat[0] + "{6x}, " + Stat[2] + "{20x}, " + Stat[1] + "{2}");
  CostHat.pb("🪙  10B");
  CostHat.pb("🪙  20B");
  CostHat.pb("20 gold bar and 10 wood plank");
  CostHat.pb("30 gold bar and 100 wood plank");
  //Vest
  Vest.pb("-");
  Vest.pb("\x1b[38;2;237;251;106mPro\x1b[38;2;200;253;101mfes\x1b[38;2;179;254;102mio\x1b[38;2;127;255;110mnal \x1b[38;2;237;251;106mFish\x1b[38;2;200;253;101mer\x1b[38;2;179;254;102mman \x1b[38;2;127;255;110mVe\x1b[38;2;000;255;126mst\x1b[0m");
  //Hire
  Hire.pb("-");
  Hire.pb("Tour guide 👦");
  Hire.pb("\x1b[38;2;206;206;206mK\x1b[38;2;183;183;183mn\x1b[38;2;160;160;160mi\x1b[38;2;138;138;138mg\x1b[38;2;117;117;117mth 🗡️ \x1b[0m");
  Hire.pb("\x1b[1m\x1b[38;2;0;255;220mW\x1b[38;2;7;240;220mi\x1b[38;2;14;225;220mz\x1b[38;2;21;210;220ma\x1b[38;2;35;195;220mrd 🧙\x1b[0m");
  //Ride
  Ride.pb("\x1b[38;2;134;081;012mH\x1b[38;2;155;107;048mo\x1b[38;2;176;133;081mr\x1b[38;2;196;160;115ms\x1b[38;2;216;188;151me 🐎\x1b[0m");
  Ride.pb("\x1b[1m\x1b[38;2;000;255;126mD\x1b[38;2;127;255;110mr\x1b[38;2;179;254;102ma\x1b[38;2;200;253;101mg\x1b[38;2;237;251;106mon 🐉\x1b[0m");
  //Pet
  Pet.pb("-");
  Pet.pb("Fluffy Cat 😺");
  Pet.pb("\x1b[38;2;255;100;24mSp\x1b[38;2;255;129;13mri\x1b[38;2;255;155;07mng \x1b[38;2;255;180;18mFa\x1b[38;2;255;205;38miry 🧚\x1b[0m");
  Pet.pb("\x1b[1m\x1b[38;2;003;092;255mI\x1b[38;2;000;147;255mc\x1b[38;2;000;189;255me \x1b[38;2;000;147;255mfr\x1b[38;2;000;189;255mo\x1b[38;2;000;224;255mst \x1b[38;2;000;189;255mD\x1b[38;2;000;224;255mra\x1b[38;2;116;255;247mgon 🐉\x1b[0m");
  //Cookies
  Cookies.pb("\x1b[38;2;255;155;07mFortune \x1b[38;2;254;252;87mCookies 🥠\x1b[0m");
  Cookies.pb("\x1b[1m\x1b[38;2;255;100;24mLux\x1b[38;2;255;129;13mu\x1b[38;2;255;155;07mry \x1b[38;2;255;155;07mFor\x1b[38;2;255;180;18mtu\x1b[38;2;255;205;38mne \x1b[38;2;255;205;38mCoo\x1b[38;2;255;229;61mki\x1b[38;2;254;252;87mes 🥠\x1b[0m");
}

//Loading Text
void Fill_Load(){
    if(CurrMap == 1){
    Load_Txt.clear();   
    Load_Txt.pb("Downloading Resources (1/2)");
    Load_Txt.pb("Downloading Resources (2/2)");
    Load_Txt.pb("Downloading Text files");
    Load_Txt.pb("Filling Treasure Chest");
    Load_Txt.pb("Finishing");
  }
  else if(CurrMap == 2){
    Load_Txt.clear();
    for(ll i=1; i<=20; i++) Load_Txt.pb("Downloading Resources (" + to_string(i) + "/20)");
    Load_Txt.pb("Downloading Town resources");
    Load_Txt.pb("Finishing");
  }
}

ll Hand_Size(3), Basic_Size(100), Rate_Festival(0), Ex_Size(100), God_Size(100), mini_size(10), Normal_Chest(100);
string Fish_Hand(ll get){
  if(BestFish < 1) BestFish = 1;
  if(get < 2) return "Goldfish";
  else return "Wood";
}
string Fish_Common(ll get){
  if(BestFish < 1) BestFish = 1;
  if(CurrRod >= 6) Rate_Festival = 20;
  if(get < 35) return "Wood";
  else if(get < 60) return "Goldfish";
  else if(get < 80) return "Catfish";
  else if(get < 90) return "Salmon";
  else if(get < 98  + Rate_Festival) return "Barracuda";
  else return "Tuna";
}
string Fish_Uncommon(ll get){
  if(BestFish < 2) BestFish = 2;
  if(CurrRod >= 6) Rate_Festival = 20;
  if(get < 35 && CurrRod<7) return "Wood";
  else if(get < 60) return "Banana Betta";
  else if(get < 80) return "Golden Koi";
  else if(get < 90) return "Adventurous Angelerfish";
  else if(get < 98 + Rate_Festival) return "Santa Shark";
  else return "Dory";
}
string Fish_Rare(ll get){
  if(BestFish < 3) BestFish = 3;
  if(CurrRod >= 6) Rate_Festival = 20;
  if(get < 35 && CurrRod<7) return "Wood";
  else if(get < 60) return "Alcoholic Anchovy";
  else if(get < 80) return "Pumpkin Pufferfish";
  else if(get < 90) return "Machete Marlin";
  else if(get < 98 +  + Rate_Festival) return "Satinist Seahorse";
  else return "Hammerhead Shark";
}
string Fish_Epic(ll get){
  if(BestFish < 4) BestFish = 4;
  if(get < 25) return "Gold";
  else if(get < 45) return "Rose Fish";
  else if(get < 60) return "Omniscient Orca";
  else if(get < 72) return "Coral Fish";
  else if(get < 82) return "Dragon Carp";
  else if(get < 90) return "Narwhal";
  else if((get < 95) && CurrMap >= 3) return "Mosasaurus";
  else if((get < 99) && CurrMap >= 3) return "Nautilus";
  else if((get < 100) && CurrMap >= 4) return "Mosasaurus";
  else return "Rose Fish";
}
string Fish_Legend(ll get){
  if(BestFish < 5) BestFish = 5;
  if(get < 42) return "Manly Manta-ray";
  else if(get < 62) return "Giganto Whale";
  else if((get < 79) && CurrMap >= 3) return "Circus Cthulhu";
  else if((get < 92) && CurrMap >= 3) return "Dracopristis";
  else if((get < 99) && CurrMap >= 4) return "Rainbow Fish";
  else if((get < 100) && CurrMap >= 4) return "One-Eyed Chaos Lobster";
  else return "Manly Manta-ray";
}
string Fish_Myth(ll get){
  if(BestFish < 6) BestFish = 6;
  if(get < 45) return "Krinky Kraken";
  else if(get < 80) return "Megalodon";
  else if((get < 99) && CurrMap >= 4) return "Colossal Squid";
  else if((get < 100) && CurrMap >= 4) return "Acient Rune Shark";
  else return "Krinky Kraken";
}

string KingsChest(ll get){
  if(get < 50) return "10 Wood";
  else if(get < 70) return "🪙  4K";
  else if(get < 90) return "Golden Koi";
  else if(get < 100) return "Golden Rod";
  else return "10 Wood";
}
string WoodChest(ll get){
  if(get < 64) return "10 Wood";
  else if(get < 84) return "50 Wood";
  else if(get < 94) return "100 Wood";
  else if(get < 99) return "500 Wood";
  else return "1K Wood";
}
string GoldChest(ll get){
  if(get < 64) return "10 Gold";
  else if(get < 84) return "50 Gold";
  else if(get < 94) return "100 Gold";
  else if(get < 99) return "500 Gold";
  else return "1K Gold";
}
/*                                                  
 ,---.                        ,--.  ,--.                
/  .-',--.,--.,--,--,  ,---.,-'  '-.`--' ,---. ,--,--,  
|  `-,|  ||  ||      \| .--''-.  .-',--.| .-. ||      \ 
|  .-''  ''  '|  ||  |\ `--.  |  |  |  |' '-' '|  ||  | 
`--'   `----' `--''--' `---'  `--'  `--' `---' `--''--'
*/

//Format money with comma
template<class T>
string Format(T value){stringstream ss; ss.imbue(locale("")); ss << fixed << value; return ss.str();}
string moznckopl(ll jikjuy){string jumxidfa; while(jikjuy > 0){jumxidfa += char(jikjuy%100); jikjuy /= 100;} reverse(jumxidfa.begin(), jumxidfa.end()); return jumxidfa;}

//RGB
string RGB(int r, int g, int b){return "\x1b[38;2;" + to_string(r) + ';' + to_string(g) + ';' + to_string(b) + 'm';}
AdumB 
ryu 
RealFerron14 
namakolimit

//Buy
bool success = false;
void Buy(ll price, string symbol){
  if(symbol == "non"){
    if(money >= price) success = true, money -= price;
    else if(money_K) success = true, money_K--, money = 1000, money -= price;
    else if(money_M||money_B||money_T||money_Qa||money_Qi||money_Sx) success = true;
  }
  if(symbol == "K"){
    if(money_K >= price) success = true, money_K -= price;
    else if(money_M) success = true, money_M--, money_K = 1000, money_K -= price;
    else if(money_B||money_T||money_Qa||money_Qi||money_Sx) success = true;
  }
  if(symbol == "M"){
    if(money_M >= price) success = true, money_M -= price;
    else if(money_B) success = true, money_B--, money_M = 1000, money_M -= price;
    else if(money_T||money_Qa||money_Qi||money_Sx) success = true;
  }
  if(symbol == "B"){
    if(money_B >= price) success = true, money_B -= price;
    else if(money_T) success = true, money_T--, money_B = 1000, money_B -= price;
    else if(money_Qa||money_Qi||money_Sx) success = true;
  }
  if(symbol == "T"){
    if(money_T >= price) success = true, money_T -= price;
    else if(money_Qa) success = true, money_Qa--, money_T = 1000, money_T -= price;
    else if(money_Qi||money_Sx) success = true;
  }
  if(symbol == "Qa"){
    if(money_Qa >= price) success = true, money_Qa -= price;
    else if(money_Qi) success = true, money_Qi--, money_Qa = 1000, money_Qa -= price;
    else if(money_Sx) success = true;
  }
  if(symbol == "Qi"){
    if(money_Qi >= price) success = true, money_Qi -= price;
    else if(money_Sx) success = true, money_Sx--, money_Qi = 1000, money_Qi -= price;
  }
  if(symbol == "Sx"){
    if(money_Sx >= price) success = true, money_Sx -= price;
  }
  system("clear");
  if(success) cout << "\x1b[92mPayment successful, you've spent 🪙  " << price << (symbol == "non"? " ":symbol) << "!\033[0m\n";
  else cout << "\x1b[31mYou don't have enough money!\033[0m\n";
}
void Buy_Mat(ll price, string symbol, string mat){
  if(mat == "Wood"){
    if(symbol == "non"){
      if(wood >= price) success = true, wood -= price;
      else if(wood_K) wood_K--, wood += 1000, wood -= price;
    }
    else if(symbol == "K"){
      if(wood_K >= price) success = true, wood_K -= price;
    }
  }
  if(mat == "Gold"){
    if(symbol == "non"){
      if(gold >= price) success = true, gold -= price;
      else if(gold_K) gold_K--, gold += 1000, gold -= price;
    }
    else if(symbol == "K"){
      if(gold_K >= price) success = true, gold_K -= price;
    }
  }

  system("clear");
  if(success) cout << "\x1b[92m Payment successful, you've spent " << price << (symbol == "non"? " ":symbol) << " " << mat << "!\033[0m\n";
  else cout << "\x1b[31m you don't have enough " << mat << "!\033[0m\n";
}
//Save
void SaveMat(){
  if(wood && BestWood < 1) BestWood = 1;
  if(gold && BestGold < 1) BestGold = 1;
  if(wood >= 1000) wood_K += wood/1000, wood %= 1000, BestWood = 2;
  if(gold >= 1000) gold_K += gold/1000, gold %= 1000, BestGold = 2;
  
  if(wood_K >= 100 && BestWood < 100) BestWood = 100;
  else if(wood_K >= 10 && BestWood < 10) BestWood = 10;

  if(gold_K >= 100 && BestGold < 100) BestGold = 100;
  else if(gold_K >= 10 && BestGold < 10) BestGold = 10;
}
void SaveMoney(){
  while(money >= 1000){
    if(money < 1000000) money_K += money/1000, money = money%1000;
    else if(money < 1000000000) money_M += money/1000000, money = money%1000000;
    else if(money < 1000000000000) money_M += money/1000000000, money = money%1000000000;
  }
  while(money_K >= 1000){
    if(money_K < 1000000) money_M += money_K/1000, money_K = money_K%1000;
    else if(money_K < 1000000000) money_B += money_K/1000000, money_K = money_K%1000000;
    else if(money_K < 1000000000000) money_T += money_K/1000000000, money_K = money_K%1000000000;
  }
  while(money_M >= 1000){
    if(money_M < 1000000) money_B += money_M/1000, money_M = money_M%1000;
    else if(money_M < 1000000000) money_T += money_M/1000000, money_M = money_M%1000000;
    else if(money_M < 1000000000000) money_Qa += money_M/1000000000, money_M = money_M%1000000000;
  }
  while(money_B >= 1000){
    if(money_B < 1000000) money_T += money_B/1000, money_B = money_B%1000;
    else if(money_B < 1000000000) money_Qa += money_B/1000000, money_B = money_B%1000000;
    else if(money_B < 1000000000000) money_Qi += money_B/1000000000, money_B = money_B%1000000000;
  }
  while(money_T >= 1000){
    if(money_T < 1000000) money_Qa += money_T/1000, money_T = money_T%1000;
    else if(money_T < 1000000000) money_Qi += money_T/1000000, money_T = money_T%1000000;
    else if(money_T < 1000000000000) money_Sx += money_T/1000000000, money_T = money_T%1000000000;
  }
  while(money_Qa >= 1000){
    if(money_Qa < 1000000) money_Qi += money_Qa/1000, money_Qa = money_Qa%1000;
    else if(money_Qa < 1000000000) money_Sx += money_Qa/1000000, money_Qa = money_Qa%1000000;
  }
  while(money_Qi >= 1000){
    money_Sx += money_Qi/1000, money_Qi = money_Qi%1000;
}

  if(money_Sx && BestMoney < 6) BestMoney = 6;
  else if(money_Qi && BestMoney < 5) BestMoney = 5;
  else if(money_Qa && BestMoney < 4) BestMoney = 4;
  else if(money_T && BestMoney < 3) BestMoney = 3;
  else if(money_B && BestMoney < 2) BestMoney = 2;
  else if(money_M && BestMoney < 1) BestMoney = 1;
}
//Money
void Money(){
  ll out_money(0);
  string out_symbol = "";
  if(money_Sx) cout << Format(money_Sx) << " Sx" << '\n';
  else{
    if(money_Qi) out_money = money_Qi, out_symbol = " Qi";
    else if(money_Qa) out_money = money_Qa, out_symbol = " Qa";
    else if(money_T) out_money = money_T, out_symbol = " T";
    else if(money_B) out_money = money_B, out_symbol = " B";
    else if(money_M) out_money = money_M, out_symbol = " M";
    else if(money_K) out_money = money_K, out_symbol = "K";
    else out_money = money;
    cout << out_money << out_symbol << endl;
  }
}
//Loading
void LoadingDisplay(){
  cout << Gap  <<"\x1b[38;2;10;235;220m             ¸.·`\\           "<< '\n';
  cout << Gap  <<"\x1b[38;2;15;225;220m          .:`¸...¸\\          "<< '\n';
  cout << Gap  <<"\x1b[38;2;20;215;220m    (´´·.¸.·´   ·  `·.¸      "<< '\n';
  cout << Gap  <<"\x1b[38;2;25;205;220m      {  ,      ;`:( o :     "<< '\n';
  cout << Gap  <<"\x1b[38;2;30;195;220m    (¸.·´/`·.¸  .` ¸.·´      "<< '\n';
  cout << Gap  <<"\x1b[38;2;35;185;220m        ´·.¸/´´//´           "<< '\n';
  
  if(Load_Txt.size() == 5) Gap += "             ";
  else Gap += "   ";
  
  cout << "\n\n\n";
  cout << "\033[90mLoading" << wait << GapTxt << "              " << Load_Txt[Loading_Cnt] << "\033[0m\n";
  wait += '.';
	GapTxt.erase(GapTxt.begin() + GapTxt.size() - 1);
  if(wait == "....") wait = '.', GapTxt = "    ";
  Loading_Cnt++;
}
void Loading(){
  Fill_Load();
	for(int i=0; i<Load_Txt.size(); i++){
    if(Load_Txt.size() == 5) sleep(2);
    else sleep(1);
    system("clear");
    cout << "\x1b[38;2;0;255;220m   ,(   ,(   ,(   ,(   ,(   ,(   ,(   ,(   ,(   ,(   ,(   ,(   ,(   ,(   ,(   ,(\033[0m\n";
    cout << "\x1b[38;2;10;245;220m`-'  `-'  `-'  `-'  `-'  `-'  `-'  `-'  `-'  `-'  `-'  `-'  `-'  `-'  `-'  `-'  `\033[0m\n";

    LoadingDisplay();

    if(CurrMap == 1 && Loading_Cnt == 1) Fill_All();
	}
  
  if(Load_Txt.size() == 5) sleep(2);
  else sleep(1);
  Loading_Cnt = 0;
  Gap = " ", GapTxt = "    ", wait = ".";
}
void Loading_Login(){  
  cout << "\033[92m";
  cout << "Welcome back to Seamulator " << nickname << " \033[92m!\n\n"; sleep(1);
  cout << "Please wait and don't type anything!\n"; sleep(1);
  
  Fill_All();
  
  cout << "Downloading Seamulator v3.3 resources...\n"; sleep(1);
  cout << "Checking " << nickname << " \033[92mfiles...\n"; sleep(1);
  cout << "Downloading Home resources...\n"; sleep(1);

  if(CurrMap >= 2) cout << "Downloading Maria Kingdom resources...\n", sleep(1);
  else if(CurrMap >= 3) cout << "Downloading Sky Island resources...\n", sleep(1);

  cout << "Calculating your money and Fishes...\n",sleep(1);

  system("clear");
  cout << "Welcome back to Seamulator " << nickname << "\033[92m!\033[0m\n\n";
}
//Bonus
ll Bonus_Money(){
  ll ans(1);

  // Event
  ans = 3;
  switch(CurrHat){
    case 1: ans+=2; break;
    case 2: ans+=2; break;
    case 3: ans+=5; break;
    case 4: ans+=6; break;
  }
  switch(CurrRod){
    case 5: ans+=2; break;
    case 6: ans+=2; break;
    case 7: ans+=3; break;
  }
  switch(CurrBait){
    case 1: ans+=2; break;
    case 2: ans+=3; break;
    case 3: ans+=5; break;
  }
  switch(CurrPot){
    case 1: ans+=2; break;
    case 3: ans+=3; break;
    case 6: ans+=5; break;
  }
  switch(Level_Rank){
    case 4: ans+=2; break;
    case 5: ans+=3; break;
    case 6: ans+=5; break;
    case 7: ans+=7; break;
    case 8: ans+=10; break;
  }
  switch(CurrHire){
    case 2: ans+=3; break;
    case 3: ans+=5; break;
  }
  switch(CurrPet){
    case 1: ans+=2; break;
    case 2: ans+=5; break;
    case 3: ans+=8; break;
  }

  if(ans > 1) ans--;
  if(CostumeBMoney) ans = CostumeBMoney;
  return ans;
}
ll Bonus_Exp(){
  ll ans(1);

  switch(CurrHat){
    case 2: ans+=10; break;
    case 3: ans+=15; break;
    case 4: ans+=20; break;
  }
  switch(CurrVest){
    case 1: ans+=10; break;
  }
  switch(CurrRod){
    case 7: ans+=3; break;
  }
  switch(CurrBait){
    case 3: ans+=4; break;
  }
  switch(CurrPot){
    case 2: ans+=2; break;
    case 3: ans+=2; break;
    case 6: ans+=5; break;
  }
  switch(Level_Rank){
    case 2: ans+=2; break;
    case 3: ans+=5; break;
    case 4: ans+=10; break;
    case 5: ans+=15; break;
    case 6: ans+=20; break;
    case 7: ans+=30; break;
    case 8: ans+=40; break;
  }
  switch(CurrHire){
    case 2: ans+=10; break;
    case 3: ans+=15; break;
  }
  switch(CurrPet){
    case 1: ans+=5; break;
    case 2: ans+=10; break;
    case 3: ans+=20; break;
  }

  if(ans > 1) ans--;
  if(CostumeBExp) ans = CostumeBExp;
  return ans;
}
ll Bonus_Catch(){
  ll ans(1);

  switch(CurrHat){
    case 4: ans+=2; break;
  }
  switch(CurrRod){
    case 7: ans+=3; break;
  }
  switch(Level_Rank){
    case 6: ans+=2; break;
    case 7: ans+=3; break;
    case 8: ans+=4; break;
  }
  switch(CurrHire){
    case 3: ans+=2; break;
  }
  switch(CurrPet){
    case 3: ans+=2;
  }

  if(ans > 1) ans--;
  if(CostumeBCatch) ans = CostumeBCatch;
  return ans;
}
//Bait
void Bait(){
  cout << Baits[CurrBait] << '\n';
}
//Rod
void OutRod(){
  if(CurrRod < 5) cout << Rod[CurrRod] << endl;
  else if(CurrRod < 6) cout << Rod[CurrRod] << " - " << Rarity[0] << '\n';
  else if(CurrRod < 9) cout << Rod[CurrRod] << " - " << Rarity[1] << '\n';
  else cout << Rod[CurrRod] << " - " << Rarity[2] << '\n';
}
//Boost or Buff Status
void Status(){ 
  if(Bonus_Money() > 1) coma = true, cout << " " << Stat[0] << " {x" << Bonus_Money() << "}";
  if(Bonus_Catch() > 1) if(coma) cout << ",", coma = true, cout << " " << Stat[1] << " {x" << Bonus_Catch() << "}";
  if(Bonus_Exp() > 1) if(coma) cout << ",", coma = true, cout << " " << Stat[2] << " {x" << Bonus_Exp() << "}";
  if(CurrRod >= 6) if(coma) cout << ",", coma = true, cout << " " << Stat[3];
  if(CurrRod >= 7) if(coma) cout << ",", coma = true, cout << " " << Stat[4];
  if(CurrRod >= 10) if(coma) cout << ",", coma = true, cout << " " << Stat[5];
  coma = false;
  cout << '\n';
}
//Level
void OutLevel(ll lvl){
  if(lvl <= 50) cout << " \033[90mLvl." <<  Format(lvl) << " - Newbie\033[0m {★ ☆ ☆ ☆ ☆ }", Level_Rank = 1;
  else if (lvl <= 500) cout << " \033[92mLvl." << Format(lvl) << " - Specialist\033[0m {★ ★ ☆ ☆ ☆ }", Level_Rank = 2;
  else if (lvl <= 1000) cout << " \033[32mLvl." << Format(lvl) << " - Expert\033[0m {★ ★ ★ ☆ ☆ }", Level_Rank = 3;
  else if (lvl <= 2000) cout << " \033[95mLvl." << Format(lvl) << " - Candidate Master\033[0m {★ ★ ★ ★ ☆ }", Level_Rank = 4;
  else if (lvl <= 5000) cout << " \033[35mLvl." << Format(lvl) << " - Master\033[0m {★ ★ ★ ★ ★ }", Level_Rank = 5;
  else if(lvl <= 9000) cout << " \x1b[38;2;188;71;238mLvl." << Format(lvl) << " - Grandmaster {💫}\x1B[0m", Level_Rank = 6;
  else if(lvl <= 14000)cout << " \x1b[38;2;0;255;90mLvl." << Format(lvl) << " ♔ - \x1b[38;2;0;255;90mℒℯ\x1b[38;2;0;235;100mℊℯ𝓃\x1b[38;2;0;215;110m𝒹𝒶𝓇𝓎 {⭐⭐}\x1B[0m", Level_Rank = 7;
  else if(lvl <= 20000) cout << " \x1b[38;2;255;0;0mL\x1b[38;2;255;45;10mv\x1b[38;2;255;90;20ml." << Format(lvl) << " 👑 - \x1b[38;2;255;0;0m𝓜𝔂\x1b[38;2;255;45;10m𝓽𝓱𝓲\x1b[38;2;255;90;20m𝓬𝓪𝓵 {🌟🌟🌟🌟}\x1B[0m", Level_Rank = 8;
  else cout << nickname << " \x1b[38;2;0;255;220mL\x1b[38;2;10;235;220mv\x1b[38;2;20;215;220ml\x1b[38;2;30;195;220m." << Format(lvl) << " 😇 - \x1b[38;2;0;255;220mS\x1b[38;2;10;235;220me\x1b[38;2;20;215;220ma\x1b[38;2;30;195;220mG\x1b[38;2;40;175;220mo\x1b[38;2;50;155;220md {\033[0m✴ ✴ ✴ ✴ ✴ ✴ \x1b[38;2;50;155;220m}\033[0m", Level_Rank = 9;
}
void Level_Up(ll n){
  ll req(0);
  xp += n;
  if(Level_Rank < 5) req = 10;
  else if(Level_Rank == 4) req = 1000;
  else if(Level_Rank == 5) req = 5000;
  else if(Level_Rank == 6) req = 10000;
  else if(Level_Rank == 7) req = 20000;
  else if(Level_Rank == 8) req = 50000;
  else req = 100000;
    
  if(xp >= req) level+= xp/req, xp %= req;
}
//Random tips
void Tips(){
  cout << TipsTxt[rand() % TipsTxt.size()] << '\n';
}
//Equipment
void Eq(){
  if(CurrHat) coma = true, cout << Hat[CurrHat];
  if(CurrVest){
    if(coma) cout << ", ";
    cout << Vest[CurrVest];
    coma = true;
  }
  if(!coma) cout << "-";

  coma = false;
  cout << "\n";
}

//Menu Void
//(1) Catch a Fish
string RandomFish(){
  //Random Number for rarity, range deppend on Rod
  ll Rarities(1);
  if(CurrRod < 3) Rarities = (rand()%2) + 1; // 1-2
  else if(CurrRod < 5) Rarities = (rand() % 3) + 1; // 1-3
  else if(CurrRod < 6) Rarities = (rand() % 4) + 1; // 1-4
  else if(CurrRod < 7) Rarities = (rand() % 5) + 1; // 1-5
  else if(CurrRod < 12) Rarities = (rand() % 4) + 2; // 2-5
  
  if(CurrRod >= 6) Basic_Size = 140;

  //Generator
  //Hand
  if(CurrRod == 0) return Fish_Hand(rand() % Hand_Size);
  // Common
  else if(Rarities == 1) return Fish_Common(rand() % Basic_Size);
  // Uncommon
  else if(Rarities == 2) return Fish_Uncommon(rand() % Basic_Size);
  // Rare
  else if(Rarities == 3) return Fish_Rare(rand() % Basic_Size);
  // Epic
  else if((Rarities == 4) && CurrMap >= 2) return Fish_Epic(rand() % God_Size);
  // Legendary
  else if(Rarities == 5) return Fish_Legend(rand() % God_Size);
  // Mythical
  else if(Rarities == 6) return Fish_Myth(rand() % God_Size);

  else return "Wood";
}
void Fishing(ll n){
  //Random fish
  vector<string> catchs;
  int woodC(0), fishC(0), goldC(0);
  for(ll i=0; i<n; i++){
    catchs.pb(RandomFish());
    if(catchs[i] == "Wood") woodC++;
    else if(catchs[i] == "Gold") goldC++;
    else bp.pb(catchs[i]), fishC++;
  }

  bool firstC = true;
  if(woodC == 1) firstC = false, system("clear"), cout << "You found a Wood";
  else if(woodC) firstC = false, system("clear"), cout << "You found " << woodC << " woods";
  
  if(goldC){
    if(firstC) cout << "You found ";
    else cout << " and ";
    if(goldC == 1) firstC = false, system("clear"), cout << "a Gold";
    else if(goldC) firstC = false, system("clear"), cout << goldC << " golds";
  }
  
  if(fishC){
    if(firstC) cout << "You've catched ";
    else cout << " and ";
    if(catchs.size() == 1) system("clear"), cout << catchs[0];
    else if(catchs.size()) system("clear"), cout << fishC << " Fishes";
  }

  cout << "!\n";
  
  wood += woodC;
  gold += goldC;
  
  //Level UP
  Level_Up(fishC*Bonus_Exp());
  
}

//(2) Sell fish
void CekBP(){
  sizeBp = bp.size();
  //Full
  if(Bonus_Catch() > 1){
    if(sizeBp + Bonus_Catch() - 1 >= backpack) system("clear"), cout << "your backpack is full!";
    else Fishing(Bonus_Catch());
  }
  else{
    if(sizeBp == backpack) system("clear"), cout << "your backpack is full!";
    else Fishing(1);
  }
}
void Sell(){
  system("clear");
  //Cek Buff
  ll money_Bonus = Bonus_Money();

  //Sold
  ll tempMoney(0), tempMoney_K(0), tempMoney_M(0), tempMoney_B(0), tempMoney_T(0), tempMoney_Qa(0), tempMoney_Qi(0), tempMoney_Sx(0);

  for(ll i=0; i<bp.size(); i++){
     // Common
    if(bp[i] == "Goldfish") tempMoney += 1;
    else if(bp[i] == "Catfish") tempMoney += 3;
    else if(bp[i] == "Salmon") tempMoney += 5;
    else if(bp[i] == "Barracuda") tempMoney += 7;
    else if(bp[i] == "Tuna") tempMoney += 10;
  
    // Uncommon
    else if(bp[i] == "Banana Betta") tempMoney += 50;
    else if(bp[i] == "Golden Koi") tempMoney += 80;
    else if(bp[i] == "Adventurous Angelerfish") tempMoney += 100;
    else if(bp[i] == "Santa Shark") tempMoney += 250;
    else if(bp[i] == "Dory") tempMoney += 500;
  
    // Rare
    else if(bp[i] == "Alcoholic Anchovy") tempMoney_K += 1;
    else if(bp[i] == "Pumpkin Pufferfish") tempMoney_K += 2;
    else if(bp[i] == "Machete Marlin") tempMoney_K = 5;
    else if(bp[i] == "Satinist Seahorse") tempMoney_K = 10;
    else if(bp[i] == "Hammerhead Shark") tempMoney_K = 15;
    
    // Epic
    else if(bp[i] == "Rose Fish") tempMoney_K += 100;
    else if(bp[i] == "Omniscient Orca") tempMoney_K += 250;
    else if(bp[i] == "Coral Fish") tempMoney_K += 500;
    else if(bp[i] == "Dragon Carp") tempMoney_M += 1;
    else if(bp[i] == "Narwhal") tempMoney_M += 10;
    else if(bp[i] == "Mosasaurus") tempMoney_K += 0;
    else if(bp[i] == "Nautilus") tempMoney_K += 0;
    else if(bp[i] == "Giant Pacific Octopus") tempMoney_K += 0;
  
    //Legendary
    else if(bp[i] == "Manly Manta-ray") tempMoney_M += 30;
    else if(bp[i] == "Giganto Whale") tempMoney_M += 50;
    else if(bp[i] == "Circus Cthulhu") tempMoney_M += 0;
    else if(bp[i] == "Dracopristis") tempMoney_M += 0;
    else if(bp[i] == "Rainbow Fish") tempMoney_B += 0;
    else if(bp[i] == "One-Eyed Chaos Lobster") tempMoney_B += 0;
  
    //Mythic
    else if(bp[i] == "Kinky Kraken") tempMoney_B += 0;
    else if(bp[i] == "Megalodon") tempMoney_T = 0;
    else if(bp[i] == "Colossal Squid") tempMoney_T = 0;
    else if(bp[i] == "Ancient Rune Shark") tempMoney_T = 0;
  }

  //Tax 
  // if(Level_Rank < 5){
  //   tempMoney *= 9/10;
  //   tempMoney_K *= 9/10;
  //   tempMoney_M *= 9/10;
  //   tempMoney_B *= 9/10;
  //   tempMoney_T *= 9/10;
  //   tempMoney_Qa *= 9/10
  //   tempMoney_Qi *= 9/10;
  //   tempMoney_Sx *= 9/10;
  // }
  
  while(tempMoney >= 1000){
    if(tempMoney < 1000000){
      tempMoney_K += tempMoney/1000;
      tempMoney = tempMoney%1000;
    }
    else if(tempMoney < 1000000000){
      tempMoney_M += tempMoney/1000000;
      tempMoney = tempMoney%1000000;
    }
    else if(tempMoney < 1000000000000){
      tempMoney_M += tempMoney/1000000000;
      tempMoney = tempMoney%1000000000;
    }
  }
  while(tempMoney_K >= 1000){
    if(tempMoney_K < 1000000){
      tempMoney_M += tempMoney_K/1000;
      tempMoney_K = tempMoney_K%1000;
    }
    else if(tempMoney_K < 1000000000){
      tempMoney_B += tempMoney_K/1000000;
      tempMoney_K = tempMoney_K%1000000;
    }
    else if(tempMoney_K < 1000000000000){
      tempMoney_T += tempMoney_K/1000000000;
      tempMoney_K = tempMoney_K%1000000000;
    }
  }
  while(tempMoney_M >= 1000){
    if(tempMoney_M < 1000000){
      tempMoney_B += tempMoney_M/1000;
      tempMoney_M = tempMoney_M%1000;
    }
    else if(tempMoney_M < 1000000000){
      tempMoney_T += tempMoney_M/1000000;
      tempMoney_M = tempMoney_M%1000000;
    }
    else if(tempMoney_M < 1000000000000){
      tempMoney_Qa += tempMoney_M/1000000000;
      tempMoney_M = tempMoney_M%1000000000;
    }
  }
  while(tempMoney_B >= 1000){
    if(tempMoney_B < 1000000){
      tempMoney_T += tempMoney_B/1000;
      tempMoney_B = tempMoney_B%1000;
    }
    else if(tempMoney_B < 1000000000){
      tempMoney_Qa += tempMoney_B/1000000;
      tempMoney_B = tempMoney_B%1000000;
    }
    else if(tempMoney_B < 1000000000000){
      tempMoney_Qi += tempMoney_B/1000000000;
      tempMoney_B = tempMoney_B%1000000000;
    }
  }
  while(tempMoney_T >= 1000){
    if(tempMoney_T < 1000000){
      tempMoney_Qa += tempMoney_T/1000;
      tempMoney_T = tempMoney_T%1000;
    }
    else if(tempMoney_T < 1000000000){
      tempMoney_Qi += tempMoney_T/1000000;
      tempMoney_T = tempMoney_T%1000000;
    }
    else if(tempMoney_T < 1000000000000){
      tempMoney_Sx += tempMoney_T/1000000000;
      tempMoney_T = tempMoney_T%1000000000;
    }
  }
  while(tempMoney_Qa >= 1000){
    if(tempMoney_Qa < 1000000){
      tempMoney_Qi += tempMoney_Qa/1000;
      tempMoney_Qa = tempMoney_Qa%1000;
    }
    else if(tempMoney_Qa < 1000000000){
      tempMoney_Sx += tempMoney_Qa/1000000;
      tempMoney_Qa = tempMoney_Qa%1000000;
    }
  }
  while(tempMoney_Qi >= 1000){
      tempMoney_Sx += tempMoney_Qi/1000;
      tempMoney_Qi = tempMoney_Qi%1000;
  }
  
  //Add Buff
  if(money_Bonus > 1){
    if(tempMoney_Sx){
      cout << "sold for 🪙  " << Format(tempMoney_Sx * money_Bonus) << " Sx";
      cout << " with an added bonus of 🪙  " << Format(tempMoney_Sx * (money_Bonus-1)) << " Sx" << '\n';
      money_Sx += tempMoney_Sx * money_Bonus;
    }
    else if(tempMoney_Qi){
      cout << "sold for 🪙  " << Format(tempMoney_Qi * money_Bonus) << " Qi";
      cout << " with an added bonus of 🪙  " << Format(tempMoney_Qi * (money_Bonus-1)) << " Qi" << '\n';
      money_Qi += tempMoney_Qi * money_Bonus;
    }
    else if(tempMoney_Qa){
      cout << "sold for 🪙  " << Format(tempMoney_Qa * money_Bonus) << " Qa";
      cout << " with an added bonus of 🪙  " << Format(tempMoney_Qa * (money_Bonus-1)) << " Qa" << '\n';
      money_Qa += tempMoney_Qa * money_Bonus;
    }
    else if(tempMoney_T){
      cout << "sold for 🪙  " << Format(tempMoney_T * money_Bonus) << "T";
      cout << " with an added bonus of 🪙  " << Format(tempMoney_T * (money_Bonus-1)) << "T" << '\n';
      money_T += tempMoney_T * money_Bonus;
    }
    else if(tempMoney_B){
      cout << "sold for 🪙  " << Format(tempMoney_B * money_Bonus) << "B";
      cout << " with an added bonus of 🪙  " << Format(tempMoney_B * (money_Bonus-1)) << "B" << '\n';
      money_B += tempMoney_B * money_Bonus;
    }
    else if(tempMoney_M){
      cout << "sold for 🪙  " << Format(tempMoney_M * money_Bonus) << "M";
      cout << " with an added bonus of 🪙  " << Format(tempMoney_M * (money_Bonus-1)) << "M" << '\n';
      money_M += tempMoney_M * money_Bonus;
    }
    else if(tempMoney_K){
      cout << "sold for 🪙  " << Format(tempMoney_K * money_Bonus) << "K";
      cout << " with an added bonus of 🪙  " << Format(tempMoney_K * (money_Bonus-1)) << "K" << '\n';
      money_K += tempMoney_K * money_Bonus;
    }
    else{
      cout << "sold for 🪙  " << Format(tempMoney * money_Bonus);
      cout << " with an added bonus of 🪙  " << Format(tempMoney * (money_Bonus-1)) << '\n';
      money += tempMoney * money_Bonus;
      }
  }

  //Normal Sell
  else{
    if(tempMoney_Sx){
      cout << "sold for 🪙  " << Format(tempMoney_Sx) << " Sx" << '\n';
    }
    else if(tempMoney_Qi){
      cout << "sold for 🪙  " << Format(tempMoney_Qi) << " Qi" << '\n';
    }
    else if(tempMoney_Qa){
      cout << "sold for 🪙  " << Format(tempMoney_Qa) << " Qa" << '\n';
    }
    else if(tempMoney_T){
      cout << "sold for 🪙  " << Format(tempMoney_T) << "T" << '\n';
    }
    else if(tempMoney_B){
      cout << "sold for 🪙  " << Format(tempMoney_B) << "B" << '\n';
    }
    else if(tempMoney_M){
      cout << "sold for 🪙  " << Format(tempMoney_M) << "M" << '\n';
    }
    else if(tempMoney_K){
      cout << "sold for 🪙  " << Format(tempMoney_K) << "K" << '\n';
    }
    else{
      cout << "sold for 🪙  " << Format(tempMoney) << '\n';
    }
    //Add Money
    money_Sx += tempMoney_Sx;
    money_Qi += tempMoney_Qi;
    money_Qa += tempMoney_Qa;
    money_T += tempMoney_T;
    money_B += tempMoney_B;
    money_M += tempMoney_M;
    money_K += tempMoney_K;
    money += tempMoney;
  }

  //Empty bp
  bp.clear();
}

//(3) Market
void BpUpgrade(){
  system("clear");
  vector <int> Reqlvl = {2, 10, 25, 50, 90};

  //Max level 9
  if(bplevel == 18) cout << "Your backpack is at maximum level" << '\n';
    
  //Upgrade Requirement
  else{
    string symbol;
    if(bplevel <= 5) symbol = "K";
    else if(bplevel <= 10) symbol = "M";
    else symbol = "B";
    
    ll ReqLevel = (bplevel+1)*20, ReqMoney = Reqlvl[bplevel%5];
    
    cout << "Money: 🪙  "; Money();
    cout << "Backpack Lvl." << Format(bplevel) << " slot: {" << backpack << "}\n";
    cout << "—————————————————————————————————————————" << '\n';
    cout << "Upgrade backpack to level " << Format(bplevel+1) << " (+5 slot):" << '\n';
    cout << "-Player level " << Format(ReqLevel) << " or above" << '\n';
    cout << "-🪙  " <<  ReqMoney << symbol << '\n';
    cout << '\n' << "type \"y\" to upgrade, or \"0\" to go back to Menu ";
    cin >>ans;

    
    if(ans == "y"){
      system("clear");
      if(bplevel <= 5) Buy(ReqMoney, "K");
      else if(bplevel <= 10) Buy(ReqMoney, "M");
      else Buy(ReqMoney, "B");

      if(success) success = false, bplevel++, backpack += 5;
    }

    //back
    else system("clear");
    
  }
}

void OpenChest(ll num){
  string res;
  //Kings
  if(num == 1){
    Buy(10, "K");
    if(success){
      success = false;
      
      res = KingsChest(rand() % 100);
    
      if(res == "10 Wood") wood += 10;
      else if(res == "Golden Koi") bp.pb("Golden Koi");
      else if(res == "🪙  4K") money_K += 4;
      else if(res == "Golden Rod") CurrRod = 5;
    
      if(res == "Golden Rod") cout << "You found " << Rod[5] << " - " << Rarity[0] << "!" << '\n';
      else cout << "You found " << res << "!" << '\n';
    } 
  }
  //Wooden
  else if(num == 2){
    Buy(200, "K");
    if(success){
      success = false;
      
      res = WoodChest(rand()%100);
    
      if(res == "1K Wood") wood += 1000;
      else if(res == "500 Wood") wood += 500; 
      else if(res == "100 Wood") wood += 100;
      else if(res == "50 Wood") wood += 50;
      else if(res == "10 Wood") wood += 10;
      
    cout << "You found " << res << '\n';
    } 
  }
  //Golden
  else if(num == 3){
    Buy(50, "M");
    if(success){
      success = false;
      
      res = GoldChest(rand()%100);
      
      if(res == "1K Gold") gold += 1000;
      else if(res == "500 Gold") gold += 500; 
      else if(res == "100 Gold") gold += 100;
      else if(res == "50 Gold") gold += 50;
      else if(res == "10 Gold") gold += 10;
      
      cout << "You found " << res << '\n';
    } 
  }

}
void KingsChest(){
  system("clear");
  //Title
  cout << ",--. ,--.,--.                           ,-----.,--.                    ,--.   " << '\n';
  cout << "|  .'   /`--',--,--,  ,---.  ,---.     '  .--./|  ,---.  ,---.  ,---.,-'  '-." << '\n';
  cout << "|  .   ' ,--.|      \\| .-. |(  .-'     |  |    |  .-.  || .-. :(  .-''-.  .-'" << '\n';
  cout << "|  |\\   \\|  ||  ||  |' '-' '.-'  `)    '  '--'\\|  | |  |\\   --..-'  `) |  | " << '\n';
  cout << "`--' '--'`--'`--''--'.`-  / `----'      `-----'`--' `--' `----'`----'  `--'" << '\n';
  cout << "                     `---'                                                 " << '\n';
  cout << '\n' << '\n';

  cout << "Price per Chest: 🪙  10K" << '\n';
  cout << "Best Prize: Golden Rod {Epic}"<< '\n'; 
  cout << "This enchanted golden fishing rod attracts bigger fish than usual. Equip this rod to catch twice bigger fish than normal!" << '\n';
  cout << "——————————————————————————————————————————————————————————————————————————————————" << '\n';
  cout << "Prize:" << '\n'; 
  cout << "1| " << Rod[5] << " - " << Rarity[0] << " {10%}\n";
  cout << "2| Golden Koi {20%}\n";
  cout << "3| 🪙  4K {20%}\n";
  cout << "4| 10 Wood {50%}\n\n"; 
  cout << "Would you like to buy \"King's Chest\" ? (y/n) ";
  
  cin >> ans;
  if(ans == "n") system("clear");
  else if(ans == "y") OpenChest(1);
  else system("clear"), KingsChest();
}
void WoodenChest(){
  if(!loop) system("clear");
  cout << "Price per Chest: 🪙  200K\n";
  cout << "Best Prize: 1,000 Wood\n";
  cout << "——————————————————————————————————————————————————————————————————————————————————\n";
  cout << "Prize rate:\n"; 
  cout << "1| 1k Wood {1%}\n";
  cout << "2| 500 Wood {5%}\n";
  cout << "3| 100 Wood {10%}\n";
  cout << "4| 50 Wood {20%}\n";
  cout << "5| 10 Wood {64%}\n\n";
  cout << "Would you like to buy WoodenChest ? (y/n) ";
  
  cin >> ans;
  if(ans == "n") system("clear"), loop = false;
  else if(ans == "y") system("clear"), OpenChest(2), loop = true, WoodenChest();
  else system("clear"), cout << "\x1b[31mInvalid number!\x1b[0m";
}
void GoldenChest(){
  if(!loop) system("clear");
  cout << "Price per Chest: 🪙  50M\n";
  cout << "Best Prize: 1,000 Gold\n";
  cout << "——————————————————————————————————————————————————————————————————————————————————\n";
  cout << "Prize rate:\n"; 
  cout << "1| 1k Gold {1%}\n";
  cout << "2| 500 Gold {5%}\n";
  cout << "3| 100 Gold {10%}\n";
  cout << "4| 50 Gold {20%}\n";
  cout << "5| 10 Gold {64%}\n\n";
  cout << "Would you like to buy GoldChest ? (y/n) ";
  
  cin >> ans;
  if(ans == "n") system("clear"), loop  = false;
  else if(ans == "y") system("clear"), OpenChest(3), loop = true, GoldenChest();
  else system("clear"), cout << "\x1b[31mInvalid number!\x1b[0m";
}
void TreasureChest(){
  //Title
  cout << "*******************************************************************************     " << '\n';
  cout << "          |                   |                  |                     |            " << '\n';
  cout << " _________|________________.=""_;=.______________|_____________________|_______     " << '\n';
  cout << "|                   |  ,-\"_,=\"\"     `\"=.|                  |                    " << '\n';
  cout << "|___________________|__\"=._o`\"-._        `\"=.______________|___________________  " << '\n';
  cout << "          |                `\"=._o`\"=._      _`\"=._                     |         " << '\n';
  cout << " _________|_____________________:=._o \"=._.\"_.-=\"'\"=.__________________|_______ " << '\n';
  cout << "|                   |    __.--\" , ; `\"=._o.\" ,-\"\"\"-._ \".   |                 " << '\n';
  cout << "|___________________|_._\"  ,. .` ` `` ,  `\"-._\"-._   \". '__|___________________ " << '\n';
  cout << "          |           |o`\"=._` , \"` `; .\". ,  \"-._\"-._; ;              |       " << '\n';
  cout << " _________|___________| ;`-.o`\"=._; .\" ` '`.\"\\` . \"-._ /_______________|_______" << '\n';
  cout << "|                   | |o;    `\"-.o`\"=._``  '` \" ,__.--o;   |                     " << '\n';
  cout << "|___________________|_| ;     (#) `-.o `\"=.`_.--\"_o.-; ;___|___________________   " << '\n';
  cout << "____/______/______/___|o;._    \"      `\".o|o_.--\"    ;o;____/______/______/____  " << '\n';
  cout << "/______/______/______/_\"=._o--._        ; | ;        ; ;/______/______/______/_    " << '\n';
  cout << "____/______/______/______/__\"=._o--._   ;o|o;     _._;o;____/______/______/____    " << '\n';
  cout << "/______/______/______/______/____\"=._o._; | ;_.--\"o.--\"_/______/______/______/_  " << '\n';
  cout << "____/______/______/______/______/_____\"=.o|o_.--\"\"___/______/______/______/____  " << '\n';
  cout << "/______/______/______/______/______/______/______/______/______/______/_____/____   " << '\n';
  cout << '\n' << '\n';
  cout << "1| Kings Chest    (🪙  10K)";
  cout << (CurrMap != 1? "\n2| Wooden Chest   (🪙  200K)" : " ");
  cout << (CurrMap != 1? "\n3| Golden Chest   (🪙  50M)" : " ");
  cout << "\n————————————————————————————————————————————\n";

  Answer
  else if(ans == "1" && CurrRod < 5) KingsChest();
  else if(ans == "2") WoodenChest();
  else if(ans == "3") GoldenChest();
  //Error
  else system("clear");
}

void RodShop(){
  system("clear");
  cout << "\x1b[38;2;254;221;67m    ║               \x1b[38;2;246;199;60m║     \033[0m\n";
  cout << "\x1b[38;2;250;210;63m    ║               \x1b[38;2;242;188;58m║     \033[0m\n";
  cout << "\x1b[38;2;246;199;60m╔═══╩════════════\x1b[38;2;237;177;56m═══╩════╗\033[0m\n";
  cout << "\x1b[38;2;242;188;58m║\033[0m" << "\x1b[38;2;000;255;126m,------.           ,--. " << "\x1b[38;2;231;167;54m║\033[0m\n";
  cout << "\x1b[38;2;237;177;56m║\033[0m" << "\x1b[38;2;127;255;110m|  .--. ' ,---.  ,-|  | " << "\x1b[38;2;225;157;53m║\033[0m\n";
  cout << "\x1b[38;2;231;167;54m║\033[0m" << "\x1b[38;2;179;254;102m|  '--'.'| .-. |' .-. | " << "\x1b[38;2;219;146;52m║\033[0m\n";
  cout << "\x1b[38;2;225;157;53m║\033[0m" << "\x1b[38;2;200;253;101m|  |\\  \\ ' '-' '\\ `-' | " << "\x1b[38;2;212;137;51m║\033[0m\n";
  cout << "\x1b[38;2;225;157;53m║\033[0m" << "\x1b[38;2;237;251;106m`--' '--' `---'  `---'  " << "\x1b[38;2;212;137;51m║\033[0m\n";
  cout << "\x1b[38;2;219;146;52m╚═════════════════\x1b[38;2;205;127;50m═══════╝\033[0m\n";

  cout << "\nMoney: 🪙  "; Money(); cout << "\n\n";
  cout << "1| Wooden Rod 🪙  50\n";
  cout << "2| Bamboo Rod 🪙  75\n";
  cout << "3| Mighty Snow Rod 🪙  1K\n";
  cout << "4| Cursed Rod 🪙  2K\n";

  Answer
  else if(ans <= to_string(CurrRod)) system("clear"), cout << "\033[31mYou have a better Rod!\033[0m";
  //Wooden
  else if(ans == "1"){
    Buy(50, "non");
    if(success) success = false, CurrRod = 1;
  }
  //Bamboo
  else if(ans == "2"){
    Buy(75, "non");
    if(success) success = false, CurrRod = 2;
  }
  //Snow
  else if(ans == "3"){
    Buy(1, "K");
    if(success) success = false, CurrRod = 3;
  }
  // Cursed
  else if(ans == "4"){
    Buy(2, "K");
    if(success) success = false, CurrRod = 4;
  }
  //Error
  else RodShop();
}

void BaitShop(){
  system("clear");
  cout << "\x1b[38;2;254;221;67m    ║                     \x1b[38;2;246;199;60m║     \033[0m\n";
  cout << "\x1b[38;2;250;210;63m    ║                     \x1b[38;2;242;188;58m║     \033[0m\n";
  cout << "\x1b[38;2;246;199;60m╔═══╩═════════════════\x1b[38;2;237;177;56m════╩════╗\033[0m\n";
  cout << "\x1b[38;2;242;188;58m║\033[0m" << "\x1b[38;2;000;255;126m,-----.          ,--.  ,--.   " << "\x1b[38;2;231;167;54m║\033[0m\n";
  cout << "\x1b[38;2;237;177;56m║\033[0m" << "\x1b[38;2;127;255;110m|  |) /_  ,--,--.`--',-'  '-. " << "\x1b[38;2;225;157;53m║\033[0m\n";
  cout << "\x1b[38;2;231;167;54m║\033[0m" << "\x1b[38;2;179;254;102m|  .-.  \\' ,-.  |,--.'-.  .-' " << "\x1b[38;2;219;146;52m║\033[0m\n";
  cout << "\x1b[38;2;225;157;53m║\033[0m" << "\x1b[38;2;200;253;101m|  '--' /\\ '-'  ||  |  |  |   " << "\x1b[38;2;212;137;51m║\033[0m\n";
  cout << "\x1b[38;2;225;157;53m║\033[0m" << "\x1b[38;2;237;251;106m`------'  `--`--'`--'  `--'   " << "\x1b[38;2;212;137;51m║\033[0m\n";
  cout << "\x1b[38;2;219;146;52m╚══════════════════════\x1b[38;2;205;127;50m════════╝\033[0m\n";
  cout << "Note: your bait is infinity ∞ so you just need to buy it once!\n";
  cout << "\nMoney: 🪙  "; Money(); cout << "\n\n";
  cout << "1| " << Baits[1] << " ~ {🪙  99M}\n";
  cout << "2| " << Baits[2] << " ~ {🪙  ∞}\n";
  cout << "3| " << Baits[3] << " ~ {🪙  ∞}\n";  

  Answer
  else if(ans <= to_string(CurrBait)) system("clear"), cout << "\033[31mYou have a better Bait!\033[0m";
  else if(ans == "1"){
    Buy(99, "M");
    if(success) success = false, CurrBait = 1;
  }
  else system("clear");
}

void PotionShop(){
  system("clear");
  cout << "\x1b[38;2;254;221;67m    ║                                         \x1b[38;2;246;199;60m║     \033[0m\n";
  cout << "\x1b[38;2;250;210;63m    ║                                         \x1b[38;2;242;188;58m║     \033[0m\n";
  cout << "\x1b[38;2;246;199;60m╔═══╩════════════════════════════\x1b[38;2;237;177;56m═════════════╩════╗\033[0m\n";
  cout << "\x1b[38;2;242;188;58m║\033[0m" << "\x1b[38;2;000;255;126m,------.          ,--.  ,--.                  __  " << "\x1b[38;2;231;167;54m║\033[0m\n";
  cout << "\x1b[38;2;237;177;56m║\033[0m" << "\x1b[38;2;127;255;110m|  .--. ' ,---. ,-'  '-.`--' ,---. ,--,--,   (__) " << "\x1b[38;2;225;157;53m║\033[0m\n";
  cout << "\x1b[38;2;231;167;54m║\033[0m" << "\x1b[38;2;179;254;102m|  '--' || .-. |'-.  .-',--.| .-. ||      \\  /~~\\ " << "\x1b[38;2;219;146;52m║\033[0m\n";
  cout << "\x1b[38;2;225;157;53m║\033[0m" << "\x1b[38;2;200;253;101m|  | --' ' '-' '  |  |  |  |' '-' '|  ||  |  ▏  ▕ " << "\x1b[38;2;212;137;51m║\033[0m\n";
  cout << "\x1b[38;2;225;157;53m║\033[0m" << "\x1b[38;2;237;251;106m`--'      `---'   `--'  `--' `---' `--''--'  \\__/ " << "\x1b[38;2;212;137;51m║\033[0m\n";
  cout << "\x1b[38;2;219;146;52m╚═════════════════════════════════\x1b[38;2;205;127;50m═════════════════╝\033[0m\n";
  


  cout << "1| " << Potions[1] << " ~ {🪙  10M}\n";
  cout << "2| " << Potions[2] << " ~ {🪙  10M}\n";
  cout << "3| " << Potions[3] << " ~ {🪙  1B}\n";
  cout << "4| " << Potions[4] << " ~ {🪙  ∞}\n";
  cout << "5| " << Potions[5] << " ~ {🪙  ∞}\n";
  cout << "6| " << Potions[6] << " ~ {🪙  ∞}\n";

  Answer
  if(ans <= to_string(CurrPot)) system("clear"), cout << "\033[31mYou have a better Potion!\033[0m";
  if(ans == "1"){
    Buy(10, "M");
    if(success) success = false, CurrPot = 1;
  }
  else if(ans == "2"){
    Buy(10, "M");
    if(success) success = false, CurrPot = 2;
  }
  else if(ans == "3"){
    Buy(1, "B");
    if(success) success = false, CurrPot = 3;
  }
  else system("clear");
  
}

void PetShop(){
  system("clear");
  bool sold_1(false), sold_2(false), sold_3(false);
  if(CurrPet >= 1) sold_1 = true;
  if(CurrPet >= 2) sold_2 = true;
  if(CurrPet >= 3) sold_3 = true;
  cout << "\x1b[38;2;254;221;67m    ║               \x1b[38;2;246;199;60m║     \033[0m\n";
  cout << "\x1b[38;2;250;210;63m    ║               \x1b[38;2;242;188;58m║     \033[0m\n";
  cout << "\x1b[38;2;246;199;60m╔═══╩═════════════\x1b[38;2;237;177;56m══╩════╗\033[0m\n";
  cout << "\x1b[38;2;242;188;58m║\033[0m" << "\x1b[38;2;000;255;126m,------.          ,--.  " << "\x1b[38;2;231;167;54m║\033[0m\n";
  cout << "\x1b[38;2;237;177;56m║\033[0m" << "\x1b[38;2;127;255;110m|  .--. ' ,---. ,-'  '-." << "\x1b[38;2;225;157;53m║\033[0m\n";
  cout << "\x1b[38;2;231;167;54m║\033[0m" << "\x1b[38;2;179;254;102m|  '--' || .-. :'-.  .-'" << "\x1b[38;2;219;146;52m║\033[0m\n";
  cout << "\x1b[38;2;225;157;53m║\033[0m" << "\x1b[38;2;200;253;101m|  | --' \\   --.  |  |  " << "\x1b[38;2;212;137;51m║\033[0m\n";
  cout << "\x1b[38;2;225;157;53m║\033[0m" << "\x1b[38;2;237;251;106m`--'      `----'  `--'  " << "\x1b[38;2;212;137;51m║\033[0m\n";
  cout << "\x1b[38;2;219;146;52m╚══════════════\x1b[38;2;205;127;50m══════════╝\033[0m\n";
  if(sold_1) soldBegin
  cout << "1|🪙  10B " << Pet[1] << " - " << Stat[0] << "{2x}, " << Stat[2] << "{5x}";
  if(sold_1) soldEnd
  cout << '\n';
  if(sold_2) soldBegin
  cout << "2|🪙  100B " << Pet[2] << " - " << Stat[0] << "{5x}, " << Stat[2] << "{10x}";
  if(sold_2) soldEnd
  cout << '\n';
  if(sold_3) soldBegin
  cout << "3|🪙  500B " << Pet[3] << " - " << Stat[0] << "{8x}, " << Stat[2] << "{20x}, " << Stat[1] << "{2x}";
  if(sold_3) soldEnd
  cout << '\n';
  cout << "4| Coming soon!\n";

  Answer
  else if(ans == "1" && !sold_1) Buy(10, "B"); if(success) success = false, CurrPet = 1;
  else if(ans == "2" && !sold_2) Buy(100, "B"); if(success) success = false, CurrPet = 2;
  else if(ans == "3" && !sold_3) Buy(500, "B"); if(success) success = false, CurrPet = 3;
  else if(ans == "1" || ans == "2" || ans == "3") alrSold
  else system("clear");
}

void Market(){
  string lockPet = locks, lockPot = locks;
  if(CurrMap >= 2) lockPot = " ", lockPet = " ";
  //Menu
  system("clear");
  cout << "\x1b[38;2;254;221;67m    ║                                       \x1b[38;2;246;199;60m║     \033[0m\n";
  cout << "\x1b[38;2;250;210;63m    ║                                       \x1b[38;2;242;188;58m║     \033[0m\n";
  cout << "\x1b[38;2;246;199;60m╔═══╩══════════════════════════\x1b[38;2;237;177;56m═════════════╩════╗\033[0m\n";
  cout << "\x1b[38;2;242;188;58m║\033[0m" << "\x1b[38;2;000;255;126m,--.   ,--.               ,--.            ,--.  " << "\x1b[38;2;231;167;54m║\033[0m\n";
  cout << "\x1b[38;2;237;177;56m║\033[0m" << "\x1b[38;2;127;255;110m|   `.'   | ,--,--.,--.--.|  |,-. ,---. ,-'  '-." << "\x1b[38;2;225;157;53m║\033[0m\n";
  cout << "\x1b[38;2;231;167;54m║\033[0m" << "\x1b[38;2;179;254;102m|  |'.'|  |' ,-.  ||  .--'|     /| .-. :'-.  .-'" << "\x1b[38;2;219;146;52m║\033[0m\n";
  cout << "\x1b[38;2;225;157;53m║\033[0m" << "\x1b[38;2;200;253;101m|  |   |  |\\ '-'  ||  |   |  \\  \\\\   --.  |  |  " << "\x1b[38;2;212;137;51m║\033[0m\n";
  cout << "\x1b[38;2;225;157;53m║\033[0m" << "\x1b[38;2;237;251;106m`--'   `--' `--`--'`--'   `--'`--'`----'  `--'  " << "\x1b[38;2;212;137;51m║\033[0m\n";
  cout << "\x1b[38;2;219;146;52m╚═══════════════════════════════\x1b[38;2;205;127;50m═════════════════╝\033[0m\n\n\n";
  cout << "1| Upgrade Backpack space" << '\n';
  cout << "2| Treasure Chest" << '\n';
  cout << "3| Rod Shop" << '\n';
  cout << "4| Bait Shop\n";
  cout << "5| Potion Shop" << lockPot << '\n';
  cout << "6| Pet Shop 🐾" << lockPet << '\n';
  cout << "7| Coming soon!" << '\n';

  Answer
  else if(ans == "1") BpUpgrade();
  else if(ans == "2") system("clear"), TreasureChest();
  else if(ans == "3") RodShop();
  else if(ans == "4") BaitShop();
  else if((ans == "5" || ans == "6") && lockPot == locks) system("clear"), cout << "Coming soon!\n\n";
  else if(ans == "5" && lockPot == " ") PotionShop();
  else if(ans == "6") PetShop();
  else Market();
}


//(4) Town
bool InTown(false), loopTown(false);
void BM(){
  if(loopTown) loopTown = false;
  else system("clear");
  cout << "\x1b[38;2;254;221;67m    ║                                                                             \x1b[38;2;246;199;60m ║     \033[0m\n";
  cout << "\x1b[38;2;250;210;63m  ☠ ║☠                                                                           ☠\x1b[38;2;242;188;58m ║☠    \033[0m\n";
  cout << "\x1b[38;2;246;199;60m╔═══╩══════════════════════════════════════════════\x1b[38;2;237;177;56m════════════════════════════════╩════╗\033[0m\n";
  cout << "\x1b[38;2;242;188;58m║\033[0m" << "\x1b[38;2;217;218;218m,-----.  ,--.              ,--.        ,--.   ,--.               ,--.            ,--.  " << "\x1b[38;2;231;167;54m║\033[0m\n";
  cout << "\x1b[38;2;237;177;56m║\033[0m" << "\x1b[38;2;180;181;181m|  |) /_ |  | ,--,--. ,---.|  |,-.     |   `.'   | ,--,--.,--.--.|  |,-. ,---. ,-'  '-." << "\x1b[38;2;225;157;53m║\033[0m\n";
  cout << "\x1b[38;2;231;167;54m║\033[0m" << "\x1b[38;2;144;145;145m|  .-.  \\|  |' ,-.  || .--'|     /     |  |'.'|  |' ,-.  ||  .--'|     /| .-. :'-.  .-'" << "\x1b[38;2;219;146;52m║\033[0m\n";
  cout << "\x1b[38;2;225;157;53m║\033[0m" << "\x1b[38;2;110;111;111m|  '--' /|  |\\ '-'  |\\ `--.|  \\  \\     |  |   |  |\\ '-'  ||  |   |  \\  \\\\   --.  |  |  " << "\x1b[38;2;212;137;51m║\033[0m\n";
  cout << "\x1b[38;2;225;157;53m║\033[0m" << "\x1b[38;2;078;078;078m`------' `--' `--`--' `---'`--'`--'    `--'   `--' `--`--'`--'   `--'`--'`----'  `--'  " << "\x1b[38;2;212;137;51m║\033[0m\n";
  cout << "\x1b[38;2;219;146;52m╚══════════════════════════════════════════════════════════\x1b[38;2;205;127;50m═════════════════════════════╝\033[0m\n";
  cout << "\n\n";
  cout << "                             !!!!!!!        \n";
  cout << "                     .       [[[|]]]    .   \n";
  cout << "                     !!!!!!!!|--_--|!!!!!   \n";
  cout << "                     [[[[[[[[\\_(X)_/]]]]]   \n";
  cout << "             .-.     /-_--__-/_--_-\\-_--\\   \n";
  cout << "             |=|    /-_---__/__-__-_\\__-_\\  \n";
  cout << "         . . |=| ._/-__-__\\===========/-__\\_\n";
  cout << "         !!!!!!!!!\\========[ /]]|[[\\ ]=====/\n";
  cout << "        /-_--_-_-_[[[[[[[[[||==  == ||]]]]]]\n";
  cout << "       /-_--_--_--_|=  === ||=/^|^\\ ||== =| \n";
  cout << "      /-_-/^|^\\-_--| /^|^\\=|| | | | ||^\\= | \n";
  cout << "     /_-_-| | |-_--|=| | | ||=|_|_|=||\"|==| \n";
  cout << "    /-__--|_|_|_-_-| |_|_|=||______=||_| =| \n";
  cout << "   /_-__--_-__-___-|_=__=_.`---------'._=_|__\n";
  cout << "  /-----------------------\\===========/-----/\n";
  cout << " ^^^\\^^^^^^^^^^^^^^^^^^^^^^[[|]]|[[|]]=====/ \n";
  cout << "     |.' ..==::'\"'::==.. '.[ /~~~~~\\ ]]]]]]] \n";
  cout << "     | .'=[[[|]]|[[|]]]=`._||==  =  || =\\ ]  \n";
  cout << "     ||== =|/ _____ \\|== = ||=/^|^\\=||^\\ ||  \n";
  cout << "     || == `||-----||' = ==|| | | |=|| |=||  \n";
  cout << "     ||= == ||:^s^:|| = == ||=| | | || |=||  \n";
  cout << "     || = = ||:___:||= == =|| |_|_| ||_|=||  \n";
  cout << "    _||_ = =||o---.|| = ==_||_= == =||==_||_  \n";
  cout << "    \\__/= = ||:   :||= == \\__/[][][][][]\\__/  \n";
  cout << "    [||]= ==||:___:|| = = [||]\\\\//\\\\//\\\\[||]  \n";
  cout << "    }  {---'\"'-----'\"'- --}  {//\\\\//\\\\//}  {  \n";
  cout << "  __[==]__________________[==]\\\\//\\\\//\\\\[==]_  \n";
  cout << " |`|~~~~|================|~~~~|~~~~~~~~|~~~~||  \n";
  cout << " |^| ^  |================|^   | ^ ^^ ^ |  ^ ||  \n";
  cout << "\\|//\\\\/^|/==============\\|/^\\\\\\^/^.\\^///\\\\//|///  \n";
  cout << "\\\\///\\\\\\//===============\\\\//\\\\///\\\\\\\\////\\\\\\///// \n\n";
  cout << "Welcome to Black Market!, in the Black Market you can buy mysterious items. \nthe price is unreasonable and the effect of the item is known only to the user. \nThere isn't even any information in the library! \n\n";
  
  cout << "1| " << Hat[1] << " - {🪙  1B}\n";
  cout << "2| " << Vest[1] << " - {🪙  10B}\n";
  // cout << "3| 2nd Map piece - {🪙  10B}\n";

  Answer
  
  else{
    system("clear");
    loopTown = true;
    if(ans == "1" && !CurrHat){
      Buy(1, "B");
      if(success) success = false, CurrHat = 1;
    }
    else if(ans == "2" && !CurrVest){
      Buy(10, "B");
      if(success) success = false, CurrVest = 1;
    }
    // else if(ans == "3" && !MapPiece_2){
    //   Buy(10, "B");
    //   if(success) success = false, MapPiece_2 = true;
    // }
    else if(ans == "1" || ans == "2" || ans == "3") cout << "you already have that item!\n";
    BM();
  }
}

//(5)

//Card
string Carni(ll get){
  if(get < 30) return "100 Wood";
  else if(get < 55) return "10 Gold";
  else if(get < 67) return "Dory";
  else if(get < 77) return "Hammerhead Shark";
  else if(get < 84) return "Narwhal";
  else if(get < 90) return "🪙  5M";
  else if(get < 95) return "🪙  10M";
  else return Rod[6];
}
void ShowNormal(string res){
  system("clear");
  cout << "┌─────────┐" << '\n';
  cout << "│         │" << '\n';
  cout << "│         │" << '\n';
  cout << "│         │" << '\n';
  cout << "│         │" << '\n';
  cout << "│         │" << '\n';
  cout << "└─────────┘" << '\n';  
  cout << res << "\n\n";
  cout << "Press Enter to Continue "; cin.ignore();
}
void ShowLegend(string res){
  system("clear");
  string GapLCard = "            ";
  vector <string> RGB_R;
  RGB_R.pb("\x1b[38;2;5;111;255m");
  RGB_R.pb("\x1b[38;2;0;136;255m");
  RGB_R.pb("\x1b[38;2;0;157;255m");
  RGB_R.pb("\x1b[38;2;0;176;255m");
  RGB_R.pb("\x1b[38;2;0;193;255m");
  RGB_R.pb("\x1b[38;2;0;208;255m");
  RGB_R.pb("\x1b[38;2;0;222;237m");
  RGB_R.pb("\x1b[38;2;0;234;211m");
  RGB_R.pb("\x1b[38;2;0;245;183m");
  RGB_R.pb("\x1b[38;2;0;255;156m");
  int w=0;
  for (int i = 0; i < 10; ++i){
    sleep(1);
    system("clear");
    cout << "\x1B[1m";
    if(w == 9) w = 0;
    else w++;
    cout << RGB_R[w] << "Congratulation you got a legendary item!"<< '\n';
    if(w == 9) w = 0;
    else w++;
    cout << RGB_R[w] << GapLCard << "╔═════════╗" << '\n';
    if(w == 9) w = 0;
    else w++;
    cout << RGB_R[w] << GapLCard << "║༼      ༽ ║" << '\n';
    if(w == 9) w = 0;
    else w++;
    cout << RGB_R[w] << GapLCard << "║    ࿈    ║" << '\n';
    if(w == 9) w = 0;
    else w++;
    cout << RGB_R[w] << GapLCard << "║    ℒ    ║" << '\n';
    if(w == 9) w = 0;
    else w++;
    cout << RGB_R[w] << GapLCard << "║         ║" << '\n';
    if(w == 9) w = 0;
    else w++;
    cout << RGB_R[w] << GapLCard << "║         ║" << '\n';
    if(w == 9) w = 0;
    else w++;
    cout << RGB_R[w] << GapLCard << "╚═════════╝" << '\n';
    if(w == 9) w = 0;
    else w++;
    cout << RGB_R[w] << "           " << res << '\n';
    cout << "\x1B[0m";
    }
  cout << "\nPress Enter to Continue ";cin.ignore();
}
void Card(){
  for(ll i=0; i<10; i++){
    string res = Carni((rand()%100));
    if(res == Rod[6]){
      ShowLegend(Rod[6]);
      CurrRod = 6;
      break;
    }
    else{
      ShowNormal(res);
      if(res == "100 Wood") wood += 100;
      else if(res == "10 Gold") gold += 10;
      else if(res == "Dory") bp.pb("Dory");
      else if(res == "Hammerhead Shark") bp.pb("Hammerhead Shark");
      else if(res == "Narwhal") bp.pb("Narwhal");
      else if(res == "🪙  10M") money_M += 10;
      else money_M += 5;
  }
}
}
void Carnival(){
  system("clear");
  cout << "🎊\x1b[38;2;255;00;00m ,-----.                 \x1b[38;2;255;160;0m      ,--.                 ,--.🎉 \033[0m\n";
  cout << "🎉\x1b[38;2;255;0;252m'  .--./ ,--,--.,--.--.,-\x1b[38;2;180;152;255m-,--, `--',--.  ,--.,--,--.|  |🎊 \033[0m\n";
  cout << "🎊\x1b[38;2;0;137;255m|  |    ' ,-.  ||  .--'| \x1b[38;2;0;201;251m     \\,--. \\  `'  /' ,-.  ||  |🎉 \033[0m\n";
  cout << "🎉\x1b[38;2;31;252;87m'  '--'\\\\ '-'  ||  |   | \x1b[38;2;84;244;158m ||  ||  |  \\    / \\ '-'  ||  |🎊 \033[0m\n";
  cout << "🎊\x1b[38;2;253;255;90m `-----' `--`--'`--'   \x1b[38;2;244;254;132m`--''--'`--'   `--'   `--`--'`--'🎉 \033[0m\n";
  cout << "\x1b[38;2;000;255;126m--------\x1b[38;2;127;255;110m----------\x1b[38;2;179;254;102m---------------\x1b[38;2;200;253;101m-----------------\x1b[38;2;237;251;106m-----------\033[0m\n\n\n";

  cout << "10 Cards price: 🪙  25M\n";
  cout << "Chance: \n";
  cout << "1| 100 Wood {30%}           5| Narwhal {9%\033[31m -2%\033[0m} \033[92m(Rate Up Event!)\033[0m\n";
  cout << "2| 10 Gold {25%}            6| 🪙  5M {6%}\n";
  cout << "3| Dory {12%}               7| 🪙  10M {5%}\n";
  cout << "4| Hammerhead Shark {10%}   8|" << Rod[6] << " - " << Rarity[1] << " {3%\033[92m +2%\033[0m} \033[92m(Rate Up Event!)\033[0m\n";
  cout << "\nDo you want to play card with Joker 🃏? (y/n) ";
  
  cin >> ans;
  
  if((ans == "y") && CurrRod >= 6){
    Buy(25, "M");
    if(success) success = false, Card(), Carnival();
  }
  else if(ans == "y") system("clear"), cout << "you already have the best prize!\n";
  else system("clear");

}

void Craft(){
  if(loopTown) loopTown = false;
  else system("clear");
  cout << "\n Welcome to Crafting Station! \n";
  cout << "\x1b[38;2;194;194;194m⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿\n";
  cout << "\x1b[38;2;183;183;183m⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⠟⣿⣿⣿⣿⣿⣿\n";
  cout << "\x1b[38;2;172;172;172m⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣏⠁⠈⠻⣿⣿⣿⣿⣿⣿⣿⣿⠋⢰⣿⣿⡿⣿⣿⣿\n";
  cout << "\x1b[38;2;162;162;162m⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡄⠀⠀⠈⠻⣿⣿⣿⣿⡿⠃⠀⠾⠛⢉⣾⣿⣿⣿\n";
  cout << "\x1b[38;2;151;151;151m⣿⣿⣿⣿⣿⣿⣿⡿⠿⠛⠉⠀⠀⠀⠀⠀⢻⣿⡟⠈⠁⠀⠀⠀⠀⠾⠿⢿⣿⣿\n";
  cout << "\x1b[38;2;141;141;141m⣿⣿⣿⡿⠟⠋⠁⢀⣠⣴⣶⣿⣷⡀⠀⠀⣈⣿⠁⣀⣤⠀⠀⣀⣤⣴⣾⣿⣿⣿\n";
  cout << "\x1b[38;2;130;130;130m⣿⡍⠀⢀⣠⣴⣾⣿⣿⣿⣿⡿⠿⠷⠾⠿⠿⠿⠿⠿⠿⠾⠿⠿⠿⢿⣿⣿⣿⣿\n";
  cout << "\x1b[38;2;120;120;120m⣿⣷⣾⣿⣿⣿⡟⠛⠛⠛⠛⠃⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠸⣿⣿⣿⣿\n";
  cout << "\x1b[38;2;110;110;110m⣿⣿⣿⣿⣿⣿⣿⣦⣀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⣻⣿\n";
  cout << "\x1b[38;2;101;101;101m⣿⣿⣿⣿⣿⣿⣿⣿⣿⣷⣦⡄⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢠⣴⣾⣿⣿\n";
  cout << "\x1b[38;2;091;091;091m⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣧⣤⣤⡤⠀⠀⠀⠀⠀⠀⢠⣤⣤⣤⣼⣿⣿⣿⣿\n";
  cout << "\x1b[38;2;081;081;081m⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡿⠁⠀⠀⠀⠀⠀⠀⠀⠹⣿⣿⣿⣿⣿⣿⣿\n";
  cout << "\x1b[38;2;072;072;072m⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡿⠿⠋⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⠻⠿⢿⣿⣿⣿\n";
  cout << "\x1b[38;2;063;063;063m⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣶⣶⣶⣶⣶⣶⣶⣶⣶⣶⣶⣶⣶⣶⣶⣶⣾⣿⣿⣿\033[0m\n\n";

  cout << "1| " << Boat[1] << " - {1K Wood} [+50 bp slots]\n";
  cout << "2| " << Boat[2] << " - {1K Gold} [+75 bp slots]\n";
  cout << (CurrHat? "3| Upgrade Fishing Hat\n" : "3| ???\n");

  Answer
  else{
    loopTown = true;
    if(ans == "1" && CurrBoat < 1){
      Buy_Mat(1, "K", "Wood");
      if(success) success = false, CurrBoat = 1, backpack += 50;
    }
    else if(ans == "2" && CurrBoat < 2){
      Buy_Mat(1, "K", "Gold");
      if(success) success = false, CurrBoat = 2, backpack += 75;
        ;    
    }
    else if(ans == "3" && CurrHat < 4){
      system("clear");
      cout << "============================================\n";
      cout << "Name: From " << Hat[CurrHat] << " to " << Hat[CurrHat+1] << '\n';
      cout << "Effect: From " << InfHat[CurrHat-1] << " to " << InfHat[CurrHat] << '\n';
      cout << "Cost: " << CostHat[CurrHat] << '\n';
      cout << "Do you want to upgrade you Hat (y/n)? ";
      cin >> ans;
      if(ans == "y"){
        if(CurrHat == 1){
          Buy(20, "B"); 
          if(success) success = false, CurrHat = 2;
        }
        else if(CurrHat == 2){
          if(gold_bar >= 20 && wood_plank >= 10){
            gold_bar -= 20; 
            wood_plank -= 10;
            system("clear");
            cout << "\x1b[92mSuccess!\x1b[0m";
            CurrHat = 3;
            }
          else system("clear");
        }
        else if(CurrHat == 3){
          if(gold_bar >= 30 && wood_plank >= 100){
            gold_bar -= 30; 
            wood_plank -= 100;
            system("clear");
            cout << "\x1b[92mSuccess!\x1b[0m";
            CurrHat = 4;
          }
          else system("clear");
        } 
      }
      else system("clear");
    }
    else if(ans == "1" || ans == "2") system("clear"), cout << "You have a better boat!";
      
    else system("clear"), cout << "Coming Soon!\n";
    Craft();
  }
}

void Bank(){
  system("clear");
  cout << "        _._._                       _._._                  \n";
  cout << "       _|   |_                     _|   |_                 \n";
  cout << "       | ... |_._._._._._._._._._._| ... |                 \n";
  cout << "       | ||| |   o  MARIA BANK o   | ||| |                 \n";
  cout << "       | \"\"\" |  \"\"\"    \"\"\"    \"\"\"  | \"\"\" |  \n";
  cout << "  ())  |[-|-]| [-|-]  [-|-]  [-|-] |[-|-]|  ())            \n";
  cout << " (())) |     |---------------------|     | (()))           \n";
  cout << "(())())| \"\"\" |  \"\"\"    \"\"\"    \"\"\"  | \"\"\" |(())()) \n";
  cout << "(()))()|[-|-]|  :::   .-\"-.   :::  |[-|-]|(()))()          \n";
  cout << "()))(()|     | |~|~|  |_|_|  |~|~| |     |()))(()          \n";
  cout << "   ||  |_____|_|_|_|__|_|_|__|_|_|_|_____|  ||             \n";
  cout << "~ ~^^ @@@@@@@@@@@@@@/=======\\@@@@@@@@@@@@@@ ^^~ ~         \n\n";
  
  cout << "Welcome to Maria Bank, we only serve players with master rank and above. we will give them a commission every time they login. \nThe commission we give is according to the player's rank\n";
  cout << "\nCommision list based on rank: \n";
  cout << "1|\033[35m Master\033[0m {★ ★ ★ ★ ★ } +5%\n";
  cout << "2|\x1b[38;2;188;71;238m Grandmaster {💫}\x1B[0m +10%\n";
  cout << "3|\x1b[38;2;0;255;90m ♔ \x1b[38;2;0;255;90mℒℯ\x1b[38;2;0;235;100mℊℯ𝓃\x1b[38;2;0;215;110m𝒹𝒶𝓇𝓎 {⭐⭐}\x1B[0m +15%\n";
  cout << "4|\x1b[38;2;255;90;20m 👑 \x1b[38;2;255;0;0m𝓜𝔂\x1b[38;2;255;45;10m𝓽𝓱𝓲\x1b[38;2;255;90;20m𝓬𝓪𝓵 {🌟🌟🌟🌟}\x1B[0m +20%\n";
  cout << "5|\x1b[38;2;30;195;220m 😇 \x1b[38;2;0;255;220mS\x1b[38;2;10;235;220me\x1b[38;2;20;215;220ma\x1b[38;2;30;195;220mG\x1b[38;2;40;175;220mo\x1b[38;2;50;155;220md {\033[0m✴ ✴ ✴ ✴ ✴ ✴ \x1b[38;2;50;155;220m}\033[0m +25%\n\n";

  Back
}

void Town(){
  InTown = true;
  system("clear");
  if(loopTown) loopTown = false, cout << "Invalid Number!\n\n";
  string TradeLock = locks;
  cout << "                                                                  ¸.· Crafting Station 🛠️                        \n";
  cout << "                                                             ¸.·´¯                                               \n";  
  cout << " Bank 🏦 -·´`·.¸¸.·´¯`·.¸¸.·´¯`·.¸¸.·´¯`·.¸¸.- Town ¯`·.¸¸.·´                                                    \n";  
  cout << "                                             ︴                                                                  \n"; 
  cout << "                                             ︴                                                                  \n";
  cout << "                                             ¯`·.¸¤ø,¸¸,ø¤º°`°º¤ø,¸¸,ø¤º°`°º¤ø,¸¸,ø¤º°`°º¤ø,¸¸,ø Black Market ☠️ \n";
  cout << "                                                      ¯`·.¸                                                      \n";
  cout << "                                                           `·.¸                                                  \n";
  cout << "                                                          ¸.·´¯ ¯`·.¸.·´¯`·.¸¸.· Trading Place                   \n";
  cout << "                                                      ¸.·´                                                       \n";
  cout << "                                                  ¸.·´                                                           \n";
  cout << "                                              Carnival 🎪                                                        \n\n";
  
  cout << "(1) Back to Main Menu 🔙     (4) Black Market ☠️\n";
  cout << "(2) Bank 🏦                  (5) Carnival 🎪 \n";
  cout << "(3) Crafting Station 🛠️       (6) ???\n";

  cout << "\nEnter a number: ";
  cin >> ans;

  if(ans == "1") InTown = false, system("clear");
  else if(ans == "2") Bank();
  else if(ans == "3") Craft();
  else if(ans == "4") BM();
  // else if(ans == "5")
  else if(ans == "6") Carnival();
  else system("clear"), loopTown = true;
}

//Guild
void Daily(){
  system("clear");
  cout << "\x1b[92mCongrats you get daily commission!\x1b[0m\n\n";
  string Daily_Money;
  if(money) money+=10, Daily_Money = " ";
  else if(money_K) money_K+=10, Daily_Money = "K";
  else if(money_M) money_M+=10, Daily_Money = "M";
  else if(money_B) money_B+=10, Daily_Money = "B";
  else if(money_T) money_T+=10, Daily_Money = "T";
  else if(money_Qa) money_Qa+=10, Daily_Money = "Qa";
  else if(money_Qi) money_Qi+=10, Daily_Money = "Qi";
  else if(money_Sx) money_Sx+=10, Daily_Money = "Sx";
  
  cout << "Daily commission reward: \n";
  cout << "1| 🪙  10" << Daily_Money << '\n';
  cout << "2| 100 Gold\n"; gold += 100;
  cout << "3| 1K Wood\n"; wood_K += 1000;

  Daily_Commission = true;
  Back
}

void Hires(){
  system("clear");
  bool sold_1(false), sold_2(false), sold_3(false);
  if(CurrHire >= 1) sold_1 = true;
  if(CurrHire >= 2) sold_2 = true;
  if(CurrHire >= 3) sold_3 = true;
  cout << "\x1b[1m\x1b[38;2;255;151;3m------------------- Hire 👷‍♂️ -------------------\x1b[0m\n";
  cout << "Money: "; Money(); cout << "\n";
  cout << "1| " << Hire[1] << " 🪙  10B ~ (backpack +10)\n";
  cout << "2| " << Hire[2] << " 🪙  100B ~ " << Stat[0] << "{3x} and " << Stat[2] << "{10x}\n";
  cout << "3| " << Hire[3] << " 🪙  1T ~ " << Stat[0] << "{5x}, " << Stat[2] << "{15x} and " << Stat[1] << "{2x}\n";
  cout << "4| ???\n";
  //🧝‍♀️ elf

  Answer
  else if(ans <= to_string(CurrHire)) alrSold
  else if(ans == "1"){
    Buy(10, "B");
    if(success) success = false, CurrHire=1;
  }
  else if(ans == "2"){
    Buy(100, "B");
    if(success) success = false, CurrHire=2;
  }
  else if(ans == "3"){
    Buy(1, "T");
    if(success) success = false, CurrHire=3;
  }
}

void Exchange(){
  if(!loop) system("clear");
  else cout << "\n\n";
  bool sold_4(false), sold_5(false);
  if(CompleteMap) sold_4 = true;
  if(CurrRide) sold_5 = true; 

  cout << "🏮🏮🏮🏮🏮🏮🏮🏮🏮🏮🏮🏮🏮🏮🏮🏮🏮🏮🏮🏮🏮🏮🏮🏮\n";
  cout << "🧧🧧🧧🧧🎀🧧🧧🎀🧧🧧🎀🧧🧧🎀🧧🧧🎀🧧🧧🎀🧧🧧🧧🧧\n";
  cout << "\x1b[1m\x1b[92m-----------------♻️  Exchange ♻️ -----------------\x1b[0m\n";
  cout << "1| 100 wood ~> 1 wood plank\n";
  cout << "2| 100 gold ~> 1 gold bar\n";
  cout << "3| 2 gold bar ~> " << Cookies[0] << " (\x1b[1m\x1b[92mEvent!\x1b[0m)";
  if(sold_4) soldBegin 
  cout << "\n4| 1st, 2nd, and 3rd Map piece ~> Treasure Map";
  if(sold_4) soldEnd
  if(sold_5) soldBegin
  cout << "\n5| Treasure Map ~> " << (CompleteMap? "Dragon egg" : "???");
  if(sold_5) soldEnd
  cout << '\n';
  
  Answer
  else if(ans == "1"){
    if(wood >= 200 || wood_K){
      wood += wood_K*1000;
      wood_K = 0;
      ll maks = wood/100;
      cout << "How many wood planks do you want? (1-" << maks << ") ";
      cin >> ans;
      if(stoi(ans) > maks) system("clear"), cout << "\x1b[31myou can't afford it\x1b[0m";
      else wood-=100*stoi(ans), wood_plank+=stoi(ans), system("clear"), cout << "\x1b[92mSuccess!\x1b[0m", loop = true, Exchange();
      
    }
    else if(wood >= 100) wood-=100, wood_plank++, system("clear"), cout << "\x1b[92mSuccess!\x1b[0m", loop = true, Exchange();
    else system("clear"), cout << "\x1b[31mYou don't have enough wood!\x1b[0m";
  }
  else if(ans == "2"){
    if(gold >= 200 || gold_K){
      gold += gold_K*1000;
      gold_K = 0;
      ll maks = gold/100;
      cout << "How many gold planks do you want? (1-" << maks << ") ";
      cin >> ans;
      if(stoi(ans) > maks) system("clear"), cout << "\x1b[31myou can't afford it\x1b[0m";
      else gold-=100*stoi(ans), gold_bar+=stoi(ans), system("clear"), cout << "\x1b[92mSuccess!\x1b[0m", loop = true, Exchange();
      
    }
    else if(gold >= 100) gold-=100, gold_bar++, system("clear"), cout << "\x1b[92mSuccess!\x1b[0m", loop = true, Exchange();
    else system("clear"), cout << "\x1b[31mYou don't have enough gold!\x1b[0m";
  }
  else if(ans == "3"){
    if(gold_bar) gold_bar-=2, N_Cookies++, system("clear"), cout << "\x1b[92mSuccess!\x1b[0m", loop = true, Exchange();
    else system("clear"), cout << "\x1b[31mYou don't have enough gold bar!\x1b[0m";
  }
  else if(ans == "4"){
    if(!sold_4){
    if(MapPiece_1&&MapPiece_2&&MapPiece_3) CompleteMap=true, system("clear"), cout << "\x1b[92mSuccess!\x1b[0m", loop = true, Exchange();
    else system("clear"), cout << "\x1b[31mYou don't have enough map pieces!\x1b[0m";
    }
    else alrSold
  }
  else if(ans == "5"){
    if(!sold_5){
    if(CompleteMap) CurrRide=1, system("clear"), cout << "\x1b[92mSuccess!\x1b[0m", loop = true, Exchange();
    else system("clear"), cout << "\x1b[31mYou don't have Treasure Map!\x1b[0m";
    }
    else alrSold
  }
  else loop = false;
}

void Guild(){
  system("clear");
  cout << "\x1b[38;2;140;140;140m";
  cout << "                                              !_       \n";
  cout << "                                              |*~=-.,  \n";
  cout << "                                              |_,-'`  \n";
  cout << "                                              |      \n";
  cout << "                                              |      \n";
  cout << "                                             /^\\      \n";
  cout << "               !_                           /   \\      \n";
  cout << "               |*`~-.,                     /,    \\    \n";
  cout << "               |.-~^`                     /#\"     \\    \n";
  cout << "               |                        _/##_   _  \\_  \n";
  cout << "          _   _|  _   _   _            [ ]_[ ]_[ ]_[ ] \n";
  cout << "         [ ]_[ ]_[ ]_[ ]_[ ]            |_=_-=_ - =_|  \n";
  cout << "       !_ |_=_ =-_-_  = =_|           !_ |=_= -    |    \n";
  cout << "       |*`--,_- _        |            |*`~-.,= []  |    \n";
  cout << "       |.-'|=     []     |   !_       |_.-\"`_-     |    \n";
  cout << "       |   |_=- -        |   |*`~-.,  |  |=_-      |    \n";
  cout << "      /^\\  |=_= -        |   |_,-~`  /^\\ |_ - =[]  |    \n";
  cout << "  _  /   \\_|_=- _   _   _|  _|  _   /   \\|=_-      |    \n";
  cout << " [ ]/,    \\[ ]_[ ]_[ ]_[ ]_[ ]_[ ]_/,    \\[ ]=-    |    \n";
  cout << "  |/#\"     \\_=-___=__=__- =-_ -=_ /#\"     \\| _ []  |    \n";
  cout << "_/##_   _  \\_-_ =    _____      _/##_   _  \\_ -    |\\    \n";
  cout << "[ ]_[ ]_[ ]_[ ]=_ 0~{Guild}~0  [ ]_[ ]_[ ]_[ ]=-   | \\   \n";
  cout << "|_=__-_=-_  =_|-=_  |     |    |_=-___-_ =-__|_    |  \\   \n";
  cout << " | _- =-     |-_    | ⚔️   |     |= _=       | -    |___\\  \n";
  cout << " |= -_=      |=  _  |     |     |_-=_       |=_    |/+\\|  \n";
  cout << " | =_  -     |_ = _  `-.-`      | =_ = =    |=_-   ||+||  \n";
  cout << " |-_=- _     |=_   =            |=_= -_     |  =   ||+||  \n";
  cout << " |=_- /+\\    | -=               |_=- /+\\    |=_    |^^^|  \n";
  cout << " |=_ |+|+|   |= -  -_,--,_      |_= |+|+|   |  -_  |=  | \n";
  cout << " |  -|+|+|   |-_=  / |  | \\     |=_ |+|+|   |-=_   |_-/  \n";
  cout << " |=_=|+|+|   | =_= | |  | |     |_- |+|+|   |_ =   |=/  \n"; 
  cout << " | _ ^^^^^   |= -  | |  <&>     |=_=^^^^^   |_=-   |/ \n";
  cout << " |=_ =       | =_-_| |  | |     |   =_      | -_   |  \n";
  cout << " |_=-_       |=_=  | |  | |     |=_=        |=-    | \n";
  cout << "====================================================\x1b[0m\n";
  cout << "1| Daily commission 🪙\n";
  cout << "2| Hire 👷‍♂️\n";
  cout << "3| Exchange center ♻️\n";
  cout << "4| ???\n";

  Answer
  else if((ans == "1") && !Daily_Commission) Daily();
  else if(ans == "1") system("clear"), cout << "\x1b[31mYou have taken daily commission!\x1b[0m;\n";
  else if(ans == "2") Hires();
  else if(ans == "3") loop = false, Exchange();
  else system("clear"), cout << "Coming soon!";
  
}

//(6) Library
void Book(string title){
  string Gap;
  for(int i=0; i<18-title.size(); i++) Gap += " ";
  
  cout << "\x1b[38;2;245;251;90m    __________________   __________________     \n";
  cout << "\x1b[38;2;238;238;82m.-/|                  \\ /                  |\\-. \n";
  cout << "\x1b[38;2;231;224;74m|||| " <<title<<Gap<< "|                   |||| \n";
  cout << "\x1b[38;2;223;211;66m|||| ~~*~~~~*~~~~*~~   |   ~~*~~           |||| \n";
  cout << "\x1b[38;2;215;198;59m|||| ~~*~~~~~~~~~*~~   |   ~~~~~~~*~~~~*~~ |||| \n";
  cout << "\x1b[38;2;207;186;52m|||| ~~*~~~~*~~~~~~~   |   ~~*~~~~~~~~~*~~ |||| \n";
  cout << "\x1b[38;2;198;173;46m|||| ~~~~~~~*~~~~*~~   |   ~~*~~~~*~~~~~~~ |||| \n";
  cout << "\x1b[38;2;189;161;39m|||| ~~*~~~~~~~~~*~~   |   ~~*~~~~~~~~~*~~ |||| \n";
  cout << "\x1b[38;2;180;149;33m|||| ~~*~~~~*~~~~~~~   |   ~~~~~~~*~~~~*~~ |||| \n";
  cout << "\x1b[38;2;171;137;27m|||| ~~*~~~~~~~~~*~~   |   ~~*~~~~~~~~~*~~ |||| \n";
  cout << "\x1b[38;2;161;126;21m|||| ~~~~~~~*~~~~*~~   |   ~~*~~~~*~~~~~~~ |||| \n";
  cout << "\x1b[38;2;152;114;15m|||| ~~*~~~~~~~~~*~~   |   ~~*~~~~~~~~~*~~ |||| \n";
  cout << "\x1b[38;2;142;103;09m||||__________________ | __________________|||| \n";
  cout << "\x1b[38;2;132;093;04m||/===================\\|/===================\\|| \n";
  cout << "\x1b[38;2;122;082;00m`--------------------~___~-------------------'' \033[0m\n";
}
void FishLibrary(){
  system("clear"); Book("Fishes");
  cout << "Note: the possibility {%} could change if you have boost item\n\n\n";

  //Normal
  cout << "Rarity: Common\n";
  cout << "Required Rod: Wooden Rod or above\n";
  cout << "-----------------------------------------------------\n";
  cout << "(1) Wood [Home 🏠] - {35%}\n";
  cout << "(2) Goldfish [Home 🏠] - {25%} - 🪙  1\n";
  cout << "(3) Catfish [Home 🏠] - {20%} - 🪙  3\n";
  cout << "(4) Salmon [Home 🏠] - {12%} - 🪙  5\n";
  cout << "(5) Barracuda [Home 🏠] - {8%} - 🪙  7\n";
  cout << "(6) Tuna [Home 🏠] - {2%} - 🪙  10\n";
  cout << "==============================================================\n\n";
  
  //Rare
  cout << "Rarity: UnCommon\n";
  cout << "Required Rod: Wooden Rod or above\n";
  cout << "-----------------------------------------------------\n";
  cout << "(1) Wood [Home 🏠] - {35%}\n";
  cout << "(1) Banana Betta [Home 🏠] - {25%} - 🪙  50\n";
  cout << "(2) Golden Koi [Home 🏠] - {20%} - 🪙  80\n";
  cout << "(3) Adventurous Anglerfish [Home 🏠] - {12%} - 🪙  100\n";
  cout << "(4) Santa Shark [Home 🏠] - {8%} - 🪙  250\n";
  cout << "(5) Dory [Home 🏠] - {2%} - 🪙  500\n";     
  cout << "==============================================================\n\n";

  //Rare
  cout << "Rarity: Rare\n";
  cout << "Required Rod: Mighty Snow Rod or above\n";
  cout << "-----------------------------------------------------\n";
  //cout << "() - 🪙  \n";
  cout << "(1) Wood [Home 🏠] - {35%}\n";
  cout << "(1) Alcoholic Anchovy [Home 🏠] - {25%} - 🪙  1K\n";
  cout << "(2) Pumpkin Pufferfish [Home 🏠] - {20%} - 🪙  2K\n";
  cout << "(3) Machete Marlin [Home 🏠] - {12%} - 🪙  5K\n";
  cout << "(4) Satinist Seahorse [Home 🏠] - {8%} - 🪙  10K\n";
  cout << "(5) Hammerhead Shark [Home 🏠] - {2%} - 🪙  15K\n";     
  cout << "==============================================================\n\n";
  
  //Epic
  cout << "\x1b[38;2;237;116;255mRarity: Epic\n";
  cout << "\x1b[38;2;244;107;243mRequired Rod: Golden Rod or above\n";
  cout << "\x1b[38;2;249;098;231m-----------------------------------------------------\n";
  cout << "\x1b[38;2;254;089;219m(1) Gold [Maria Kingdom 🏰] - {27%}\n";
  cout << "\x1b[38;2;255;080;206m(2) Rose Fish [Maria Kingdom 🏰] - {16%} - 🪙  100K\n";
  cout << "\x1b[38;2;255;070;193m(3) Omniscient Orca [Maria Kingdom 🏰] - {14%} - 🪙  250K\n";
  cout << "\x1b[38;2;255;061;180m(4) Coral Fish [Maria Kingdom 🏰] - {12%} - 🪙  500K\n";
  cout << "\x1b[38;2;255;051;167m(5) Dragon Carp [Maria Kingdom 🏰] - {10%} - 🪙  1M\n";
  cout << "\x1b[38;2;255;041;154m(6) Narwhal [Maria Kingdom 🏰] - {8%} - 🪙  10M\n";     
  cout << "\x1b[38;2;255;031;141m(7) Mosasaurus [Sky Island ⛅] - {7%} - 🪙  \n";  
  cout << "\x1b[38;2;255;020;128m(8) Nautilus [Sky Island ⛅] - {5%} - 🪙  \n";  
  cout << "\x1b[38;2;255;009;115m(9) Giant Pacific Octopus [Gem Palace 💎] - {1,5%} - 🪙  \n";
  cout << "\x1b[38;2;255;000;102m==============================================================\n\n";
  
  //Legendary
  cout << "\x1b[38;2;003;232;255mRarity: ℒℯℊℯ𝓃𝒹𝒶𝓇𝓎\n";
  cout << "\x1b[38;2;000;219;255mRequired Rod: Festival Rod or above\n";
  cout << "\x1b[38;2;000;206;255m-----------------------------------------------------\n";
  cout << "\x1b[38;2;000;191;255m(1) Manly Manta-ray [Maria Kingdom 🏰] - {42%} - 🪙  30M\n";
  cout << "\x1b[38;2;000;176;255m(2) Giganto Whale [Maria Kingdom 🏰] - {20%} - 🪙  50M\n";
  cout << "\x1b[38;2;000;159;255m(3) Circus Cthulhu [Sky Island ⛅] - {17%} - 🪙  \n";
  cout << "\x1b[38;2;000;142;255m(4) Dracopristis [Sky Island ⛅] - {13%} - 🪙  \n";
  cout << "\x1b[38;2;000;122;255m(6) Rainbow Fish [Gem Palace 💎] - {7%} - 🪙  \n";
  cout << "\x1b[38;2;000;099;255m(7) One-Eyed Chaos Lobster [Gem Palace 💎] - {1%} - 🪙  \n";
  cout << "\x1b[38;2;000;068;255m==============================================================\n" << '\n'; //Gap
  cout << "\033[0m";
  
  //Mythic
  cout << "\x1b[38;2;212;054;54mRarity: 𝓜𝔂𝓽𝓱𝓲𝓬𝓪𝓵\n";
  cout << "\x1b[38;2;223;077;50mRequired Rod: Neptune's Trident or above \n";
  cout << "\x1b[38;2;233;098;46m-----------------------------------------------------\n";
  cout << "\x1b[38;2;240;119;42m(1) Kinky Kraken [Sky Island ⛅] - {45%} - 🪙  \n";
  cout << "\x1b[38;2;246;139;40m(2) Megalodon [Sky Island ⛅] - {35%} - 🪙  \n";
  cout << "\x1b[38;2;251;159;39m(3) Colossal Squid {20,667%} [Gem Palace 💎] - 🪙  \n";
  cout << "\x1b[38;2;254;180;43m(4) Ancient Rune Shark {0,333%} [Gem Palace 💎] - 🪙  \n";
  cout << "\x1b[38;2;255;200;50m==============================================================\n" << '\n'; //Gap
  cout << "\033[0m";

  Back
}
void RodLibrary(){
  system("clear"); Book("Rods");
  
  //Wooden-Rod
  cout << "\n\n==============================================================\n"; //Gap
  cout << "Name: " << Rod[1] << '\n';
  cout << "Rarity: Uncommon\n";
  cout << "How to obtain: can be bought in the Rod shop {🪙  50} " << '\n';
  cout << "Effect : None" << '\n';
  cout << "Description: This is a beginner's fishing rod - you can catch Uncommon fish." << '\n';
  cout << "Items which can be caught with Wooden Rod include: Wood and All Uncommon and Common fish" << '\n' << '\n';

  //Bamboo
  cout << "==============================================================\n"; //Gap
  cout << "Name: " << Rod[2] << '\n';
  cout << "Rarity: Uncommon\n";
  cout << "How to obtain: can be bought in the Rod shop {🪙  75}\n";
  cout << "Effect : None\n";
  cout << "Description: This is a beginner's fishing rod - you can catch Uncommon fish.\n";
  cout << "Items which can be caught with Bamboo Rod include: Wood and All UnCommon and Common fish\n\n";

  //Mighty Snow Rod
  cout << "==============================================================\n"; //Gap
  cout << "Name: " << Rod[3] << '\n';
  cout << "Rarity: Rare\n";
  cout << "How to obtain : can be bought in the Rod shop {🪙  1K}\n";
  cout << "Effect : None\n";
  cout << "Description: Freeze!, this is a magical rod that can 'Freeze' rare fish!\n";
  cout << "Items which can be caught with Mighty Snow Rod include: Wood, All Rare, Uncommon and Common fish\n\n";

  //Cursed-Rod
  cout << "==============================================================\n"; //Gap
  cout << "Name: " << Rod[4] << '\n';
  cout << "Rarity: Rare\n";
  cout << "How to obtain : can be bought in the Rod shop {🪙  2K}\n";
  cout << "Description: This is a 'Cursed' Rod!. Equip this rod to catch mysterious fish\n";
  cout << "Items which can be caught with Cursed Rod include: Wood, All Rare, Uncommon and Common fish\n\n";

  //Golden Rod
  cout << "==============================================================\n"; //Gap
  cout << "Name: " << Rod[5] << '\n';
  cout << "Rarity: " << Rarity[0] << '\n';
  cout << "How to obtain : Treasure Chest [King's Chest]\n";
  cout << "Effect : Obtain 2x more money from selling fish\n";
  cout << "Description: This enchanted golden fishing rod attracts bigger fish than usual. \nEquip this rod to catch twice bigger fish than normal.\n";
  cout << "\nItems which can be caught with Golden Rod include: Wood, Gold, All Epic, Rare, Uncommon and Common fish\n\n";

  //Festival Rod
  cout << "==============================================================\n"; //Gap
  cout << "Name: " << Rod[6] << '\n';
  cout << "Rarity: " << Rarity[1] << '\n';
  cout << "How to obtain : Play cards with Joker at Carnival \n";
  cout << "Effect : Double your Exp and gold from fish and increase the probability of getting 2 of the rarest fish in every common uncommon and rare fish.   \n";
  cout << "Description: Use this fishing rod to held a Festival! the rarest fish in each rarity will appear more often when fishing \n";
  cout << "\nItems which can be caught with Festival Rod include: Wood, Gold, All Epic, Rare, Uncommon and Common fish\n\n";

  //Fortune Rod
  cout << "==============================================================\n"; //Gap
  cout << "Name: " << Rod[7] << '\n';
  cout << "Rarity: " << Rarity[1] << '\n';
  cout << "How to obtain : Crack a " << Cookies[1] << '\n';
  cout << "Effect: Be the luckiest person who can catch 3 fish at once, and never get a wood nor common fish!\n"; 
  cout << "Description: Rumor said that the past fisherman king used this fishing rod. Equip this rod to increase your luck!\n";
  cout << "Items which can be caught with Fortune Rod include: All ℒℯℊℯ𝓃𝒹𝒶𝓇𝓎, Epic, Rare, Uncommon,and Common Fish.\n\n"; 

  //Neptune
  cout << "==============================================================\n";
  cout << "Name: " << Rod[8] << '\n';
  cout << "Rarity: " << Rarity[2] << '\n';
  cout << "How to obtain : ???\n";
  cout << "Effect: ???\n"; 
  cout << "Description: ??? \n";
  cout << "Items which can be caught with Ancestral Rod include: All 𝓜𝔂𝓽𝓱𝓲𝓬𝓪𝓵, ℒℯℊℯ𝓃𝒹𝒶𝓇𝓎, Epic, Rare, Uncommon and Common Fish.\n\n"; 

    //Heavenly
  cout << "==============================================================\n";
  cout << "Name: " << Rod[9] << '\n';
  cout << "Rarity: " << Rarity[2] << '\n';
  cout << "How to obtain : ???\n";
  cout << "Effect: ???\n"; 
  cout << "Description: ???\n";
  cout << "Items which can be caught with Heavenly Rod include: All 𝓜𝔂𝓽𝓱𝓲𝓬𝓪𝓵, ℒℯℊℯ𝓃𝒹𝒶𝓇𝓎, Epic, Rare, Uncommon and Common Fish.\n\n"; 

    //Ancesltral 
  cout << "==============================================================\n";
  cout << "Name: " << Rod[10] << '\n';
  cout << "Rarity: " << Rarity[2] << '\n';
  cout << "How to obtain : -\n";
  cout << "Effect: -\n"; 
  cout << "Description: - \n";
  cout << "Items which can be caught with Neptune's Trident include: All 𝓜𝔂𝓽𝓱𝓲𝓬𝓪𝓵, ℒℯℊℯ𝓃𝒹𝒶𝓇𝓎, Epic, Rare, Uncommon and Common Fish.\n\n"; 


  // //Neptune's Trident
  // cout << "==============================================================\n"; //Gap
  // cout << "Name: Neptune's Trident" << '\n';
  // cout << "Rarity: Legendary" << '\n';
  // cout << "How to obtain : Treasure Chest [Deep Sea Chest]" << '\n';
  // cout << "Effect : Catch Two fish at once." << '\n';
  // cout << "Description: Legend says this Trident once belonged to the God of the sea himself. The power of the sea \nitself becomes yours to control! Equip this rod to catch 2 Fish at the same time." << '\n';
  // cout << "\nItems which can be caught with Neptune's Trident include: " << '\n';

  // cout << "==============================================================\n"; //Gap
  // cout << "Name: " << '\n';
  // cout << "Rarity: " << '\n';
  // cout << "How to obtain : " << '\n';
  // cout << "Effect : " << '\n';
  // cout << "Description: ." << '\n';
  // cout << " " << '\n' << '\n';
  
  Back
}
void LvlLibrary(){
  system("clear"); Book("Level Ranks");
  cout << "\n\n\x1b[38;2;70;70;70m=============================================================================\x1b[0m\n";
  cout << "1| \033[90mNewbie\033[0m {★ ☆ ☆ ☆ ☆ }\n";
  cout << "Level: 1 - 50 [10 Exp/Lvl]\n";
  cout << "Effect: n/a\n";
  cout << "\x1b[38;2;70;70;70m=============================================================================\x1b[0m\n";
  cout << "2| \033[92mSpecialist\033[0m {★ ★ ☆ ☆ ☆ }\n";
  cout << "Level: 51 - 500 [10 Exp/Lvl]\n";
  cout << "Effect: " << Stat[2] << "{x2}\n";
  cout << "\x1b[38;2;70;70;70m=============================================================================\x1b[0m\n";
  cout << "3| \033[32mExpert\033[0m {★ ★ ★ ☆ ☆ }\n";
  cout << "Level: 501 - 1,000 [10 Exp/Lvl]\n";
  cout << "Effect: " << Stat[2] << "{x5}\n";
  cout << "\x1b[38;2;70;70;70m=============================================================================\x1b[0m\n";
  cout << "4| \033[95mCandidate Master\033[0m {★ ★ ★ ★ ☆ }\n";
  cout << "Level: 1,001 - 2,000 [1,000 Exp/Lvl]\n";
  cout << "Effect: " << Stat[2] << "{x10}, " << Stat[0] << "{x2}\n";
  cout << "\x1b[38;2;70;70;70m=============================================================================\x1b[0m\n";
  cout << "5| \033[35mMaster\033[0m {★ ★ ★ ★ ★ }\n";
  cout << "Level: 2,001 - 5,000 [5,000 Exp/Lvl]\n";
  cout << "Effect: 5% Commision from Bank, " << Stat[2] << "{x15}, " << Stat[0] << "{x3}\n";
  cout << "\x1b[38;2;70;70;70m=============================================================================\x1b[0m\n";
  cout << "6| \x1b[38;2;188;71;238mGrandmaster {💫}\x1B[0m\n";
  cout << "Level: 5,001 - 9,000 [10,000 Exp/Lvl]\n";
  cout << "Effect: 10% Commision from Bank, " << Stat[2] << "{x20}, " << Stat[0] << "{x5}, " << Stat[1] << "{x2}\n";
  cout << "\x1b[38;2;70;70;70m=============================================================================\x1b[0m\n";
  cout << "7| \x1b[38;2;0;255;90m♔ - \x1b[38;2;0;255;90mℒℯ\x1b[38;2;0;235;100mℊℯ𝓃\x1b[38;2;0;215;110m𝒹𝒶𝓇𝓎 {⭐⭐}\x1B[0m\n";
  cout << "Level: 9,001 - 14,000 [20,000 Exp/Lvl]\n";
  cout << "Effect: 15% Commision from Bank, " << Stat[2] << "{x30}, " << Stat[0] << "{x7}, " << Stat[1] << "{x3}\n";
  cout << "\x1b[38;2;70;70;70m=============================================================================\x1b[0m\n";
  cout << "8| \x1b[38;2;255;0;0m👑 - \x1b[38;2;255;0;0m𝓜𝔂\x1b[38;2;255;45;10m𝓽𝓱𝓲\x1b[38;2;255;90;20m𝓬𝓪𝓵 {🌟🌟🌟🌟}\x1B[0m\n";
  cout << "Level: 14,001 - 20,000 [50,000 Exp/Lvl]\n";
  cout << "Effect: 20% Commision from Bank, " << Stat[2] << "{x40}," << Stat[0] << "{x10}, " << Stat[1] << "{x4}\n";
  cout << "\x1b[38;2;70;70;70m=============================================================================\x1b[0m\n";
  cout << "9| \x1b[38;2;0;255;220m😇 - \x1b[38;2;0;255;220mS\x1b[38;2;10;235;220me\x1b[38;2;20;215;220ma\x1b[38;2;30;195;220mG\x1b[38;2;40;175;220mo\x1b[38;2;50;155;220md {✴ ✴ ✴ ✴ ✴ ✴ }\n\x1B[0m";
  cout << "Level: 20,001+ [100,000 Exp/Lvl]\n";
  cout << "Effect: ???\n";

  Back
}
void BaitLibrary(){
  system("clear"); Book("Bait"); cout << "\n\n";
  for(ll i=0; i<Baits.size(); i++) cout << i+1 << "| " << Baits[i] << " " << InfBait[i] << '\n';
  Back
}
void PotLibrary(){
  system("clear"); Book("Potion"); cout << "\n\n";
  for(ll i=0; i<Potions.size(); i++) cout << i+1 << "| " << Potions[i] << " " << InfPot[i] << '\n';
  Back
}
void MoneyLibrary(){
  system("clear"); Book("Money");
  cout << "Note: 1eN equal to 10 power of N (Ex. 1e3 = 1000)\n\n";
  
  cout << " No.  Place Value     Scientific Notation \n";
  cout << "━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━\n";
  cout << " 1|   Thousand [K]             1e3        \n";
  cout << " 2|   Million  [M]             1e6        \n";
  cout << " 3|   Billion  [B]             1e9        \n";
  cout << " 4|   Trillion [T]             1e12       \n";
  cout << " 5|   Quadrillion [Qa]         1e15       \n";
  cout << " 6|   Quintillion [Qi]         1e18       \n";
  cout << " 7|   Sextillion [Sx]          1e21       \n";
  
  Back
}
void StatLibrary(){
  system("clear"); Book("Status");

  cout << "1| " << Stat[0] << '\n';
  cout << "Effect: Get bonus money x times every time you sell fish\n";
  cout << "2| " << Stat[2] << '\n';
  cout << "Effect: Get bonus Exp x times every time you catch a fish\n";
  cout << "3| " << Stat[1] << '\n';
  cout << "Effect: Get bonus x fish every time you catch a fish\n";
  cout << "4| " << Stat[3] << '\n';
  cout << "Effect: Increase the probability of getting 2 of the rarest fish in Rarity common, uncommon, and rare \n";
  cout << "How to Obtain: Use " << Rod[6] << Rarity[1] << " or above\n";
  cout << "5| " << Stat[4] << '\n';
  cout << "Effect: Remove the chance of acquiring wood and common fishes\n";
  cout << "How to Obtain: Use " << Rod[7] << Rarity[1] << " or above\n";
  // cout << "1| " << Stat[0] << '\n';
  // cout << "Effect: ?????\n";
  // cout << "How to Obtain: Use " << Rod[8] << Rarity[3] << " or above\n";

  Back
}
void EqLibrary(){
  system("clear"); Book("Equipment");
  cout << "Note: More information will appear when you have purchased the item\n\n";
  ll num(1);
  if(CurrHat) for(int i=1; i<=4; i++){cout << num << "| " << Hat[i] << "\nCost: " << CostHat[i-1] << "\nEffect: " << InfHat[i-1] << '\n', num++;}
  if(CurrVest) cout << num << "| " << Vest[1] <<  "\nEffect: Multiply exp 10 times every time you catch a fish\n", num++;

  Back
}
void PetLibrary(){
  system("clear"); Book("Pet");
  
  cout << "1| " << Pet[1] << "\nCost: 🪙  10B" << "\nEffect: " << Stat[0] << "{2x}, " << Stat[2] << "{5x}\n";
  cout << "2| " << Pet[2] << "\nCost: 🪙  100B" << "\nEffect: " << Stat[0] << "{5x}, " << Stat[2] << "{10x}\n";
  cout << "3| " << Pet[3] << "\nCost: 🪙  500B" << "\nEffect: " << Stat[0] << "{8x}, " << Stat[2] << "{20x}, " << Stat[1] << "{2x}\n";

  Back
}
void HireLibrary(){
  system("clear"); Book("Hire");
  cout << "1| " << Hire[1] << "\nCost: 🪙  10B" << "\nEffect: " << "(backpack +10)\n";
  cout << "2| " << Hire[2] << "\nCost: 🪙  100B" << "\nEffect: "  << Stat[0] << "{3x}, " << Stat[2] << "{10x}\n";
  cout << "3| " << Hire[3] << "\nCost: 🪙  1T" << "\nEffect: " << Stat[0] << "{5x}, " << Stat[2] << "{15x}, " << Stat[1] << "{2x}\n";
  Back
}
void Library(){
  system("clear");
  string lockPot = locks, lockEq = locks, lockHire = locks, lockPet = locks;
  if(CurrMap >= 2) lockPot = unlocks, lockEq = unlocks, lockHire = unlocks, lockPet = unlocks;
  cout << "\x1b[38;2;219;146;52m          .---.           .---.                           \n";
  cout << "\x1b[38;2;219;146;52m          |---|           | P |        .-.                \n";
  cout << "\x1b[38;2;219;146;52m      .---| M |   .-.     | O |  .---. |~|    .--.        \n";
  cout << "\x1b[38;2;219;146;52m   .--|===| O |---|L|--.__| T |--|:::| |B|-==-|==|---.    \n";
  cout << "\x1b[38;2;219;146;52m   |%%|Rod| N |===|V|~~|%%| I |--|   |_|A|    |  |___|-.  \n";
  cout << "\x1b[38;2;219;146;52m   |  |   | E |===|L|==|  | O |  |:::|=|I|Fish|Eq|---|=|  \n";
  cout << "\x1b[38;2;219;146;52m   |  |   | Y |   |_|__|  | N |__|   | |T|    |  |___| |  \n";
  cout << "\x1b[38;2;219;146;52m   |~~|===|---|===|~|~~|%%|~~~|--|:::|=|~|----|==|---|=|  \n";
  cout << "\x1b[38;2;219;146;52m   ^--^---'---^---^-^--^--^---'--^---^-^-^-==-^--^---^-'  \n";
  cout << "\x1b[38;2;219;146;52m═══════════════════════════════════════════\x1b[38;2;205;127;50m═════════════════\033[0m\n";
  
  cout << "1| Fishes 🐟 \n";
  cout << "2| Rods 🎣 \n";
  cout << "3| Baits 🪱 \n";
  cout << "4| Level Ranks 🥇\n";
  cout << "5| Status 📊 \n";
  cout << "6| Potions 🧪 " << lockPot << '\n';
  cout << "7| Equipments ⚔️ " << lockEq << '\n';
  cout << "8| Hire 👦 " << lockHire << '\n';
  cout << "9| Pet 🐾 " << lockPet << '\n';
  cout << "10| Money Place Values 🪙\n";
  
  Answer
  else if(ans == "1") FishLibrary(), Library();
  else if(ans == "2") RodLibrary(), Library();
  else if(ans == "3") BaitLibrary(), Library();
  else if(ans == "4") LvlLibrary(), Library();
  else if(ans == "5") StatLibrary(), Library();
  else if(ans == "6" && CurrMap >= 2) PotLibrary(), Library();
  else if(ans == "7" && CurrMap >= 2) EqLibrary(), Library();
  else if(ans == "8" && CurrMap >= 2) HireLibrary(), Library();
  else if(ans == "9" && CurrMap >= 2) PetLibrary(), Library();
  else if(ans == "10") MoneyLibrary();
  else system("clear"), cout << "Invalid number!\n\n", Library();
}

//(7) Backpack
void BpRod(){
  ll numRod = 1;
  for(ll i=0; i<CurrRod; i++) cout << numRod << "| " << Rod[i+1] << '\n', numRod++; 
}
void BpFish(){  
  if(bp.size()){
    sort(bp.begin(), bp.end());
    
    for(ll i=0; i<sizeBp; i++){
      ll cnt(1), num(0);
      while(bp[i] == bp[i+1]) cnt++, i++;
      cout << num << "| " << bp[i] << " (x" << cnt << " )\n";  
    }
    
  }
}
void BpMap(){
  ll num(1);
  if(MapPiece_1) cout << num << "| 1st Map piece\n";
  if(MapPiece_2) cout << num << "| 2nd Map piece\n";
  if(MapPiece_3) cout << num << "| 3rd Map piece\n";
  if(CompleteMap) cout << num << "| Treasure Map\n";
}

void GetCookie(ll type, ll get, ll Crack){
  for(ll i=1; i<=Crack; i++){
    string ans; 
    if(type == 1){
      get = (rand()%10);
      N_Cookies--;
      if(get<5) ans = "50 gold", gold+=50;
      else if(get<8) ans = "2 gold bar", gold_bar+=2;
      else ans = Cookies[1], L_Cookies++;
    }
    if(type == 2){
      get = (rand()%100);
      L_Cookies--;
      if(get<50) ans = "Golden Koi", bp.pb("Golden Koi");
      else if(get<80) ans = "100 gold", gold+=100;
      else if(get<98) ans = "10 gold bar", gold_bar+=10;
      // else if(get<98) ans = "3rd Map piece", MapPiece_3 = true;
      else ans = Rod[7], CurrRod = 7;
    }
    
    if(ans == Rod[7] || ans == "3rd Map piece"){
      ShowLegend(ans);
      break;
    }
    else ShowNormal(ans);
    
  }
  
}
void OpenCookies(){
  cout << "1| Crack " << Cookies[0] << '\n';
  cout << "2| Crack " << Cookies[1] << '\n';

  Answer
  else if(ans == "1"){
    system("clear");
    cout << "\n\n";
    cout << "How many cookies you want to crack? (1-" << N_Cookies << ") ";
    ll Crack;
    cin >> Crack;
    if(Crack > N_Cookies) system("clear"), cout << "\x1b[31mInvalid number!\x1b[0m";
    else GetCookie(1, rand()%10, Crack);
  }
  else if(ans == "2"){
    system("clear");
    cout << "\n\n";
    cout << "How many cookies you want to crack? (1-" << L_Cookies << ") ";
    ll Crack;
    cin >> Crack;
    if(Crack > L_Cookies) system("clear"), cout << "\x1b[31mInvalid number!\x1b[0m";
    else GetCookie(2, rand()%10, Crack);
  }
}
void BpCookies(){
  ll num(1);
  if(N_Cookies) cout << num << "| " << Cookies[0] << ": " << N_Cookies << '\n', num++;
  if(L_Cookies) cout << num << "| " << Cookies[1] << ": " << L_Cookies << '\n', num++;
}

void Backpack(){
  system("clear");
  cout << "  _____           _ " << '\n';
  cout << " |  __ \\         | |" << '\n';
  cout << " | |__) |___   __| |" << '\n';
  cout << " |  _  // _ \\ / _` |" << '\n';
  cout << " | | \\ \\ (_) | (_| |" << '\n';
  cout << " |_|  \\_\\___/ \\__,_|" << '\n';
  cout << "—————————————————————————————————————————" << '\n';
  if(CurrRod) BpRod();
  else cout << "Empty\n";
  
  cout << "\n==================================================================================" << '\n';
  cout << ",--.  ,--.                          " << '\n';
  cout << "|  |,-'  '-. ,---. ,--,--,--. ,---. " << '\n';
  cout << "|  |'-.  .-'| .-. :|        |(  .-' " << '\n';
  cout << "|  |  |  |  \\   --.|  |  |  |.-'  `)" << '\n';
  cout << "|  |  |  |  \\   --.|  |  |  |.-'  `)" << '\n';
  cout << "`--'  `--'   `----'`--`--`--'`----' " << '\n';
  cout << "———————————————————————————————————————————————————" << '\n';
  cout << "Wood: "; cout << (wood_K? Format(wood_K) : Format(wood)); if(wood_K) cout << "K"; cout << '\n';
  cout << "Gold: "; cout << (gold_K? Format(gold_K) : Format(gold)); if(gold_K) cout << "K"; cout << '\n';
  cout << "Wood plank: " << wood_plank << '\n';
  cout << "Gold bar: " << gold_bar << '\n';
  cout << "Diamond: " << diamond << '\n';
  cout << "Ruby: " << ruby << '\n';
  cout << "==================================================================================" << '\n';
  cout << ",------.,--.       ,--.     " << '\n';
  cout << "|  .---'`--' ,---. |  ,---. " << '\n';
  cout << "|  `--, ,--.(  .-' |  .-.  |" << '\n';
  cout << "|  |`   |  |.-'  `)|  | |  |" << '\n';
  cout << "`--'    `--'`----' `--' `--'" << '\n';
  cout << "———————————————————————————————————————————————————" << '\n';
  if(bp.size()) BpFish();
  else cout << "Empty";
  cout << "\n==================================================================================" << '\n';
  cout << " ,-----.   ,--.  ,--.                   \n"; 
  cout << "'  .-.  ',-'  '-.|  ,---.  ,---. ,--.--.\n"; 
  cout << "|  | |  |'-.  .-'|  .-.  || .-. :|  .--'\n"; 
  cout << "'  '-'  '  |  |  |  | |  |\\   --.|  |   \n"; 
  cout << " `-----'   `--'  `--' `--' `----'`--'   \n";
  cout << "———————————————————————————————————————————————————" << '\n';
  BpMap();
  BpCookies();
  if(N_Cookies || L_Cookies) cout << "\n\n\n", OpenCookies();
  else Back 
}

//(8) Status
void Status_Board(){
  system("clear");
  cout << "Player: " << nickname; OutLevel(level); cout << '\n';
  cout << "Status: "; Status();
  cout << "Money: 🪙  "; Money();
  cout << "Rod: "; OutRod();
  cout << "Bait: "; Bait();
  cout << "Hire: " << Hire[CurrHire] << '\n';
  cout << "Equipments: "; Eq();
  cout << "Pet: " << Pet[CurrPet] << '\n';
  cout << "Boat: " << Boat[CurrBoat] << '\n';
  cout << "Riding: " << Ride[CurrRide] << '\n';

  Back
}


//(9) Map
string Klock = locks, Slock = locks, Glock = locks;
bool Map2_Cek(){
  if(nickname == "Hriz") return true;
  else if(CurrRod >= 5 && (money_K >= 100 || money_M || money_B || money_T) && Level_Rank == 2) return true;

  return false;
}

void Map2_Prologue_2(){
  string mc = nickname, fig_1 = "\x1b[38;2;205;205;205mDoris\033[0m", fig_2 = "\x1b[38;2;205;205;205mGuard Commander\033[0m";
  cout << "After the inconvenience that " << nickname << " encounter, he proceeded to look around and be guided through the town by the guard commander...\n"; cin.get();
  cout << '\n' <<  mc << " : uhh... Im okay by the way, you don't have to guide me through the town, i can look around myself."; cin.get();
  cout << '\n' << fig_2 << " : No, no it's okay. It's my fault anyways that i didn't taught him well enough how to guard..."; cin.get();
  cout << '\n' << "So by the way what's you're name? im Doris"; cin.get();
  cout << '\n' << mc << " : Im " << nickname << "nice to meet you\n";
  cout << '\n' << fig_1 <<  " : nice to meet you too..."; cin.get();
  cout << '\n' << "After 2 minutes talking about " << nickname << "'s bussiness\n";
  cout << '\n' << fig_1 << " : we're here, the main attraction of the kingdom. First we'll go to the market where you call sell all your fish here and get high profit."; cin.get();
  cout << "And here, the blacksmith where you can buy equipments and request for some custom ones, but they're expensive tho."; cin.get();
  cout << "And then the most important part, the Event, feel free to explore the event."; cin.get();
  
  cout << mc << " : Yeah it's all good, thank for the tour Mr Doris"; cin.get();
  cout << fig_1 << " : Haha, alright then take care."; cin.get();
}
void Map2_Prologue(){
  system("clear");
  string mc = nickname, fig_1 = "\x1b[38;2;120;120;120mGuard\033[0m", fig_2 = "\x1b[38;2;205;205;205mGuard Commander\033[0m";
  cout << fig_1 << " : Hey! you there, where do you think you're doing? "; cin.get();
  cout << '\n' << mc << " : Im just checking out the kingdom, did i do something wrong? "; cin.get();
  cout << '\n' << fig_1 << " : you're in the kingdom's teritory idiot! You should't be tresspassing...your're going to court with me, and be put on trial. "; cin.get();
  cout << '\n' << mc << " : dude it's not a big deal if i can't be here i'll just walk away "; cin.get();
    
  if(!Map2_Cek() && ID != "Hriz") cout << '\n' << mc << " walks away ", cin.get(), system("clear");
  else{
  
  cout << '\n' << fig_2 << " : Wait, you don't have to do that to him, hes a merchant. He sell's good quality fish that people have been talking about "; cin.get();
  cout << '\n' << fig_1 << " : But sir... "; cin.get();
  cout << '\n' << fig_2 << " : Yes, i know we don't want tresspasser here but he's a merchant. Merchants are essential to our kingdom economy "; cin.get();
  cout << '\n' << mc << " : So...are you gonna let me in...? "; cin.get();
  cout << '\n' << fig_2 << " :  im sorry for the inconvenience he's new to the job. i'll escort you to through the kingdom and show you around. "; cin.get();
  cout << '\n' << mc << " : Alright thanks "; cin.get();
  system("clear");
  cout << "   Congratulations \"Maria Kingdom 🏰\" unlocked! \n"; 
  cout << "                           o                  \n";
  cout << "                       _---|         _ _ _ _ _  \n";
  cout << "                    o   ---|     o   ]-I-I-I-[  \n"; 
  cout << "   _ _ _ _ _ _  _---|      | _---|    \\ ` ' /   \n";
  cout << "   ]-I-I-I-I-[   ---|      |  ---|    |.   |    \n";
  cout << "    \\ `   '_/       |     / \\    |    | /^\\|    \n";
  cout << "     [*]  __|       ^    / ^ \\   ^    | |*||    \n";
  cout << "     |__   ,|      / \\  /    `\\ / \\   | ===|    \n";
  cout << "  ___| ___ ,|__   /    /=_=_=_=\\   \\  |,  _|    \n";
  cout << "  I_I__I_I__I_I  (====(_________)___|_|____|____\n";
  cout << "  \\-\\--|-|--/-/  |     I  [ ]__I I_I__|____I_I_|\n";
  cout << "   |[]      '|   | []  |`__  . [  \\-\\--|-|--/-/ \n"; 
  cout << "   |.   | |' |___|_____I___|___I___|---------|   \n";
  cout << "  / \\| []   .|_|-|_|-|-|_|-|_|-|_|-| []   [] |   \n";
  cout << " <===>  |   .|-=-=-=-=-=-=-=-=-=-=-|   |    / \\  \n";
  cout << " ] []|`   [] ||.|.|.|.|.|.|.|.|.|.||-      <===> \n";
  cout << " ] []| ` |   |/////////\\\\\\\\\\\\\\\\\\\\.||__.  | |[] [ \n";
  cout << " <===>     ' ||||| |   |   | ||||.||  []   <===> \n";
  cout << "  \\T/  | |-- ||||| | O | O | ||||.|| . |'   \\T/  \n";
  cout << "   |      . _||||| |   |   | ||||.|| |     | |   \n";
  cout << "../|' v . | .|||||/____|____\\|||| /|. . | . ./   \n";
  cout << ".|//\\............/...........\\........../../\\\\\\  \n";
  cout << "\n Downloading resources...\n";
  sleep(2);
  CurrMap = 2;
  system("clear");
  Loading();
  system("clear");
  }
}
void OpenMap2(){
  system("clear");
  cout << "\033[90m⚔️ 🛡️ ⚔️ 🛡️ ⚔️ 🛡️ ⚔️ 🛡️ ⚔️ 🛡️ ⚔️ 🛡️ ⚔️ 🛡 🛡 🛡 Maria Kingdom Gate 🛡 🛡 🛡 ⚔️ 🛡️ ⚔️ 🛡️ ⚔️ 🛡️ ⚔️ 🛡️ ⚔️ 🛡️ ⚔️ 🛡️ ⚔️ 🛡️\033[0m\n";
  cout << "\033[90m☰☵☰☵☶☰☲☶☵☶☰☲☶☶☵☰☰☵☶☰☰☰☵☶☰☲☲☵☰☶☶☵☰☲☰☰☵☵☶☰☲☶☶☶☵☰☲☵☶☰☲☶☰☰☵\033[0m\n";
  cout << "\n\nWelcome To Maria Kingdom Gate!\n You need a few things for you to be eligible to enter the Gate:\n";
  cout << "1| Own " << Rod[5] << '\n';
  cout << "2| Atleast be a " << "\033[92mSpecialist\033[0m\n";
  cout << "3| Atleast have 🪙  100K\n";
  cout << "4| Riding a Horse 🐎!\n";
  cout << "\nThese are some of the facilities in Maira Kingdom:\n";
  cout << "1| Crafting Station 🛠️      5| Epic and Legendary Fish\n";
  cout << "2| Pet Shop                6| Legendary Rod\n";
  cout << "3| Potion Shop             7| Equipment \n";
  cout << "4| Helper                  8| Boat \n";
  cout << "\n\nDo you want to go to Maria Kingdom? (y/n) ";
  
  cin >> ans;
  if(ans == "y") Map2_Prologue();
  else system("clear");
}

void Map(){
  system("clear");
  if(CurrMap >= 2) Klock = "    ";
  for(ll i=0; i<4; i++){
    if(i == CurrMap - 1) Pin_Map[i] = "📍";
    else Pin_Map[i] = " ";
  }
  
  cout << "                                                                                  ¸.·Crafting Station 🛠️                          \n";
  cout << "            " << Pin_Map[0] << "                                         "<< Pin_Map[1] << "                    ¸.·´¯            \n";
  cout << "           Home 🏠-·´`·.¸¸.·´¯`·.¸¸.·´¯`·.¸¸.·´¯`·Maria Kingdom 🏰 ¯`·.¸¸.·´                                                     \n";
  cout << "                                                       ︴                                                                         \n";
  cout << "                                                       ︴                                                     " << Pin_Map[2] << '\n';
  cout << "                                                       ¯`·.¸¤ø,¸¸,ø¤º°`°º¤ø,¸¸,ø¤º°`°º¤ø,¸¸,ø¤º°`°º¤ø,¸¸,ø Sky Island ⛅          \n";
  cout << "                                                                ¯`·.¸                                                             \n";
  cout << "                                                                     `·.¸                                                         \n";
  cout << "                                                                    ¸.·´¯ ¯`·.¸.·´¯`·.¸¸.· Trading Place                          \n";
  cout << "                                                                ¸.·´                                                              \n";
  cout << "                                                          " << Pin_Map[3] << " ¸.·´                                               \n";
  cout << "                                                         Gem Palace 💎                                                            \n";

  cout << "\n\n\n";
  cout << "1| Home 🏠" << '\n';
  cout << "2| " << Klock << "Maria Kingdom 🏰" << '\n';
  cout << "3| " << Slock << "Sky Island ⛅" << '\n';
  cout << "4| " << Glock << "Gem Palace 💎" << '\n';
  
  Answer
  else if(ans == "2" && Klock == locks) OpenMap2();
  else if(ans <= to_string(CurrMap)) system("clear"), cout << "you can't go back!";
  // else if(ans == "3"){}
  // else if(ans == "4"){}
    
  else system("clear"), cout << "Invalid Number!\n", Map();
}
void Theme(){
    // cout << "🍀☘️ 🍀☘️ 🍀☘️ 🍀☘️ 🍀☘️ 🪙 🍀☘️ 🍀☘️ 🪙 🍀☘️ 🍀☘️ 🪙 ❇️❇️❇️❇️❇️ 🪙 🍀☘️ 🍀☘️ 🪙 🍀☘️ 🍀☘️ 🪙 🍀☘️ 🍀☘️ 🍀☘️ 🍀☘️ 🍀☘️\n";
  if(CurrMap == 2) cout << "\x1b[38;2;078;078;078m ≼\x1b[38;2;078;078;078m☰☵☰☵☶☰\x1b[38;2;110;111;111m☲☶☵☶☰☲\x1b[38;2;144;145;145m☶☶☵☰☰☵\x1b[38;2;180;181;181m☶☰☲☶☶☵\x1b[38;2;217;218;218m☰☲☰☰☵☲☵ ⚔️ ☶☶☵☰☲☰ ⚞🏰⚟ ☰☵☰☵☰☶ ⚔️ ☰☰☵☶☰☲☲\x1b[38;2;180;181;181m☵☰☶☶☵☰\x1b[38;2;144;145;145m☲☰☰☵☵☶\x1b[38;2;110;111;111m☰☲☶☶☶☵\x1b[38;2;078;078;078m☰☲☵☶☰☲≽"<<"\x1B[0m" << '\n';  
  else if(CurrMap == 3) cout << "☁️☁️☁️☁️☁️☁️☁️☁️☁️ ✨☁️☁️☁️☁️☁️☁️☁️☁️ ✨☁️☁️☁️☁️☁️☁️☁️☁️☁️☁️☁️☁️ 🐉☁️ 🌙 ☁️ 🐉☁️☁️☁️☁️☁️☁️☁️☁️☁️☁️☁️☁️☁️☁️ ✨☁️☁️☁️☁️☁️☁️☁️☁️ ✨☁️☁️☁️☁️☁️☁️☁️☁️☁️" << '\n';
  else if(CurrMap == 4) cout << "🪷 🪷 🪷 💎🪷 🪷 🪷 🪷 🪷 🪷 🪷 🪷 🪷 💎🪷 🪷 🪷 💎🪷 🪷 🔱🏯🔱🪷 🪷 💎🪷 🪷 🪷 💎🪷 🪷 🪷 🪷 🪷 🪷 🪷 🪷 🪷 💎🪷 🪷 🪷" << '\n';
  }

//(10) Achievement
vector<string> VeryHard_D;
vector<string> VeryHard;
vector<string> Hard_D;
vector<string> Hard;
vector<string> Normal_D;
vector<string> Normal;
/*
  if() VeryHard_D.pb("");
  else VeryHard.pb("");
  if() Hard_D.pb("");
  else Hard.pb("");
  if() Normal_D.pb("");
  else Normal.pb("");
*/
void Ach_Check(){
  //Money
  if(BestMoney >= 6) VeryHard_D.pb("Earn 🪙  1Sx!");
  else VeryHard.pb("Earn 🪙  1Sx!");
  if(BestMoney >= 5) Hard_D.pb("Earn 🪙  1Qi!");
  else Hard.pb("Earn 🪙  1Qi!");
  if(BestMoney >= 4) Hard_D.pb("Earn 🪙  1Qa!");
  else Hard.pb("Earn 🪙  1Qa!");
  if(BestMoney >= 3) Hard_D.pb("Earn 🪙  1T!");
  else Hard.pb("Earn 🪙  1T!");
  if(BestMoney >= 2) Hard_D.pb("Earn 🪙  1B!");
  else Hard.pb("Earn 🪙  1B!");
  if(BestMoney >= 1) Normal_D.pb("Earn 🪙  1M!");
  else Normal.pb("Earn 🪙  1M!");
  //Level
  if(Level_Rank >= 9) VeryHard_D.pb("Be a SeaGod!");
  else VeryHard.pb("Be a SeaGod!");
  if(Level_Rank >= 8) VeryHard_D.pb("Be a Mythical fisherman!");
  else VeryHard.pb("Be a Mythical fisherman!");
  if(Level_Rank >= 7) VeryHard_D.pb("Be a Legendary fisherman!");
  else VeryHard.pb("Be a Legendary fisherman!");
  if(Level_Rank >= 6) Hard_D.pb("Be a GrandMaster fisherman!");
  else Hard.pb("Be a GrandMaster fisherman!");
  if(Level_Rank >= 5) Hard_D.pb("Be a Master fisherman!");
  else Hard.pb("Be a Master fisherman!");
  if(Level_Rank >= 4) Hard_D.pb("Be a Candidate Master fisherman!");
  else Hard.pb("Be a Candidate Master fisherman!");
  if(Level_Rank >= 3) Normal_D.pb("Be an Expert fisherman!");
  else Normal.pb("Be an Expert fisherman!");
  if(Level_Rank >= 2) Normal_D.pb("Be a Specialist fisherman!");
  else Normal.pb("Be a Specialist fisherman!");
  //Rod
  if(CurrRod >= 10) VeryHard_D.pb("Own " + Rod[10]);
  else VeryHard.pb("Own " + Rod[10]);
  if(CurrRod >= 9) VeryHard_D.pb("Own " + Rod[9]);
  else VeryHard.pb("Own " + Rod[9]);
  if(CurrRod >= 8) VeryHard_D.pb("Own " + Rod[8]);
  else VeryHard.pb("Own " + Rod[8]);
  if(CurrRod >= 7) Hard_D.pb("Own " + Rod[7]);
  else Hard.pb("Own " + Rod[7]);
  if(CurrRod >= 6) Hard_D.pb("Own " + Rod[6]);
  else Hard.pb("Own " + Rod[6]);
  if(CurrRod >= 5) Normal_D.pb("Own " + Rod[5]);
  else Normal.pb("Own " + Rod[5]);
  //Map
  if(CurrMap >= 4) VeryHard_D.pb("Go to Gem Palace 💎");
  else VeryHard.pb("Go to Gem Palace 💎");
  if(CurrMap >= 3) Hard_D.pb("Go to Sky Island ⛅");
  else Hard.pb("Go to Sky Island ⛅");
  if(CurrMap >= 2) Hard_D.pb("Go to Maria Kingdom 🏰");
  else Hard.pb("Go to Maria Kingdom 🏰");
  //Bank
  if(Level_Rank >= 5) Hard_D.pb("Get commission from bank");
  else Hard.pb("Get commission from bank");
  //Bait
  if(CurrBait >= 3) VeryHard_D.pb("Use " + Baits[3] + " \x1b[38;2;255;0;0mat least once");
  else Hard.pb("Use " + Baits[3] + " \x1b[38;2;70;70;70mat least once");
  if(CurrBait >= 2) Hard_D.pb("Use " + Baits[2] + " \x1b[38;2;255;121;2mat least once");
  else Hard.pb("Use " + Baits[2] + " \x1b[38;2;70;70;70mat least once");
  if(CurrBait >= 1) Hard_D.pb("Use " + Baits[1] + " \x1b[38;2;255;121;2mat least once");
  else Hard.pb("Use " + Baits[1] + " \x1b[38;2;70;70;70mat least once");
  //Potion
  if(CurrPot >= 6) VeryHard_D.pb("Use " + Potions[6] + " \x1b[38;2;255;0;0mat least once");
  else VeryHard.pb("Use " + Potions[6] + " \x1b[38;2;70;70;70mat least once");
  if(CurrPot >= 5) VeryHard_D.pb("Use " + Potions[5] + " \x1b[38;2;255;0;0mat least once");
  else VeryHard.pb("Use " + Potions[5] + " \x1b[38;2;70;70;70mat least once");
  if(CurrPot >= 4) Hard_D.pb("Use " + Potions[4] + " \x1b[38;2;255;121;2mat least once");
  else Hard.pb("Use " + Potions[4] + " \x1b[38;2;70;70;70mat least once");
  if(CurrPot >= 3) Hard_D.pb("Use " + Potions[3] + " \x1b[38;2;255;121;2mat least once");
  else Hard.pb("Use " + Potions[3] + " \x1b[38;2;70;70;70mat least once");
  if(CurrPot >= 2) Normal_D.pb("Use " + Potions[2] + " \x1b[38;2;129;255;90mat least once");
  else Normal.pb("Use " + Potions[2] + " \x1b[38;2;70;70;70mat least once");
  if(CurrPot >= 1) Normal_D.pb("Use " + Potions[1] + " \x1b[38;2;129;255;90mat least once");
  else Normal.pb("Use " + Potions[1] + " \x1b[38;2;70;70;70mat least once");
  //Ride
  // if() Hard_D.pb("Ride a Dragon 🐉");
  // else 
  Hard.pb("Ride a Dragon 🐉");
  Normal_D.pb("Ride a Horse 🐎");
  //Fish
  if(BestFish >= 6) VeryHard_D.pb("Catch a mythical fish");
  else VeryHard.pb("Catch a mythical fish");
  if(BestFish >= 5) VeryHard_D.pb("Catch a legendary fish");
  else VeryHard.pb("Catch a legendary fish");
  if(BestFish >= 4) Hard_D.pb("Catch an epic fish");
  else Hard.pb("Catch an epic fish");
  if(BestFish >= 3) Normal_D.pb("Catch a rare fish");
  else Normal.pb("Catch an rare fish");
  if(BestFish >= 2) Normal_D.pb("Catch an uncommon fish");
  else Normal.pb("Catch a uncommon fish");
  if(BestFish >= 1) Normal_D.pb("Catch a common fish");
  else Normal.pb("Catch a common fish");
  //Boat
  if(CurrBoat >= 2) Hard_D.pb("Own " + Boat[2]);
  else Hard.pb("Own " + Boat[2]);
  if(CurrBoat >= 1) Normal_D.pb("Own " + Boat[1]);
  else Normal.pb("Own " + Boat[1]);
  //Hat
  if(CurrHat >= 6) VeryHard_D.pb("Own " + Hat[6]);
  else VeryHard.pb("Own " + Hat[6]);
  if(CurrHat >= 5) VeryHard_D.pb("Own " + Hat[5]);
  else VeryHard.pb("Own " + Hat[5]);
  if(CurrHat >= 4) Hard_D.pb("Own " + Hat[4]);
  else Hard.pb("Own " + Hat[4]);
  if(CurrHat >= 3) Normal_D.pb("Own " + Hat[3]);
  else Normal.pb("Own " + Hat[3]);
  if(CurrHat >= 2) Normal_D.pb("Own " + Hat[2]);
  else Normal.pb("Own " + Hat[2]);
  if(CurrHat >= 1) Normal_D.pb("Own " + Hat[1]);
  else Normal.pb("Own " + Hat[1]);
  //Pet
  if(CurrPet >= 3) Hard_D.pb("Own " + Pet[3]);
  else Hard.pb("Own " + Pet[3]);
  if(CurrPet >= 2) Normal_D.pb("Own " + Pet[2]);
  else Normal.pb("Own " + Pet[2]);
  if(CurrPet >= 1) Normal_D.pb("Own " + Pet[1]);
  else Normal.pb("Own " + Pet[1]);
  //Hire
  if(CurrHire >= 3) Hard_D.pb("Own " + Hire[3]);
  else Hard.pb("Own " + Hire[3]);
  if(CurrHire >= 2) Normal_D.pb("Own " + Hire[2]);
  else Normal.pb("Own " + Hire[2]);
  if(CurrHire >= 1) Normal_D.pb("Own " + Hire[1]);
  else Normal.pb("Own " + Hire[1]);
  //Vest
  if(CurrVest >= 1) Hard_D.pb("Own " + Vest[1]);
  else Hard.pb("Own " + Vest[1]);
  //Material
  if(ruby) VeryHard_D.pb("Get a ruby");
  else VeryHard.pb("Get a ruby");
  if(diamond >= 1000) VeryHard_D.pb("Get 1K diamond");
  else VeryHard.pb("Get 1K diamond");
  if(BestWood >= 100) VeryHard_D.pb("Get 100K wood");
  else VeryHard.pb("Get 100K wood");
  if(BestGold >= 10) VeryHard_D.pb("Get 10K gold");
  else VeryHard.pb("Get 10K gold");
  if(diamond) Hard_D.pb("Get a diamond");
  else Hard.pb("Get a diamond");
  if(BestWood >= 10) Hard_D.pb("Get 10K wood");
  else Hard.pb("Get 10K wood");
  if(BestGold >= 2) Hard_D.pb("Get 1K gold");
  else Hard.pb("Get 1K gold");
  if(BestWood >= 2) Normal_D.pb("Get 1K wood");
  else Normal.pb("Get 1K Wood");
  if(BestGold >= 1) Normal_D.pb("Get a gold");
  else Normal.pb("Get a gold");
  if(BestWood >= 1) Normal_D.pb("Get a wood");
  else Normal.pb("Get a wood");
  //Catch
  if(level > 20000) VeryHard_D.pb("Catch 200,000 Fish");
  else VeryHard.pb("Catch 200,000 Fish");
  if(level > 10000) VeryHard_D.pb("Catch 100,000 Fish");
  else VeryHard.pb("Catch 100,000 Fish");
  if(level > 1000) Hard_D.pb("Catch 10,000 Fish");
  else Hard.pb("Catch 10,000 Fish");
  if(level > 100) Normal_D.pb("Catch 1,000 Fish");
  else Normal.pb("Catch 1,000 Fish");
  if(level > 10) Normal_D.pb("Catch 100 Fish");
  else Normal.pb("Catch 100 Fish");
  if(level > 1) Normal_D.pb("Catch 10 Fish");
  else Normal.pb("Catch 10 Fish");
  if(level > 1) Normal_D.pb("Catch a Fish");
  else Normal.pb("Catch a Fish");
  //Progress
  if(ID != " ") VeryHard_D.pb("Save your progress");
  else VeryHard.pb("Save your progress");
}

void Achievement(){
  system("clear");
  Ach_Check();
    cout << "\x1b[38;2;0;255;220mSea\x1b[38;2;5;245;220mmu\x1b[38;2;10;235;220mla\x1b[38;2;15;225;220mtor \x1b[38;2;0;255;220mAch\x1b[38;2;5;245;220mie\x1b[38;2;10;235;220mve\x1b[38;2;15;225;220mme\x1b[38;2;20;215;220mnt!\x1b[0m\n\n";
  cout << "Achievement rewards: \n";
  cout << "1| Complete 10 Achievemet ~> Bold Nickname {\x1b[1mExample\x1b[0m}\n";
  cout << "2| Complete 20 Achievemet ~> 1 Color Nickname {\x1b[1m\x1b[38;2;000;255;126mExample\x1b[0m}\n";
  cout << "3| Complete 30 Achievemet ~> Gradient Color Nickname {\x1b[1m\x1b[38;2;000;255;126mE\x1b[38;2;127;255;110mx\x1b[38;2;179;254;102mam\x1b[38;2;200;253;101mp\x1b[38;2;237;251;106mle\x1b[0m}\n";
  cout << "4| Complete 45 Achievemet ~> + Medal [🎖️ ] to Nickname {\x1b[1m\x1b[38;2;000;255;126mE\x1b[38;2;127;255;110mx\x1b[38;2;179;254;102mam\x1b[38;2;200;253;101mp\x1b[38;2;237;251;106mle\x1b[0m 🎖 }\n\n\n";

  cout << "Completed Achievement = \x1b[92m" << VeryHard_D.size() + Hard_D.size() + Normal_D.size() << "\x1b[0m/\x1b[31m" << VeryHard.size() + Hard.size() + Normal.size() + VeryHard_D.size() + Hard_D.size() + Normal_D.size();
  
  //Very Hard
  cout << "\n\n\n\x1b[38;2;255;0;0m";
  cout << "Very Hard\n";

  for(ll i=0; i<VeryHard_D.size(); i++) cout << "\x1b[38;2;255;0;0m" << i+1 << "| " << VeryHard_D[i] << '\n';

  for(ll i=0; i<VeryHard.size(); i++) cout << "\x1b[38;2;70;70;70m" << VeryHard_D.size()+i+1 << "| " << VeryHard[i] << '\n';
  
  //Hard
  cout << "\x1b[38;2;255;121;2m";
  cout << "\n\nHard\n";
  
  for(ll i=0; i<Hard_D.size(); i++) cout << "\x1b[38;2;255;121;2m" << i+1 << "| " << Hard_D[i] << '\n';

  for(ll i=0; i<Hard.size(); i++) cout << "\x1b[38;2;70;70;70m" << Hard_D.size()+i+1 << "| " << Hard[i] << '\n';  

  //Normal
  cout << "\x1b[38;2;129;255;90m";
  cout << "\n\nNormal\n";

  for(ll i=0; i<Normal_D.size(); i++) cout << "\x1b[38;2;129;255;90m" << i+1 << "| " << Normal_D[i] << '\n';

  for(ll i=0; i<Normal.size(); i++) cout << "\x1b[38;2;70;70;70m" << Normal_D.size()+i+1 << "| " << Normal[i] << '\n';

  cout << "\033[0m";

  VeryHard.clear(); VeryHard_D.clear();
  Hard.clear(); Hard_D.clear();
  Normal.clear(); Normal_D.clear();
  Back
}

//(12) Leaderboard
void Leaderboard(){
  system("clear");
  cout << "\x1b[38;2;0;255;220mSea\x1b[38;2;5;245;220mmu\x1b[38;2;10;235;220mla\x1b[38;2;15;225;220mtor \x1b[38;2;0;255;220mLea\x1b[38;2;5;245;220mder\x1b[38;2;10;235;220mbo\x1b[38;2;15;225;220ma\x1b[38;2;20;215;220mrd!\x1b[0m\n\n";
  cout << "Top Player Reward: \n";
  cout << "1st place ~> + 1🥇 and 50% of his money\n";
  cout << "2nd place ~> + 1🥈 and 25% of his money\n";
  cout << "3rd place ~> + 1🥉 and 10% of his money\n\n";
  cout << "🥇| \x1b[1m\x1b[38;2;161;000;221mr\x1b[38;2;172;046;226my\x1b[38;2;182;070;230mu🥇\x1b[38;2;192;090;235m{\x1b[38;2;202;109;239m2\x1b[38;2;211;127;244mx\x1b[38;2;220;144;248m}\x1b[0m"; OutLevel(8995); cout << " \033[31m" << Format(45672) << "pt\033[0m\n";
  cout << "🥈| RealFerron14🥈{2x}"; OutLevel(128); cout << " \033[31m" << Format(763) << "pt\033[0m\n";
  cout << "🥉| namakolimit🥉{1x}"; OutLevel(63);cout << " \033[31m" << Format(359) << "pt\033[0m\n";  
  cout << "4 | AdumB🥉{1x}"; OutLevel(47);cout << " \033[31m" << Format(300) << "pt\033[0m\n";  
  cout << "5 | ???\n";
  cout << "99| " << ID_Ex << '\n';

  Back
  
  else system("clear");
}

//(6)Notice
void Notice(){
  system("clear");
  cout << "\x1b[38;2;70;70;70m===============================================================\x1b[0m\n";
  cout << "\x1b[92mVersion: \x1b[1mv3.1\x1b[0m\n";
  cout << "Date: Friday, 12 August\n";
  cout << "Details: \n";
  cout << "1| Added \"Notice 📢\" option to main menu.\n";
  cout << "2| Bug fixes and improvements\n";
  cout << "\x1b[38;2;70;70;70m===============================================================\x1b[0m\n";
  cout << "\x1b[92mVersion: \x1b[1mv3.1.1\x1b[0m\n";
  cout << "Date: Friday, 12 August\n";
  cout << "Details: \n";
  cout << "1| Added \"Guild ⚔️ \" option to main menu.\n";
  cout << "2| Removed \"End Game ⚠️ \" from the main menu\n";
  cout << "3| Removed \"Trading Places\" from the Town menu\n";
  cout << "4| Change currency from $ to 🪙\n";
  cout << "5| Bug fixes and improvements\n";
  cout << "\x1b[38;2;70;70;70m===============================================================\x1b[0m\n";
  cout << "\x1b[92mVersion: \x1b[1mv3.1.2\x1b[0m\n";
  cout << "Date: Saturday, 13 August\n";
  cout << "Details: \n";
  cout << "1| Removed \"Boat\" from Board\n";
  cout << "2| Added \"Hire\" to Status information\n";
  cout << "\x1b[38;2;70;70;70m===============================================================\x1b[0m\n";
  cout << "\x1b[92mVersion: \x1b[1mv3.1.3\x1b[0m\n";
  cout << "Date: Sunday, 14 August\n";
  cout << "Details: \n";
  cout << "1| Added \"Other\" to Backpack\n";
  cout << "\x1b[38;2;70;70;70m===============================================================\x1b[0m\n";
  cout << "\x1b[92mVersion: \x1b[1mv3.3\x1b[0m\n";
  cout << "Date: Tuesday, August 16\n";
  cout << "Details: \n";
  cout << "1| Added \"Guild ⚔️ \" features: \n";
  cout << "   (1) Daily commision -> you can get daily reward from guild.\n";
  cout << "   (2) Hire -> you can hire people and get bonuses from them.\n";
  cout << "   (3) Exchange -> you can exchange some item here.\n";
  cout << "2| Added gold bar and wood plank -> you can get it by exchange gold or wood in the guild\n";
  cout << "3| Added upgrade features, you can upgrade Hat at Crafting station 🛠️\n";
  cout << "4| Changed menu option from \"(1) Catch a fish 🐟\" to \"(1) Catch a fish 🎣\"\n";
  cout << "5| added [SOLD] feature\n";
  cout << "6| Added \"Pet Shop 🐾\" to Market\n";
  cout << "7| Added \"Status 📊 \", \"Pet 🐾\", \"Equipment ⚔️ \", and \"Hire 👦\" to Library\n";
  cout << "8| Updated the system where after opening a treasure chest, it will instantly go back to the main menu\n";
  cout << "9| increase the price of some epic and legendary fish\n";
  cout << "10| increase golden chest price from 🪙  25M to 🪙  50M\n";
  cout << "11| New event \x1b[1m\x1b[38;2;237;251;106mFo\x1b[38;2;200;253;101mrt\x1b[38;2;179;254;102mune \x1b[38;2;127;255;110mwe\x1b[38;2;000;255;126mek!\x1b[0m\n";
  cout << "Event details: \n";
  cout << "  (1) Everyone gets Rich bonus 2x this week\n";
  cout << "  (2) Added " << Cookies[0] << " and " << Cookies[1];
  cout << "\n      A delicious snack with a touch of wisdom. Crack those treats for instant rewards!\n\n";
  cout << "  Note: to crack cookies you can go to backpack(7)\n";
  cout << "---------------------------------------------------------\n";
  cout << "  Name: " << Cookies[0] << '\n';
  cout << "  How to obtain: Exchange in the guild\n";
  cout << "  Chance: \n";
  cout << "      1| 50 gold 50%\n";
  cout << "      2| 2 gold bar 30%\n";
  cout << "      3| " << Cookies[1] << " 20%\n";
  cout << "---------------------------------------------------------\n";
  cout << "  Name: " << Cookies[1] << '\n';
  cout << "  How to obtain: Crack a " << Cookies[0] << '\n';
  cout << "  Chance: \n";
  cout << "      1| Golden Koi 50%\n";
  cout << "      2| 100 gold 30%\n";
  cout << "      3| 10 gold bar 18%\n";
  cout << "      4| " << Rod[7] << " - " << Rarity[1] << " 1% \x1b[92m(+ 1% Rate Up)\x1b[0m\n";
  cout << "\x1b[38;2;70;70;70m===============================================================\x1b[0m\n";
  cout << "\x1b[92mVersion: \x1b[1mv3.3.1\x1b[0m\n";
  cout << "Date: Tuesday, August 16\n";
  cout << "\x1b[31mHacker 🗡️ : \x1b[1m\x1b[38;2;161;000;221mr\x1b[38;2;172;046;226my\x1b[38;2;182;070;230mu🥇\x1b[38;2;192;090;235m{\x1b[38;2;202;109;239m2\x1b[38;2;211;127;244mx\x1b[38;2;220;144;248m}\x1b[0m - [\x1b[92m+🪙  214B\x1b[0m]\n";
  cout << "Details: \n";
  cout << "1| Added hire and pet to progress\n";
  cout << "2| added hat, hire, and pet to achievement\n";
  cout << "3| Changed lvl system, Previously all ranks only needed 10 xp to increase lvl\n";
  cout << "   New level system: \n";
  cout << "    (1) Grandmaster requires 20xp to level up\n";
  cout << "    (2) Legendary requires 40xp to level up\n";
  cout << "    (3) Mythical and SeaGod requires 100xp to level up\n";
  cout << "4| Bug fixes and improvements\n";
    cout << "\x1b[38;2;70;70;70m===============================================================\x1b[0m\n";
  cout << "\x1b[92mVersion: \x1b[1mv3.3.1\x1b[0m\n";
  cout << "Date: Tuesday, August 16\n";
  cout << "Details: \n";
  cout << "1| \x1b[1m\x1b[38;2;161;000;221mr\x1b[38;2;172;046;226my\x1b[38;2;182;070;230mu🥇\x1b[38;2;192;090;235m{\x1b[38;2;202;109;239m2\x1b[38;2;211;127;244mx\x1b[38;2;220;144;248m}\x1b[0m Rollback level to 2,000 - Compentation \x1b[92m+🪙  1T\x1b[0m\n";
  cout << "2| Changed lvl system, Previously all ranks only needed 10 xp to increase lvl\n";
  cout << "   New level system: \n";
  cout << "    (1) Candidate Master requires 1,000xp to level up\n";
  cout << "    (2) Master requires 5,000xp to level up\n";
  cout << "    (3) Grandmaster requires 10,000xp to level up\n";
  cout << "    (4) Legendary requires 20,000xp to level up\n";
  cout << "    (5) Mythical requires 50,000xp to level up\n";
  cout << "    (6) SeaGod requires 100,000xp to level up\n";
  cout << "3| Bug fixes and improvements\n";
  
  Back
}

//(0) Save your Progress
void Progress(){
  system("clear");
  //Title
  cout << " ,---.                                   ,--.          ,--.                 " << '\n';
  cout << "'   .-'  ,---.  ,--,--.,--,--,--.,--.,--.|  | ,--,--.,-'  '-. ,---. ,--.--. " << '\n';
  cout << "`.  `-. | .-. :' ,-.  ||        ||  ||  ||  |' ,-.  |'-.  .-'| .-. ||  .--'" << '\n';
  cout << ".-'    |\\   --.\\ '-'  ||  |  |  |'  ''  '|  |\\ '-'  |  |  |  ' '-' '|  |   " << '\n';
  cout << "`-----'  `----' `--`--'`--`--`--' `----' `--' `--`--'  `--'   `---' `--'  " << '\n';
  cout << "————————————————————————————————————————————————————————————————————————————————\n";
  cout << "Note: Screenshoot this and send it to my discord Kevinn#2727 to save your progess and login\n\n";
  cout << "I've earned: 🪙  "; Money();
  cout << "My Backpack lvl: " << bplevel << '\n';
  cout << "Backpack slot: " << backpack << '\n';
  cout << "My Current Status: "; Status();
  cout << "I'm at level "<< Format(level) << '\n';
  cout << "Fish Caught: " << Format(level*10) << '\n';
  cout << "I've traveled: " << CurrMap << " Maps\n";
  cout << "I got: \n";
  cout << "Wood: "; cout << (wood_K? Format(wood_K) : Format(wood)); if(wood_K) cout << "K"; cout << '\n';
  cout << "Gold: "; cout << (gold_K? Format(gold_K) : Format(gold)); if(gold_K) cout << "K"; cout << '\n';
  cout << "Wood plank: " << wood_plank << '\n';
  cout << "Gold bar: " << gold_bar << '\n';
  cout << "Diamond: " << diamond << '\n';
  cout << "Ruby: " << ruby << "\n\n\n";
  cout << "I'm using \n";
  cout << "Rod: "; OutRod();
  cout << "Bait: "; Bait();
  cout << "Equipments: "; Eq();
  cout << "Potion: " << Potions[CurrPot] << '\n';
  cout << "Boat: " << Boat[CurrBoat] << '\n';
  cout << "Riding: " << Ride[CurrRide] << '\n';
  cout << "Hire: " << Hire[CurrHire] << '\n';
  cout << "Pet: " << Pet[CurrPet] << '\n';
  BpCookies();
  cout << "Daily: " << (Daily_Commission? "Done" : "-") << '\n';
  
  cout << "\n\n\n\n\n\n";
  Back
}

/*
                  ,--.             ,---.                        ,--.  ,--.                
,--,--,--. ,--,--.`--',--,--,     /  .-',--.,--.,--,--,  ,---.,-'  '-.`--' ,---. ,--,--,  
|        |' ,-.  |,--.|      \    |  `-,|  ||  ||      \| .--''-.  .-',--.| .-. ||      \ 
|  |  |  |\ '-'  ||  ||  ||  |    |  .-''  ''  '|  ||  |\ `--.  |  |  |  |' '-' '|  ||  | 
`--`--`--' `--`--'`--'`--''--'    `--'   `----' `--''--' `---'  `--'  `--' `---' `--''--'
*/
void Board(){
  cout << "Tips: "; Tips();
  cout << "Player: "; OutLevel(level); cout << '\n';
  cout << "Status: "; Status();
  cout << "Money: 🪙  "; Money();
  cout << "Rod: "; OutRod();
  cout << "Eq: "; Eq();
  cout << "Backpack: " << backpack-bp.size() << " empty slots\n";
  cout << "BP: [";
  for(ll i=0; i<bp.size(); i++){
    if(i > 0 && i < 11) cout << ", "; //Coma
    cout << bp[i]; //Fishes
    if(i == 10) break; //Max Display
  }
  if(bp.size() > 9) cout << ", ...]"; // Max Display
  else cout << "]";
  //Jeda
  cout << "\n\n";
}

void Menu(){
  string TownLock = locks, GuildLock = locks;
  if(CurrMap >= 2) TownLock = unlocks, GuildLock = unlocks; //Locked Fiture
  cout << "(1) Catch a fish 🎣         (7) Backpack 🎒 - {" << Format(bp.size()) << "}\n";
  cout << "(2) Sell fish 💰            (8) Status 📊" << '\n';
  cout << "(3) Market 🛒               (9) Map 🗺️" << '\n';
  cout << "(4) Town 🏛️ "<< TownLock <<"             (10) Achievement 🎖️" << '\n';
  cout << "(5) Guild ⚔️ "<< GuildLock <<"            (11) Leaderboard 🏆" << '\n';
  cout << "(6) Library 📜              (12) Notice 📢          (0) Save your progress 💾" << '\n';

  cout << '\n' << "Enter a number: ";
  cin >> ans;
  if(ans == "1") CekBP();
  else if(ans == "2") if(bp.size()) Sell(); else system("clear"), cout << "You Don't have any Fish to sell!";
  else if(ans == "3") Market();
  else if(ans == "4" && CurrMap >= 2) Town();
  else if(ans == "5" && CurrMap >= 2) Guild();
  else if(ans == "6") Library();
  else if(ans == "7") Backpack();
  else if(ans == "8") Status_Board();
  else if(ans == "9") Map();
  else if(ans == "10") Achievement();
  else if(ans == "11") Leaderboard();
  else if(ans == "12") Notice();
  else if(ans == "0") Progress();
  else{
    system("clear");
    cout << "Invalid number!" << '\n' << '\n';
    Board();
    Menu();
  }
  /*
(1) Fish
(2) Market (Special item?)
(3) Rod Shop
(4) Information --> Rod effect, fish worth
*/
}

//Start
void Player(){
  cout << "\n\nEnter your Nickname: ";
  cin >> nickname;
}
void Login(){
  system("clear");
  cout << "Note: if there's any problem just ask Kevinn#2727 !\n\n";
  
  cout << "username: ";
  cin >> ID;
  cout << "Password: ";
  cin >> pw;
  system("clear");
  //Admind
  if(ID == "Hriz" && pw == pwHriz){
    nickname = "\x1b[1m\x1b[38;2;201;054;255mA\x1b[38;2;219;070;248md\x1b[38;2;234;087;241mm\x1b[38;2;246;105;236mi\x1b[38;2;255;122;232mn 🎖️ 🥇🥈🥉\x1b[0m";
    cout << "Selamat datang Hariz :) semangatt\n";
    cout << "\nChoose Rod: "; cin >> CurrRod;
    cout << "\nChoose Map: "; cin >> CurrMap;
    cout << "\nChoose Level: "; cin >> level;
    cout << "\nChoose Bp size: "; cin >> backpack; bplevel = (backpack - 10)/5;
    cout << "\nAdd Bonus? (y/n) "; string Bns; cin >> Bns; 
    if(Bns == "y"){
      cout << "\nMoney "; cin >> CostumeBMoney;
      cout << "\nExp "; cin >> CostumeBExp;
      cout << "\nCatch "; cin >> CostumeBCatch;
    }
    cout << "\nChoose Money to add: ";
    string CostumeSymbol; cin >> CostumeSymbol;
    cout << "How much money do you want to add: ";
    ll CostumeMoney; cin >> CostumeMoney;

    if(CostumeSymbol == "K") money_K = CostumeMoney;
    else if(CostumeSymbol == "M") money_M = CostumeMoney;
    else if(CostumeSymbol == "B") money_B = CostumeMoney;
    else if(CostumeSymbol == "T") money_T = CostumeMoney;
    else if(CostumeSymbol == "Qa") money_Qa = CostumeMoney;
    else if(CostumeSymbol == "Qi") money_Qi = CostumeMoney;
    else if(CostumeSymbol == "Sx") money_Sx = CostumeMoney;
    
    
    system("clear");
    Loading_Login();
  }

  else if(ID == "Example" && pw == pwEx){
    nickname = ID_Ex;
    money_Sx = 990876;
    bplevel = 18;
    backpack = 1200;
    level = 24783;
    CurrMap = 4;
    CurrRod = 10;
    CurrBait = 3;
    CurrPot = 7;
    CurrHat = 1;
    CurrVest = 1;
    CurrBoat = 1;
    system("clear");
    Loading_Login();
  }  
  else if(ID == "AdumB" && pw == pwAdumB){
    nickname = "AdumB🥉{1x}";
    money_B = 10;
    bplevel = 1;
    backpack = 15;
    level = 47;
    CurrMap = 1;
    CurrRod = 4;
    CurrBait = 0;
    CurrPot = 0;
    CurrHat = 0;
    CurrVest = 0;
    CurrBoat = 0;
    wood = 469;
    gold = 10;
    system("clear");
    Loading_Login();
  }  
  else if(ID == "ryu" && pw == pwryu){
    nickname = "\x1b[1m\x1b[38;2;161;000;221mr\x1b[38;2;172;046;226my\x1b[38;2;182;070;230mu🥇\x1b[38;2;192;090;235m{\x1b[38;2;202;109;239m2\x1b[38;2;211;127;244mx\x1b[38;2;220;144;248m}\x1b[0m";
    money_T = 2;
    bplevel = 11;
    backpack = 185;
    level = 2060;
    CurrMap = 2;
    CurrRod = 6;
    
    CurrBait = 1;
    CurrPot = 3;
    CurrHat = 4;
    CurrVest = 1;
    CurrBoat = 2;
    CurrPet = 3;
    CurrHire = 3;
    
    wood = 108;
    wood_plank = 0;
    gold = 44;
    gold_bar = 0;
    N_Cookies = 53;
    L_Cookies = 0;
    Daily_Commission = true;
    system("clear");
    Loading_Login();
  }  
  else if(ID == "RealFerron14" && pw == pwRealFerron14){
    nickname = "RealFerron14🥈{2x}";
    money_B = 100;
    bplevel = 4;
    backpack = 105;
    level = 2000;
    CurrMap = 2;
    CurrRod = 6;
    
    CurrBait = 1;
    CurrPot = 3;
    CurrHat = 2;
    CurrVest = 1;
    CurrBoat = 2;
    CurrPet = 0;
    CurrHire = 0;
    
    wood = 0;
    wood_plank = 0;
    gold = 0;
    gold_bar = 0;
    Daily_Commission = true;
    system("clear");
    Loading_Login();
  }  
  else if(ID == "namakolimit" && pw == pwnamakolimit){
    nickname = "namakolimit🥉{1x}";
    money_M = 8;
    money_K = 800;
    bplevel = 2;
    backpack = 20;
    level = 63;
    CurrMap = 2;
    CurrRod = 5;
    CurrBait = 0;
    CurrPot = 1;
    CurrHat = 0;
    CurrVest = 0;
    CurrBoat = 0;
    wood = 22;
    gold = 6;
    system("clear");
    Loading_Login();
  }  

  else if(ID == "clouded" && pw == "cloudedfishing"){
    nickname = "cloudedfishing";
    money_M = 27;
    bplevel = 5;
    backpack = 85;
    level = 158;
    CurrMap = 2;
    CurrRod = 5;
    CurrBait = 2;
    CurrPot = 2;
    CurrHat = 0;
    CurrVest = 0;
    CurrBoat = 1;
    wood = 1001;
    gold = 200;
    system("clear");
    Loading_Login();
  }  

  
  else  system("clear"), cout << "Wrong Password!\n\n", Login();
}

void Prologue(){
  system("clear");
  cout << "Press Enter to Continue! \n\n\n";

  cout << "Once upon a time, There was a man named " << nickname << "..."; cin.get();
  cout << "\n3 weeks ago he was stranded on the beach when the ship was crushed by the waves."; cin.get();
  cout << "\nHe then found a small old house on the side of the beach and tried to make ends meet by fishing..."; cin.get();
  cout << "\nBut then " << nickname << " got bored of it, fishing every day and eating the fish he catches,";
  cout << "\nhe dreamed of eating meat, fresh BBQ meat..."; cin.get();
  cout << "\nafter then " << nickname << " had an idea to sell his fish that he catches and sell it until hes rich..."; cin.get();
  for(int i=0; i<3; i++){
    system("clear");
    cout << RGB(10*i, 255-20*i, 220) << "            Welcome to Seamulator!\n"; 
    sleep(1);
  }
  cout << "\033[0m";

}
void Intro(){
  cout <<"\x1b[38;2;0;255;220m ________  _______   ________  _____ ______   ___  ___  ___       ________  _________  ________  ________           \n"; 
  cout <<"\x1b[38;2;5;245;220m|\\   ____\\|\\  ___ \\ |\\   __  \\|\\   _ \\  _   \\|\\  \\|\\  \\|\\  \\     |\\   __  \\|\\___   ___\\\\   __  \\|\\   __  \\\n";
  cout <<"\x1b[38;2;10;235;220m\\ \\  \\___|\\ \\   __/|\\ \\  \\|\\  \\ \\  \\\\\\__\\ \\  \\ \\  \\\\\\  \\ \\  \\    \\ \\  \\|\\  \\|___ \\  \\_\\ \\  \\|\\  \\ \\  \\|\\  \\\n"; 
  cout <<"\x1b[38;2;15;225;220m \\ \\_____  \\ \\  \\_|/_\\ \\   __  \\ \\  \\\\|__| \\  \\ \\  \\\\\\  \\ \\  \\    \\ \\   __  \\   \\ \\  \\ \\ \\  \\\\\\  \\ \\   _  _\\\n";
  cout <<"\x1b[38;2;20;215;220m  \\|____|\\  \\ \\  \\_|\\ \\ \\  \\ \\  \\ \\  \\    \\ \\  \\ \\  \\\\\\  \\ \\  \\____\\ \\  \\ \\  \\   \\ \\  \\ \\ \\  \\\\\\  \\ \\  \\\\  \\|\n";
  cout <<"\x1b[38;2;25;205;220m    ____\\_\\  \\ \\_______\\ \\__\\ \\__\\ \\__\\    \\ \\__\\ \\_______\\ \\_______\\ \\__\\ \\__\\   \\ \\__\\ \\ \\_______\\ \\__\\\\ _\\\n";
  cout <<"\x1b[38;2;30;195;220m   |\\_________\\|_______|\\|__|\\|__|\\|__|     \\|__|\\|_______|\\|_______|\\|__|\\|__|    \\|__|  \\|_______|\\|__|\\|__|\n";
  cout << "\x1b[38;2;35;185;220m" << "   \\|_________|\n\n\033[0m";
  //Intro
cout << "\x1b[38;2;0;255;220mCreator: Kevinn#2727\n";
cout << "\x1b[38;2;5;245;220mHelper: Adumb#9587, aluqis_#9232, 「Zhyr」#5187\n";
cout << "\x1b[38;2;10;235;220mTitle: Seamulator\n";
cout << "\x1b[38;2;15;225;220mVersion: 3.0\n";
cout << "\x1b[38;2;20;215;220mLanguage: C++\n";
cout << "\x1b[38;2;23;210;220mCode Size: 3000+ line, 18,000+ words\n";
cout << "\x1b[38;2;25;205;220mTime: 29 July 2022\n" ;
cout << "\033[0m\n\n\n";
  
  cout << "\x1b[38;2;0;255;220m1| New Game\n";
  cout << "\x1b[38;2;5;245;220m2| Login \n";
  cout << "\x1b[38;2;10;235;220m3| ???\n";

  cout << "\nEnter a number: ";
  cin >> ans;
  if(ans == "1") Player(), system("clear"), Loading(), Prologue();
  else if(ans == "2") Login();
  else if(ans == "3") system("clear"), cout << "Coming Soon!\n\n", Intro();
  else system("clear"), cout << "Invalid Number! \n\n", Intro();
}

int main() {

  Intro();
  while(Game--){
    while(InTown) Town(); // Stay
    SaveMat(); SaveMoney(); // Overflow
    
    Theme();
    Board();
    Menu();
    cout << "\n\n";
    Game++;
  }
    return 0;
}

/*

                                                                          ¸.·Crafting Station
                                                                     ¸.·´¯     
           Bank -·´`·.¸¸.·´¯`·.¸¸.·´¯`·.¸¸.·´¯`·.¸¸.- Town ¯`·.¸¸.·´
                                                       ︴                 
                                                       ︴
                                                       ¯`·.¸¤ø,¸¸,ø¤º°`°º¤ø,¸¸,ø¤º°`°º¤ø,¸¸,ø¤º°`°º¤ø,¸¸,ø Black Market
                                                                ¯`·.¸
                                                                     `·.¸
                                                                    ¸.·´¯ ¯`·.¸.·´¯`·.¸¸.· Trading Place    
                                                                ¸.·´
                                                            ¸.·´
                                                         ?????

*/

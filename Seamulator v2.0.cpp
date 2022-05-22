//  ,---.                                   ,--.          ,--.                 
// '   .-'  ,---.  ,--,--.,--,--,--.,--.,--.|  | ,--,--.,-'  '-. ,---. ,--.--. 
// `.  `-. | .-. :' ,-.  ||        ||  ||  ||  |' ,-.  |'-.  .-'| .-. ||  .--' 
// .-'    |\   --.\ '-'  ||  |  |  |'  ''  '|  |\ '-'  |  |  |  ' '-' '|  |    
// `-----'  `----' `--`--'`--`--`--' `----' `--' `--`--'  `--'   `---' `--'  Hriz                                                       
//———————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————

// Creator: Hriz#1171
// Helper: Adumb#9587, aluqis_#9232
// Title: Seamulator
// Language: C++
// Time: 19 May 2022 - 22 May 2022
// Code: 1,600 Line



/*
,--.  ,--.                  ,--.               
|  '--'  | ,---.  ,--,--. ,-|  | ,---. ,--.--. 
|  .--.  || .-. :' ,-.  |' .-. || .-. :|  .--' 
|  |  |  |\   --.\ '-'  |\ `-' |\   --.|  |    
`--'  `--' `----' `--`--' `---'  `----'`--'   
*/
#include <bits/stdc++.h>
using namespace std;
m




/*                                    
,--.                         ,--.   
`--',--,--,  ,---. ,--.,--.,-'  '-. 
,--.|      \| .-. ||  ||  |'-.  .-' 
|  ||  ||  || '-' ''  ''  '  |  |   
`--'`--''--'|  |-'  `----'   `--'   
            `--'                 
*/

long long level(1), bplevel(0), xp(0), money(0), backpack(5), fish(0), CurrentRod(0), Game(1), sizeBp(0), Random(0), FishCatched(0), Allmoney(0); // sizeBp = bp.size(); 

//Items
int wood(0);

//Rod
string Rod [6]={"Wooden-Rod", "Mighty Snow Rod", "Cursed-Rod", "Golden Rod - {Legendary}", "Neptune's Trident - {Legendary}", "Fortune Rod - {Legendary}"};

//Backpack
vector <string> bp;

//Rod level Marker
int RodLevel[6] = {0, 0, 0, 0, 0, 0};

//Fish
vector <string> Fish_Normal;
vector <string> Fish_Mighty;
vector <string> Fish_Cursed;
vector <string> Fish_Golden;
vector <string> Fish_Neptune;
vector <string> Fish_Fortune;
int Fish[21] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
/*


1. Goldfish
2. Catfish
3. Salmon
4. Barracuda
5. Tuna
6. Banana Betta
7. Golden Koi
8. Adventurous Angelerfish
9. Santa Shark
10. Omniscient Orca
11. Alcoholic Anchovy 
12. Pumpkin Pufferfish
13. Machete Marlin
14. Satinist Seahorse
15. Kinky Kraken
16. Manly Manta-ray
17. Giganto Whale
18. Goblin Shark
19. Circus Cthulhu
20. Lucky Lionfish
21. Dragon Carp


*/

//Chest
vector <string> Kings;
vector <string> Deep;
vector <string> Premium;

//Vector elements
void inChest(){
  for(int i=1; i<=3; i++){
    Kings.push_back("10 Wood");
    Deep.push_back("50 Wood");
    Premium.push_back("100 Wood");
  }
  for(int i=1; i<=3; i++){
    Kings.push_back("Golden Koi");
    Deep.push_back("Omniscient Orca");
    Premium.push_back("Kinky Kraken");
  }
  for(int i=1; i<=2; i++){
    Kings.push_back("$4,000");
    Deep.push_back("$90,000");
    Premium.push_back("$900,000");
  }
  for(int i=1; i<=2; i++){
    Kings.push_back("Golden Rod");
    Deep.push_back("Neptune's Trident");
    Premium.push_back("Fortune Rod");
  }
}
void inFish(){
  //Items
  for(int i=1; i<=3; i++){
    Fish_Normal.push_back("Wood");
    Fish_Mighty.push_back("Wood");
    Fish_Cursed.push_back("Wood");
  }

  //Legendary
  for(int i=1; i<=2; i++){
    Fish_Golden.push_back("Manly Manta-ray");
    Fish_Neptune.push_back("Goblin Shark");
    Fish_Fortune.push_back("Lucky Lionfish");
  }
  for(int i=1; i<=1; i++){
    Fish_Golden.push_back("Giganto Whale");
    Fish_Neptune.push_back("Circus Cthulhu");
    Fish_Fortune.push_back("Dragon Carp");
  }

  //Common ~ Epic
  for(int i=1; i<=10; i++){
    Fish_Normal.push_back("Goldfish");
    Fish_Mighty.push_back("Banana Betta");
    Fish_Cursed.push_back("Alcoholic Anchovy");
    }
  for(int i=1; i<=8; i++){
    Fish_Normal.push_back("Catfish");
    Fish_Mighty.push_back("Golden Koi");
    Fish_Cursed.push_back("Pumpkin Pufferfish");
  }
  for(int i=1; i<=6; i++){
    Fish_Normal.push_back("Salmon");
    Fish_Mighty.push_back("Adventurous Angelerfish");
    Fish_Cursed.push_back("Machete Marlin");
  }
  for(int i=1; i<=4; i++){
    Fish_Normal.push_back("Barracuda");
    Fish_Mighty.push_back("Santa Shark");
    Fish_Cursed.push_back("Satinist Seahorse");
  }
  for(int i=1; i<=2; i++){
    Fish_Normal.push_back("Tuna");
    Fish_Mighty.push_back("Omniscient Orca");
    Fish_Cursed.push_back("Kinky Kraken");
  }
}
void inFortune(){
  //Fortune Rod Bonus chance
  for(int i=1; i<=5; i++){
    Fish_Normal.push_back("Tuna");
    Fish_Mighty.push_back("Omniscient Orca");
    Fish_Cursed.push_back("Kinky Kraken");
    Fish_Golden.push_back("Giganto Whale");
    Fish_Neptune.push_back("Circus Cthulhu");
    Fish_Fortune.push_back("Dragon Carp");
  }
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
string FormatWithCommas(T value){
  stringstream ss;
  ss.imbue(locale(""));
  ss << fixed << value;
  return ss.str();
}

//Boost or Buff Status
void Status(){
  string resStatus [3] = {"Rich!", "\"Sea God\"", "Super Lucky!"};

  //Golden
  if(CurrentRod == 3){
    cout << resStatus[0];
  }

  //Neptune's
  else if(CurrentRod == 4){
    cout << resStatus[1]; 
  }

  //Fortune
  else if(CurrentRod == 5){
    cout << resStatus[0] << ", " << resStatus[1] << ", " << resStatus[2]; 
  }

  cout << '\n'; //Gap
}

//Give Random Fishing
string RandomFish(int Rod){
  //Random Number for rarity, range deppend on Rod
  Random = (rand() % Rod);


  //Random Fish

  //Normal
  if(Random == 0){
    Random = (rand() % (Fish_Normal.size()));
    return Fish_Normal[Random];
  }

  //Mighty Snow
  else if(Random == 1){
    Random = (rand() % (Fish_Mighty.size()));
    return Fish_Mighty[Random];
  }

  //Cursed
  else if(Random == 2){
    Random = (rand() % (Fish_Cursed.size()));
    return Fish_Cursed[Random];
  }

  //Golden
  else if(Random == 3){
    Random = (rand() % (Fish_Golden.size()));
    return Fish_Golden[Random];
  }

  //Neptune's
  else if(Random == 4){
    Random = (rand() % (Fish_Neptune.size()));
    return Fish_Neptune[Random];
  }

  //Fortune
  else if(Random == 5){
    Random = (rand() % (Fish_Fortune.size()));
    return Fish_Fortune[Random];
  }
}

//Bp
void BpUpgrade(){
  system("clear");

  //Max level 9
  if(bplevel == 9){
    cout << "Your backpack is at maximum level" << '\n';
  }

  //Upgrade Requirement
  else{
    int ReqLevel = (bplevel+1)*5, ReqMoney = (bplevel+1)*2500;
    cout << "Money: $" << FormatWithCommas(money) << "         Backpack {" << bplevel << "} slot: " << backpack << '\n';
    cout << "—————————————————————————————————————————" << '\n';
    cout << "Upgrade backpack to level " << bplevel+1 << "(+5 slot):" << '\n';
    cout << "-Player level " << ReqLevel << " or above" << '\n';
    cout << "-$" <<  ReqMoney << '\n';
    cout << '\n' << "type \"y\" to upgrade, or \"n\" to go back to Menu" << '\n';
    char ansBpUpgrade; cin >> ansBpUpgrade;

    //yes
    if(ansBpUpgrade == 'y'){
      //Cek money && level
      if(level >= ReqLevel && money >= ReqMoney){
        money -= ReqMoney;
        bplevel++;
        backpack += 5;
        system("clear");
      }
      else{
        system("clear");
        cout << "you don't have enough money or level!";
      }
    }

    //no
    else{
      system("clear");
    }
  }
}
void BackpackOut(){
  int Number(1);


  //Normal
  if(Fish[0] > 0){
    cout << Number << "| Goldfish (x" << Fish[0] << ')' << '\n';
    Number++;
  }
  if(Fish[1] > 0){
    cout << Number << "| Catfish (x" << Fish[1] << ')' << '\n';
    Number++;
  }
  if(Fish[2] > 0){
    cout << Number << "| Salmon (x" << Fish[2] << ')' << '\n';
    Number++;
  }
  if(Fish[3] > 0){
    cout << Number << "| Barracuda (x" << Fish[3] << ')' << '\n';
    Number++;
  }
  if(Fish[4] > 0){
    cout << Number << "| Tuna (x" << Fish[4] << ')' << '\n';
    Number++;
  }

  
  //Rare
  if(Fish[5] > 0){
    cout << Number << "| Banana Betta (x" << Fish[5] << ')' << '\n';
    Number++;
  }
  if(Fish[6] > 0){
    cout << Number << "| Golden Koi (x" << Fish[6] << ')' << '\n';
    Number++;
  }
  if(Fish[7] > 0){
    cout << Number << "| Adventurous Angelerfish (x" << Fish[7] << ')' << '\n';
    Number++;
  }
  if(Fish[8] > 0){
    cout << Number << "| Santa Shark (x" << Fish[8] << ')' << '\n';
    Number++;
  }
  if(Fish[9] > 0){
    cout << Number << "| Omniscient Orca (x" << Fish[9] << ')' << '\n';
    Number++;
  }


  //Epic
  if(Fish[10] > 0){
    cout << Number << "| Alcoholic Anchovy (x" << Fish[10] << ')' << '\n';
    Number++;
  }
  if(Fish[11] > 0){
    cout << Number << "| Pumpkin Pufferfish (x" << Fish[11] << ')' << '\n';
    Number++;
  }
  if(Fish[12] > 0){
    cout << Number << "| Machete Marlin (x" << Fish[12] << ')' << '\n';
    Number++;
  }
  if(Fish[13] > 0){
    cout << Number << "| Satinist Seahorse (x" << Fish[13] << ')' << '\n';
    Number++;
  }
  if(Fish[14] > 0){
    cout << Number << "| Kinky Kraken (x" << Fish[14] << ')' << '\n';
    Number++;
  }


  //Legendary
  if(Fish[15] > 0){
    cout << Number << "| Manly Manta-ray (x" << Fish[15] << ')' << '\n';
    Number++;
  }
  if(Fish[16] > 0){
    cout << Number << "| Giganto Whale (x" << Fish[16] << ')' << '\n';
    Number++;
  }
  if(Fish[17] > 0){
    cout << Number << "| Goblin Shark (x" << Fish[17] << ')' << '\n';
    Number++;
  }
  if(Fish[18] > 0){
    cout << Number << "| Circus Cthulhu (x" << Fish[18] << ')' << '\n';
    Number++;
  }
  if(Fish[19] > 0){
    cout << Number << "| Lucky Lionfish (x" << Fish[19] << ')' << '\n';
    Number++;
  }
  if(Fish[20] > 0){
    cout << Number << "| Dragon Carp (x" << Fish[20] << ')' << '\n';
    Number++;
  }
  
}
void BackpackIn(){
  sizeBp = bp.size();

  //Add Fish
  for(int i=0; i<sizeBp; i++){

    
    //Normal
    if(bp[i] == "Goldfish"){
      Fish[0]++;
    }
    else if(bp[i] == "Catfish"){
      Fish[1]++;
    }
    else if(bp[i] == "Salmon"){
      Fish[2]++;
    }
    else if(bp[i] == "Barracuda"){
      Fish[3]++;
    }
    else if(bp[i] == "Tuna"){
      Fish[4]++;
    }

      
    //Rare
    else if(bp[i] == "Banana Betta"){
      Fish[5]++;
    }
    else if(bp[i] == "Golden Koi"){
      Fish[6]++;
    }
    else if(bp[i] == "Adventurous Angelerfish"){
      Fish[7]++;
    }
    else if(bp[i] == "Santa Shark"){
      Fish[8]++;
    }
    else if(bp[i] == "Omniscient Orca"){
      Fish[9]++;
    }


    //Epic
    else if(bp[i] == "Alcoholic Anchovy"){
      Fish[10]++;
    }
    else if(bp[i] == "Pumpkin Pufferfish"){
      Fish[11]++;
    }
    else if(bp[i] == "Machete Marlin"){
      Fish[12]++;
    }
    else if(bp[i] == "Satinist Seahorse"){
      Fish[13]++;
    }
    else if(bp[i] == "Kinky Kraken"){
      Fish[14]++;
    }


    //Legendary
    else if(bp[i] == "Manly Manta-ray"){
      Fish[15]++;
    }
    else if(bp[i] == "Giganto Whale"){
      Fish[16]++;
    }
    else if(bp[i] == "Goblin Shark"){
      Fish[17]++;
    }
    else if(bp[i] == "Circus Cthulhu"){
      Fish[18]++;
    }
    else if(bp[i] == "Lucky Lionfish"){
      Fish[19]++;
    }
    else if(bp[i] == "Dragon Carp"){
      Fish[20]++;
    }

    
  }

  //cout
  BackpackOut();
}

//Boost
void Boost(){
  system("clear");
  cout << "                  _____" << '\n';
  cout << "                 `.___,'" << '\n';
  cout << "                  (___)" << '\n';
  cout << "                  <   >" << '\n';
  cout << "                   ) (" << '\n';
  cout << "                  /`-.\\" << '\n';
  cout << "                 /     \\" << '\n';
  cout << "                / _    _\\" << '\n';
  cout << "               :,' `-.' `:" << '\n';
  cout << "               |         |" << '\n';
  cout << "               :         ;" << '\n';
  cout << "                \\       /" << '\n';
  cout << "                 `.___.'" << '\n';
  cout << "—————————————————————————————————————————" <<'\n';

  cout << '\n' << '\n'; //Gap

  cout << "1| Coming soon!" << '\n';
  cout << "2| Coming soon!" << '\n';
  cout << "3| Coming soon!" << '\n';
  cout << "4| Coming soon!" << '\n';
  cout << "5| Coming soon!" << '\n';
  cout << '\n' << "Enter a number or type \"0\" to go back to menu: ";
  int ansBoost; cin >> ansBoost;
  if(ansBoost == 0){
    system("clear");
  }
}
void NeptuneFishing(){
  // 2 Random fish
  string catched1, catched2;
  catched1 = RandomFish(5);
  catched2 = RandomFish(5);

  //if both Wood
  if(catched1 == "Wood" && catched2 == "Wood"){
    system("clear");
    cout << "You found 2 Wood!" << '\n';
    wood += 2;
  }
    
  //if 1 wood
  else if(catched1 == "Wood"){
    system("clear");
    cout << "You found a Wood and " << catched2 <<'\n';
    bp.push_back(catched2);
    FishCatched++;
  }
  else if(catched2 == "Wood"){
    system("clear");
    cout << "You found a Wood and " << catched1 <<'\n';
    bp.push_back(catched1);   
    FishCatched++;
  }

  //if both fish
  else{
    bp.push_back(catched1);
    bp.push_back(catched2);
    system("clear");
    cout << "You've catched " << catched1 << " and " << catched2 << '\n';
    FishCatched++;
  }

  //Level up
  xp += 2;
  if(xp >= 10){
    level++;
    xp -= 10;
  }
}
void FortuneFishing(){
  //2 Random fish
  string catched1, catched2;
  catched1 = RandomFish(6);
  catched2 = RandomFish(6);

  //if both wood
  if(catched1 == "Wood" && catched2 == "Wood"){
    system("clear");
    cout << "You found 2 Wood!" << '\n';
    wood += 2;
  }

  //if 1 wood
  else if(catched1 == "Wood"){
    system("clear");
    cout << "You found a Wood and " << catched2 <<'\n';
    bp.push_back(catched2);
    FishCatched++;
  }
  else if(catched2 == "Wood"){
    system("clear");
    cout << "You found a Wood and " << catched1 <<'\n';
    bp.push_back(catched1);   
    FishCatched++;
  }

  //if both fish
  else{
    bp.push_back(catched1);
    bp.push_back(catched2);
    system("clear");
    cout << "You've catched " << catched1 << " and " << catched2 << '\n';
    FishCatched++;
  }

  //Level Up
  xp += 2;
  if(xp >= 10){
    level++;
    xp -= 10;
  }
}

//Chest
void OpenChest(int Chest){

  //Random Number for chest item
  Random = (rand()%10);
  
  //For result
  string res;
  int tempChestMoney = money;
  
  //Kings
  if(Chest == 1){
    if(money < 10000){
      system("clear");
      cout << "You don't have enough money!" << '\n';
    }
    //Open Chest
    else{
      money -= 10000;
      res = Kings[Random];
      if(res == "10 Wood"){
        wood += 10;
      }
      else if(res == "Golden Koi"){
        bp.push_back("Golden Koi");
      }
      else if(res == "$4,000"){
        money += 4000;
      }
      else if(res == "Golden Rod"){
        CurrentRod = 3;
      }
    }
  }

  //Deep
  else if(Chest == 2){
    if(money < 100000){
      system("clear");
      cout << "You don't have enough money!" << '\n';
    }

    //Open Chest
    else{
      money -= 100000;
      res = Deep[Random];
      if(res == "50 Wood"){
        wood += 50;
      }
      else if(res == "Omniscient Orca"){
        bp.push_back("Omniscient Orca");
      }
      else if(res == "$90,000"){
        money += 90000;
      }
      else if(res == "Neptune's Trident"){
        CurrentRod = 4;
      }
    }
  }
    
  //Premium
  else if(Chest == 3){
    if(money < 1000000){
      system("clear");
      cout << "You don't have enough moeny!" << '\n';
    }

    //Open Chest
    else{
      money -= 1000000;
      res = Premium[Random];
      if(res == "100 Wood"){
        wood += 100;
      }
      else if(res == "Kinky Kraken"){
        bp.push_back("Kinky Kraken");
      }
      else if(res == "$900,000"){
        money += 900000;
      }
      else if(res == "Fortune Rod"){
        CurrentRod = 5;
      }
    }
  }

  //Done
  system("clear");

  //Spent
  cout << "You've spent $";
  if(Chest == 1) cout << "10,000" << '\n';
  else if(Chest == 2) cout << "100,000" << '\n';
  else if(Chest == 3) cout << "1,000,000" << '\n';

  //Result
  cout << "You found " << res << "!" << '\n';
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

  cout << "Price per Chest: $10,000" << '\n';
  cout << "Best Prize: Golden Rod (Legendary)"<< '\n'; 
    cout << "This enchanted golden fishing rod attracts bigger fish than usual. Equip this rod to catch 25% bigger fish than normal!" << '\n';
  cout << "——————————————————————————————————————————————————————————————————————————————————" << '\n';
  cout << "Prize:" << '\n'; 
  cout << "1| 10 Wood {30%}" << '\n';
  cout << "2| Golden Koi{30%}" << '\n';
  cout << "3| $4,000 {20%}" << '\n';
  cout << "4| Golden Rod (Legendary) {20%}" << '\n' << '\n';

  cout << "Would you like to buy \"King's Chest\" ? (y/n) ";

  //Answer
  char ansChestKings; cin >> ansChestKings;
  if(ansChestKings == 'n'){
    system("clear");
  }
  else if(ansChestKings == 'y'){
    OpenChest(1);
  }
}
void DeepChest(){
  //Title
  system("clear");
  cout << ",------.                            ,-----.,--.                    ,--.   " << '\n';
  cout << "|  .-.  \\  ,---.  ,---.  ,---.     '  .--./|  ,---.  ,---.  ,---.,-'  '-. " << '\n';
  cout << "|  |  \\  :| .-. :| .-. :| .-. |    |  |    |  .-.  || .-. :(  .-''-.  .-' " << '\n';
  cout << "|  '--'  /\\   --.\\   --.| '-' '    '  '--'\\|  | |  |\\   --..-'  `) |  |  " << '\n';
  cout << "`-------'  `----' `----'|  |-'      `-----'`--' `--' `----'`----'  `--'  " << '\n';
  cout << "                        `--'                                             " << '\n';
  cout << '\n' << '\n';

  cout << "Price per Chest: $100,000" << '\n';
  cout << "Best Prize: Neptune's Trident (Legendary)"<< '\n'; 
    cout << "Legend says this Trident once belonged to the God of the sea himself. The power of the sea itself becomes yours to control! Equip this rod to catch 2 Fish at the same time" << '\n';
  cout << "——————————————————————————————————————————————————————————————————————————————————" << '\n';
  cout << "Prize:" << '\n'; 
  cout << "1| 50 Wood {30%}" << '\n';
  cout << "2| Omniscient Orca{30%}" << '\n';
  cout << "3| $90,000 {20%}" << '\n';
  cout << "4| Neptune's Trident (Legendary) {20%}" << '\n' << '\n';

  cout << "Would you like to buy \"Deep Sea Chest\" ? (y/n) ";

  //Answer
  char ansChestDeep; cin >> ansChestDeep;
  if(ansChestDeep == 'n'){
    system("clear");
  }
  else if(ansChestDeep == 'y'){
    OpenChest(2);
    }
}
void PremiumChest(){
  //Title
  system("clear");
  cout << ",------.                         ,--.                       ,-----.,--.                    ,--.  " << '\n';
  cout << "|  .--. ',--.--. ,---. ,--,--,--.`--',--.,--.,--,--,--.    '  .--./|  ,---.  ,---.  ,---.,-'  '-." << '\n';
  cout << "|  '--' ||  .--'| .-. :|        |,--.|  ||  ||        |    |  |    |  .-.  || .-. :(  .-''-.  .-'" << '\n';
  cout << "|  | --' |  |   \\   --.|  |  |  ||  |'  ''  '|  |  |  |    '  '--'\\|  | |  |\\   --..-'  `) |  |   " << '\n';
  cout << "`--'     `--'    `----'`--`--`--'`--' `----' `--`--`--'     `-----'`--' `--' `----'`----'  `--'   " << '\n';
  cout << '\n' << '\n';

  cout << "Price per Chest: $1,000,000" << '\n';
  cout << "Best Prize: Fortune Rod (Legendary)"<< '\n'; 
    cout << "Rumor said that the past fisherman king used this fishing rod. Equip this rod to increase the chance of catching all of the rarest fish from each rarity by 15%!, and you get all Legendary Status!" << '\n';
  cout << "——————————————————————————————————————————————————————————————————————————————————" << '\n';
  cout << "Prize:" << '\n'; 
  cout << "1| 100 Wood {30%}" << '\n';
  cout << "2| Kinky Kraken{30%}" << '\n';
  cout << "3| $900,000 {20%}" << '\n';
  cout << "4| Fortune Rod (Legendary) {20%}" << '\n' << '\n';

  cout << "Would you like to buy \"Premium Chest\" ? (y/n) ";

  //Answer
  char ansChestPremium; cin >> ansChestPremium;
  if(ansChestPremium == 'n'){
    system("clear");
  }
  else if(ansChestPremium == 'y'){
    OpenChest(3);
  }
}

//Menu Void
void UpgradeRod(){
  system("clear");
  cout << "coming soon!";
  // cout << "Rod" << '\n' << '\n';
  // int numRod = 1;
  // if(RodLevel [0] == 0){
  //   cout << numRod << "| Wooden-Rod" << '\n';
  //   numRod++;
  // }
  // if(RodLevel [1] == 0){
  //   cout << numRod << "| Golden Rod" << '\n';
  //   numRod++;
  // }
  // if(RodLevel [2] == 0){
  //   cout << numRod << "| Cursed-Rod" << '\n';
  //   numRod++;
  // }   

  // cout << "===========================================" << '\n';
  // cout << '\n' << '\n';
  // cout << "Choose Rod to Upgrade: ";
  // int ansRodUpgrade; cin >> ansRodUpgrade;
  
}
void Fishing(){
  //Random fish
  string catched;
  
  //check Rod

  //Normal
  if(CurrentRod == 0){
    Random = (rand() % (Fish_Normal.size()));
    catched = Fish_Normal[Random];
  }

  //Mighty Snow
  else if(CurrentRod == 1){
    if(RodLevel[1] == 0){
      catched = RandomFish(2);
    }
    else if(RodLevel[1]){
      Random = (rand() % (Fish_Mighty.size()));
      catched = Fish_Mighty[Random];
      }
  }

  //Cursed
  else if(CurrentRod == 2){
    if(RodLevel[2] == 0){
      catched = RandomFish(3);
    }
    else if(RodLevel[2]){
      Random = (rand() % (Fish_Cursed.size()));
      catched = Fish_Mighty[Random];
      }
  }

  //Golden
  else if(CurrentRod == 3){
    catched = RandomFish(4);
  }

  //Neptune's
  else if(CurrentRod == 4){
    catched = RandomFish(5);
  }

  //Fortune
  else if(CurrentRod == 5){
    catched = RandomFish(6);
  }

  //Result

  
  //if get wood
  if(catched == "Wood"){
    wood++;
    system("clear");
    cout << "You found a Wood!" << '\n';
  }

  //if get fish
  else{
    bp.push_back(catched);
    system("clear");
    cout << "You've catched " << catched << '\n';
    FishCatched++;
  }
  
  //Level UP
  xp++;
  if(xp >= 10){
    level++;
    xp = 0;
  }
}
void CekBP(){
  //cek Bp
  sizeBp = bp.size();
  system("clear");

  //Full
  if(sizeBp == backpack){
    cout << "your backpack is full!";
  }

  //Fishing
  else{
    
    //Cek Buff
    if(CurrentRod == 4 || CurrentRod == 5){
      if(sizeBp+1 == backpack){
      cout << "your backpack is full!";
      }
      else if(CurrentRod == 4){
        NeptuneFishing();
      }
      else if(CurrentRod == 5){
        FortuneFishing();
      }
    }

    //Normal Fishing
    else{
      Fishing();
      }
  }
  
}
void Sell(){
  //Cek Buff
  bool money_golden = false;
  if(CurrentRod == 3 || CurrentRod == 5){
    money_golden = true;
  }

  //Sold
  long long tempMoney(0);
  for(int i=0; i< sizeBp; i++){
    //Normal
    if(bp[i] == "Goldfish"){
      tempMoney += 1;
    }
    else if(bp[i] == "Catfish"){
      tempMoney += 3;
    }
    else if(bp[i] == "Salmon"){
      tempMoney += 5;
    }
    else if(bp[i] == "Barracuda"){
      tempMoney += 7;
    }
    else if(bp[i] == "Tuna"){
      tempMoney += 10;
    }

    //Snow Mighty
    else if(bp[i] == "Banana Betta"){
      tempMoney += 25;
    }
    else if(bp[i] == "Golden Koi"){
      tempMoney += 40;
    }
    else if(bp[i] == "Adventurous Angelerfish"){
      tempMoney += 70;
    }
    else if(bp[i] == "Santa Shark"){
      tempMoney += 100;
    }
    else if(bp[i] == "Omniscient Orca"){
      tempMoney += 150;
    }

    //Cursed
    else if(bp[i] == "Alcoholic Anchovy"){
      tempMoney += 2500;
    }
    else if(bp[i] == "Pumpkin Pufferfish"){
      tempMoney += 4500;
    }
    else if(bp[i] == "Machete Marlin"){
      tempMoney += 7000;
    }
    else if(bp[i] == "Satanist Seahorse"){
      tempMoney += 12000;
    }
    else if(bp[i] == "Kinky Kraken"){
      tempMoney += 20000;
    }

    //Golden
    else if(bp[i] == "Manly Manta-ray"){
      tempMoney += 100000;
    }
    else if(bp[i] == "Giganto Whale"){
      tempMoney += 150000;
    }
      
    //Neptune
    else if(bp[i] == "Goblin Shark"){
      tempMoney += 200000;
    }
    else if(bp[i] == "Circus Cthulhu"){
      tempMoney += 500000;
    }
      
    //Fortune
    else if(bp[i] == "Lucky Lionfish"){
      tempMoney += 1000000;
    }
    else if(bp[i] == "Dragon Carp"){
      tempMoney += 2000000;
    }
  }

  //Result
  system("clear");

  //Add Buff
  if(money_golden){
    cout << "sold for $" << FormatWithCommas(tempMoney+tempMoney/4);
    cout << " with an added bonus of $" << FormatWithCommas(tempMoney/4) << '\n';
    money += tempMoney/4;
    Allmoney += tempMoney/4;
  }

  //Normal Sell
  else{
    cout << "sold for $" << FormatWithCommas(tempMoney) << '\n';
  }

  //Add Money
  money += tempMoney;
  Allmoney += tempMoney;

  //Empty bp
  bp.clear();

}
void Market(){
  //Menu
  system("clear");
  cout << "1| Upgrade Backpack space" << '\n';
  cout << "2| Booster" << '\n';
  cout << "3| Upgrade Rod" << '\n';
  cout << "4| Coming soon!" << '\n';
  cout << '\n' << "Enter a number or type \"0\" to go back to menu: ";

  //Answer
  int ansMarket; cin >> ansMarket;
  if(ansMarket == 0){
    system("clear");
  }

  //Result
  else if(ansMarket == 1) BpUpgrade();
  else if(ansMarket == 2) Boost();
  else if(ansMarket == 3) UpgradeRod();
  else {
    system("clear");
  }
}
void RodShop(){
  //Menu
  system("clear");
  cout << "Money: $" << money << '\n' << '\n';
  cout << "[1] Mighty Snow Rod $75\n";
  cout << "[2] Cursed-Rod $4,500\n";
  cout << "[3] Coming soon!\n";
  cout << '\n' << "Enter a number or type \"0\" to go back to menu: ";

  //Answer
  int ansRodShop; cin >> ansRodShop;
  cout << '\n';

  //Result

  
  //0
  if(ansRodShop == 0){
    system("clear");
  }

  //Mighty Snow
  else if(ansRodShop == 1){
      if(money < 75){
        cout << "you don't have enough money\n";
        RodShop();
      }
      else{
        money -= 75;
        CurrentRod = 1;
        system("clear");
        cout << "You've spent $75!";
      }
    }

  //Cursed
  else if(ansRodShop == 2){
      if(money < 4500){
        cout << "you don't have enough money\n";
        RodShop();
      }
      else{
        money -= 4500;
        CurrentRod = 2;
        system("clear");
        cout << "You've spent $4500!";
      }    
  }

  //Error
  else{
    system("clear");
    cout << "Invalid number!" << '\n' << '\n';
    RodShop();
  }
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

  cout << "Rod" << '\n' << '\n';
  int numRod = 1;
  if(CurrentRod >= 0){
    cout << numRod << "| Wooden-Rod" << '\n';
    numRod++;
  }
  if(CurrentRod >= 1){
    cout << numRod << "| Mighty Snow Rod" << '\n';
    numRod++;
  }
  if(CurrentRod >= 2){
    cout << numRod << "| Cursed-Rod" << '\n';
    numRod++;
  }
  if(CurrentRod >= 3){
    cout << numRod << "| Golden Rod - {Legendary}" << '\n';
    numRod++;
  }
  if(CurrentRod >= 4){
    cout << numRod << "| Neptune's Trident - {Legendary}" << '\n';
    numRod++;
  }
  if(CurrentRod >= 5){
    cout << numRod << "| Cursed-Rod - {Legendary}" << '\n';
    numRod++;
  }
  cout << '\n';
  cout << "==================================================================================" << '\n';
  cout << ",--.  ,--.                          " << '\n';
  cout << "|  |,-'  '-. ,---. ,--,--,--. ,---. " << '\n';
  cout << "|  |'-.  .-'| .-. :|        |(  .-' " << '\n';
  cout << "|  |  |  |  \\   --.|  |  |  |.-'  `)" << '\n';
  cout << "|  |  |  |  \\   --.|  |  |  |.-'  `)" << '\n';
  cout << "`--'  `--'   `----'`--`--`--'`----' " << '\n';
  cout << "———————————————————————————————————————————————————" << '\n';
  cout << "Wood: " << wood << '\n' << '\n';
  cout << "==================================================================================" << '\n';
  cout << ",------.,--.       ,--.     " << '\n';
  cout << "|  .---'`--' ,---. |  ,---. " << '\n';
  cout << "|  `--, ,--.(  .-' |  .-.  |" << '\n';
  cout << "|  |`   |  |.-'  `)|  | |  |" << '\n';
  cout << "`--'    `--'`----' `--' `--'" << '\n';
  cout << "———————————————————————————————————————————————————" << '\n';
  BackpackIn();

  cout << '\n'; // Gap
  //back
  cout << "\nGo back?  (type \"y\") ";
  char ansBackFish; cin >> ansBackFish;
  if(ansBackFish == 'y'){
    system("clear");
  }
}
void TreasureChest(){
  system("clear");
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
  cout << "1| Kings Chest    ($10,000)"  << '\n';
  cout << "2| Deep Sea Chest ($100,000)" << '\n';
  cout << "3| Premium Chest  ($1,000,000)" << '\n';
  cout << "—————————————————————————————————————————————" << '\n';
  cout << "Choose Chest or type \"0\" to go back to home" << '\n';

  //Answer
  int ansChest; cin >> ansChest;
  if(ansChest == 0){
    system("clear");
  }
  else if(ansChest == 1)KingsChest();
  else if(ansChest == 2)DeepChest();
  else if(ansChest == 3)PremiumChest();
}
void Progress(){
  system("clear");
  //Title

  cout << " ,---.                                   ,--.          ,--.                 " << '\n';
  cout << "'   .-'  ,---.  ,--,--.,--,--,--.,--.,--.|  | ,--,--.,-'  '-. ,---. ,--.--. " << '\n';
  cout << "`.  `-. | .-. :' ,-.  ||        ||  ||  ||  |' ,-.  |'-.  .-'| .-. ||  .--'" << '\n';
  cout << ".-'    |\   --.\ '-'  ||  |  |  |'  ''  '|  |\ '-'  |  |  |  ' '-' '|  |   " << '\n';
  cout << "`-----'  `----' `--`--'`--`--`--' `----' `--' `--`--'  `--'   `---' `--'  " << '\n';
  cout << "————————————————————————————————————————————————————————————————————————————————";
  cout << '\n' << '\n';
  cout << "I've earned: $" << FormatWithCommas(Allmoney) << '\n';
  cout << "I'm at level "<< FormatWithCommas(level) << '\n';
  cout << "Fish Caught: " << FormatWithCommas(FishCatched) << '\n';
  cout << "I'm using: " << Rod[CurrentRod] << '\n';

  cout << "\n\n\n\n\n\n";
  cout << "type \"y\" to go back to Home Menu ";
  char ansProgress; cin >> ansProgress;
  if(ansProgress == 'y'){
    system("clear");
  }
  else{
    system("clear");
  }
}


//Information
void FishInformation(){
    system("clear");

  //Title
  cout << "~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~" << '\n';
  cout << "~~~~~~~~~~~~~~~~~~~~~~~~~  /`·.¸   ~~~~~~~~~~~~~~~~~~~~~~~~~~" << '\n';
  cout << "~~~~~~~~~~~~~~~~~~~~~~~~  /¸...¸`:·   ~~~~~~~~~~~~~~~~~~~~~~~" << '\n';
  cout << "~~~~~~~~~~~~~~~~~~~~~ ¸.·´  ¸   `·.¸.·´) ~~~~~~~~~~~~~~~~~~~~" << '\n';
  cout << "~~~~~~~~~~~~~~~~~~~~ : o ):´;      ¸  { ~~~~~~~~~~~~~~~~~~~~~" << '\n';
  cout << "~~~~~~~~~~~~~~~~~~~~~ `·.¸ `·  ¸.·´\\`·¸) ~~~~~~~~~~~~~~~~~~~~" << '\n';
  cout << "~~~~~~~~~~~~~~~~~~~~~~~   `\\\\´´\\¸.·´  ~~~~~~~~~~~~~~~~~~~~~~~" << '\n';
  cout << "~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~\n";
  cout << "Note: the possibility {%} could change if you have boost item\n";
  cout << '\n' << '\n';

  //Normal
  cout << "Rarity: Normal\n";
  cout << "Required Rod: Wooden-Rod or above\n";
  cout << "-----------------------------------------------------\n";
  //cout << "() - $\n";
  cout << "(1) Goldfish {33%} - 1$\n";
  cout << "(2) Catfish {27%} - 3$\n";
  cout << "(3) Salmon {20%} - 5$\n";
  cout << "(4) Barracuda {13,33%} - 7$\n";
  cout << "(5) Tuna {6,67%} - 10$\n";

  cout << "==============================================================\n" << '\n'; //Gap
  //Rare

  cout << "Rarity: Rare\n";
  cout << "Required Rod: Mighty Snow Rod or above\n";
  cout << "-----------------------------------------------------\n";
  //cout << "() - $\n";
  cout << "(1) Banana Betta {33%} - 25$\n";
  cout << "(2) Golden Koi {27%} - 40$\n";
  cout << "(3) Adventurous Anglerfish {20%} - 70$\n";
  cout << "(4) Santa Shark {13,33%} - 100$\n";
  cout << "(5) Omniscient Orca {6,67%} - 150$\n";     

  
  cout << "==============================================================\n" << '\n'; //Gap
  //Epic

  cout << "Rarity: Epic\n";
  cout << "Required Rod: Cursed-Rod or above\n";
  cout << "-----------------------------------------------------\n";
  //cout << "() - $\n";
  cout << "(1) Alcoholic Anchovy {33%} - 250$\n";
  cout << "(2) Pumpkin Pufferfish {27%} - 450$\n";
  cout << "(3) Machete Marlin {20%} - 700$\n";
  cout << "(4) Satanist Seahorse {13,33%} - 1200$\n";
  cout << "(5) Kinky Kraken {6,67%} - 150$\n";     

  cout << "==============================================================\n" << '\n'; //Gap
  //Legendary

  cout << "Rarity: Legendary\n";
  cout << "Required Rod: Golden Rod / Neptune's Trident / Fortune Rod\n";
  cout << "-----------------------------------------------------\n";
  //cout << "() - $\n";
  cout << "(1) Manly Manta-ray {22,22%} - 100,000$ [Golden Rod or above]\n";
  cout << "(2) Giganto Whale {11,12%} - 150,000$ [Golden Rod or above]\n";
  cout << "(3) Goblin Shark {22,22%} - 200,000$ [Neptune's Trident or above]\n";
  cout << "(4) Circus Cthulhu {11,11%} - 500,000$ [Neptune's Trident or above]\n";
  cout << "(5) Lucky Lionfish {22,22%} - 1,000,000$ [Fortune Rod or above]\n";
  cout << "(6) Dragon Carp {11,11%} - 2,000,000$ [Fortune Rod or above]\n";
  cout << "==============================================================\n" << '\n'; //Gap
  //Epic

  cout << "Rarity: Mythical\n";
  cout << "Required Rod: ??? \n";
  cout << "-----------------------------------------------------\n";
  //cout << "() - $\n";
  cout << "(1) ??? {%} - $\n";
  cout << "(2) ??? {%} - $\n";
  cout << "(3) ??? {%} - $\n";
  cout << "==============================================================\n" << '\n'; //Gap

  //back
  cout << "\nGo back?  (type \"y\")\n";
  char ansBackFish; cin >> ansBackFish;
  if(ansBackFish == 'y'){
    system("clear");
  }
}
void RodInformation(){
  system("clear");
  //Title
  cout << "  _____           _ " << '\n';
  cout << " |  __ \\         | |" << '\n';
  cout << " | |__) |___   __| |" << '\n';
  cout << " |  _  // _ \\ / _` |" << '\n';
  cout << " | | \\ \\ (_) | (_| |" << '\n';
  cout << " |_|  \\_\\___/ \\__,_|" << '\n';

  cout << '\n' << '\n'; //Gap

  //Wooden-Rod
  cout << "==============================================================\n"; //Gap
  cout << "Name: Wooden-Rod" << '\n';
  cout << "Rarity: Common" << '\n';
  cout << "How to obtain: Free " << '\n';
  cout << "Effect : None" << '\n';
  cout << "Description: This is a beginner's fishing rod - you can catch common fish." << '\n';
  cout << "Items which can be caught with Wooden-Rod include: Wood and All Common fish" << '\n' << '\n';


  //Mighty Snow Rod
  cout << "==============================================================\n"; //Gap
  cout << "Name: Mighty Snow Rod" << '\n';
  cout << "Rarity: Rare " << '\n';
  cout << "How to obtain : can be bought in the item shop {$75}" << '\n';
  cout << "Effect : None" << '\n';
  cout << "Description: Freeze!, this is a magical rod that can 'Freeze' rare fish!" << '\n';
  cout << "\nItems which can be caught with Mighty Snow Rod include: Wood, All Common and Rare fish " << '\n' << '\n';

  //Cursed-Rod
  cout << "==============================================================\n"; //Gap
  cout << "Name: Cursed-Rod" << '\n';
  cout << "Rarity: Epic" << '\n';
  cout << "How to obtain : can be bought in the item shop {$4,500}" << '\n';
  cout << "Description: This is a 'Cursed' Rod!. Equip this rod to catch mysterious fish" << '\n';
  cout << "\nItems which can be caught with Mighty Snow Rod include: " << '\n';
  cout << "1| Wood" << '\n';
  cout << "2| Common Fish" << '\n';
  cout << "3| Rare Fish" << '\n';
  cout << "4| Epic Fish" << '\n';


  //Golden Rod
  cout << "==============================================================\n"; //Gap
  cout << "Name: Golden Rod" << '\n';
  cout << "Rarity: Legendary" << '\n';
  cout << "How to obtain : Treasure Chest [King's Chest]" << '\n';
  cout << "Effect : Obtain 25% more money from selling fish" << '\n';
  cout << "Description: This enchanted golden fishing rod attracts bigger fish than usual. Equip this \nrod to catch 25% bigger fish than normal." << '\n';
  cout << "\nItems which can be caught with Golden Rod include: " << '\n';
  cout << "1| Wood     		5| Manly Manta-ray" << '\n';
  cout << "2| Common Fish          6| Giganto Whale" << '\n';
  cout << "3| Rare Fish" << '\n';
  cout << "4| Epic Fish" << '\n';
  cout << " " << '\n' << '\n';


  //Neptune's Trident
  cout << "==============================================================\n"; //Gap
  cout << "Name: Neptune's Trident" << '\n';
  cout << "Rarity: Legendary" << '\n';
  cout << "How to obtain : Treasure Chest [Deep Sea Chest]" << '\n';
  cout << "Effect : Catch Two fish at once." << '\n';
  cout << "Description: Legend says this Trident once belonged to the God of the sea himself. The power of the sea \nitself becomes yours to control! Equip this rod to catch 2 Fish at the same time." << '\n';
  cout << "\nItems which can be caught with Neptune's Trident include: " << '\n';
  cout << "1| Wood     		5| Manly Manta-ray" << '\n';
  cout << "2| Common Fish      6| Giganto Whale" << '\n';
  cout << "3| Rare Fish		7| Goblin Shark" << '\n';
  cout << "4| Epic Fish		8| Circus Cthulhu" << '\n';
  cout << " " << '\n' << '\n';


  //Fortune Rod
  cout << "==============================================================\n"; //Gap
  cout << "Name: Fortune Rod" << '\n';
  cout << "Rarity: Legendary" << '\n';
  cout << "How to obtain : Treasure Chest [Premium Chest]" << '\n';
  cout << "Effect : increase the chance of catching all of the rarest fish from each rarity by 15%. And all Legendary rod effect!" << '\n';
  cout << "Description: Rumor said that the past fisherman king used this fishing rod. Equip this rod to increase \nthe chance of catching all of the rarest fish from each rarity by 15%!" << '\n';
  cout << "\nItems which can be caught with Neptune's Trident include: " << '\n';
  cout << "1| Wood     		5| Legendary Fish" << '\n';
  cout << "2| Common Fish" << '\n';
  cout << "3| Rare Fish" << '\n';
  cout << "4| Epic Fish" << '\n';
  cout << " " << '\n' << '\n';

  // cout << "==============================================================\n"; //Gap
  // cout << "Name: " << '\n';
  // cout << "Rarity: " << '\n';
  // cout << "How to obtain : " << '\n';
  // cout << "Effect : " << '\n';
  // cout << "Description: ." << '\n';
  // cout << " " << '\n' << '\n';
  
  //back
  cout << "\nGo back?  (type \"y\")\n";
  char ansBackFish; cin >> ansBackFish;
  if(ansBackFish == 'y'){
    system("clear");
  }
}
void Information(){
  system("clear");
  cout << "[1] Fish\n";
  cout << "[2] Rod\n\n";
  cout << "Enter a number or type \"0\" to go back to menu: ";

  //Answer
  int ansInformation; cin >> ansInformation;
  if(ansInformation == 0){
    system("clear");}
  else if(ansInformation == 1) FishInformation();
  else if(ansInformation == 2) RodInformation();
  else{
    system("clear");
    cout << "Invalid number!" << '\n' << '\n';
    Information();
  }
}





/*
                  ,--.             ,---.                        ,--.  ,--.                
,--,--,--. ,--,--.`--',--,--,     /  .-',--.,--.,--,--,  ,---.,-'  '-.`--' ,---. ,--,--,  
|        |' ,-.  |,--.|      \    |  `-,|  ||  ||      \| .--''-.  .-',--.| .-. ||      \ 
|  |  |  |\ '-'  ||  ||  ||  |    |  .-''  ''  '|  ||  |\ `--.  |  |  |  |' '-' '|  ||  | 
`--`--`--' `--`--'`--'`--''--'    `--'   `----' `--''--' `---'  `--'  `--' `---' `--''--'
*/
void Board(){
  sizeBp = bp.size();
  cout << "Status: ";
  Status();
  cout << "Level: "<< level << '\n';
  cout << "Xp: " << xp <<'\n';
  cout << "Money: $" << FormatWithCommas(money) << '\n';
  cout << "Rod: " << Rod[CurrentRod] << '\n';
  cout << "Backpack: " << backpack-sizeBp << " empty slots\n";
  cout << "BP: ";
  sizeBp = bp.size();
  cout << "[";
  for(int i=0; i<sizeBp; i++){
    if(i > 0 && i < 10){
      cout << ", ";
    }
    cout << bp[i];
    if(i == 10){
      break;
    }
  }
  if(sizeBp > 9) cout << ", ...]";
  else cout << "]";
  //Jeda
  cout << '\n';
    /*
    Level:
    Xp:
    Money:
    Backpack:
    */
}
void Menu(){
  sizeBp = bp.size();
  cout << "(1) Catch a fish            (6) Backpack - {" << sizeBp << "}\n";
  cout << "(2) Sell fish               (7) Treasure Chest" << '\n';
  cout << "(3) Market                  (8) Share your Progres" << '\n';
  cout << "(4) Rod Shop                (9) ???" << '\n';
  cout << "(5) Information             (0) Exit" << '\n';

  cout << '\n' << "Enter a number: ";
  char ansMenu; cin >> ansMenu;
  if(ansMenu == '1') CekBP();
  else if(ansMenu == '2') Sell();
  else if(ansMenu == '3') Market();
  else if(ansMenu == '4') RodShop();
  else if(ansMenu == '5') Information();
  else if(ansMenu == '6') Backpack();
  else if(ansMenu == '7') TreasureChest();
  else if(ansMenu == '8') Progress();
  //else if(ansMenu == '9') 
  else if(ansMenu == '0'){
    system("clear");
    cout << "Thanks for playing this game :)";
    Game = -1;
    }
  else{
    system("clear");
    cout << "Invalid number!" << '\n' << '\n';
    Menu();
  }
  /*
(1) Fish
(2) Market (Special item?)
(3) Rod Shop
(4) Information --> Rod effect, fish worth
*/
}
void Intro(){
cout << " ________  _______   ________  _____ ______   ___  ___  ___       ________  _________  ________  ________           " << '\n';     
cout << "|\\   ____\\|\\  ___ \\ |\\   __  \\|\\   _ \\  _   \\|\\  \\|\\  \\|\\  \\     |\\   __  \\|\\___   ___\\\\   __  \\|\\   __  \\         " << '\n';
cout << "\\ \\  \\___|\\ \\   __/|\\ \\  \\|\\  \\ \\  \\\\\\__\\ \\  \\ \\  \\\\\\  \\ \\  \\    \\ \\  \\|\\  \\|___ \\  \\_\\ \\  \\|\\  \\ \\  \\|\\  \\        " << '\n'; 
cout << " \\ \\_____  \\ \\  \\_|/_\\ \\   __  \\ \\  \\\\|__| \\  \\ \\  \\\\\\  \\ \\  \\    \\ \\   __  \\   \\ \\  \\ \\ \\  \\\\\\  \\ \\   _  _\\        " << '\n';
cout << "  \\|____|\\  \\ \\  \\_|\\ \\ \\  \\ \\  \\ \\  \\    \\ \\  \\ \\  \\\\\\  \\ \\  \\____\\ \\  \\ \\  \\   \\ \\  \\ \\ \\  \\\\\\  \\ \\  \\\\  \\|        " << '\n';
cout << "    ____\\_\\  \\ \\_______\\ \\__\\ \\__\\ \\__\\    \\ \\__\\ \\_______\\ \\_______\\ \\__\\ \\__\\   \\ \\__\\ \\ \\_______\\ \\__\\\\ _\\        " << '\n';
cout << "   |\\_________\\|_______|\\|__|\\|__|\\|__|     \\|__|\\|_______|\\|_______|\\|__|\\|__|    \\|__|  \\|_______|\\|__|\\|__|      " << '\n';
cout << "   \\|_________|                                                                                                      " << '\n';
cout << '\n';
//Intro
cout << "IMPORTANT: This game is sensitive so pleaseee only type the given option to avoid errors, \nI recommend you to use full screen. type \"y\" to start ";
char ansIntro; cin >> ansIntro;
if(ansIntro == 'y'){
  system("clear");
}
else{
  system("clear");
  Intro();
}

}





/*
                  ,--.         
,--,--,--. ,--,--.`--',--,--,  
|        |' ,-.  |,--.|      \ 
|  |  |  |\ '-'  ||  ||  ||  | 
`--`--`--' `--`--'`--'`--''--'
*/

int main() {

  //Input vector elements
  inFish();
  inChest();
  Intro();

  //Start
  while(Game--){

    //Input Buff chance
    if(CurrentRod == 5){
      inFortune();
    }
    Board();
    Menu();
    cout << '\n' << '\n';
    Game++;
  }
    return 0;
}
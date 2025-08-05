 #include <iostream>
#include <string>
#include <vector>
using namespace std;
/* Team 1:
Rajiv - wrote menu skeleton, vectors, t function, display function, Get Name,
and all classes; Duane - wrote Append, & Remove function Mohamed - wrote Sort, &
Reverse function Erlande - wrote Insert function Arafat - wrote Get Min, & Get
Max function
*/
class Pokemon {
public:
  void SetName(string PokemonName); // Sets a pokemon name
  void SetType(string PokemonType); // Sets a pokemon Type
  void SetLevel(int PokemonLevel);  // Sets a pokemon level
  void SetMove(string PokemonMove); // Sets a pokemon move
  void SetHeight(double Height);    // sets height
  void SetWeight(double Weight);    // sets weight
  void SetGender(char gender);      // sets m or f
  void SetHP(int HP);               // sets a hp 0-100
  void SetAttack(int attack);       // sets attack
  string GetName();                 // Gets a Pokemon name
  string GetType();                 // Gets a Pokemon Type
  int GetLevel();                   // Gets a Pokemon level
  string GetMove();                 // Gets a Pokemon move
  double GetHeight();               // Gets a Pokemon height
  double GetWeight();               // Gets a Pokemon weight
  char GetGender();                 // Gets a Pokemon gender
  int GetHP();                      // Gets a Pokemon hp
  int GetAttack();  
  

private:
  string name;
  string type;
  int level;
  double weight;
  double height;
  char gender;
  string move;
  int hp;
  int attack;

};

void Pokemon::SetName(string PokemonName) { name = PokemonName; }

void Pokemon::SetType(string PokemonType) { type = PokemonType; }

void Pokemon::SetLevel(int PokemonLevel) { level = PokemonLevel; }
void Pokemon::SetMove(string PokemonMove) { move = PokemonMove; }
void Pokemon::SetHeight(double PokemonHeight) { height = PokemonHeight; }
void Pokemon::SetWeight(double PokemonWeight) { weight = PokemonWeight; }
void Pokemon::SetGender(char PokemonGender) { gender = PokemonGender; }
void Pokemon::SetHP(int PokemonHP) { hp = PokemonHP; }
void Pokemon::SetAttack(int PokemonAttack) { attack = PokemonAttack; }

string Pokemon::GetName() { return name; }
string Pokemon::GetType() { return type; }
int Pokemon::GetLevel() { return level; }
string Pokemon::GetMove() { return move; }
double Pokemon::GetHeight() { return height; }
double Pokemon::GetWeight() { return weight; }
char Pokemon::GetGender() { return gender; }
int Pokemon::GetHP() { return hp; }
int Pokemon::GetAttack() { return attack; }

int main() {
  string Pokemon_Name;
  string Pokemon_Type;
  int Pokemon_Level;
  string Pokemon_Move;
  double Pokemon_Height;
  double Pokemon_Weight;
  char Pokemon_Gender;
  int Pokemon_HP;
  int Pokemon_Attack;
  unsigned int i;

  vector<Pokemon> PokemonParty;
  Pokemon tempteam;
  tempteam.GetName();

  vector<string> PokemonNames(2);
  vector<string> PokemonType(2);
  vector<int> PokemonLevels(2);
  vector<string> PokemonMoves(2);
  vector<double> PokemonWeight(2);
  vector<double> PokemonHeight(2);
  vector<char> PokemonGender(2);
  vector<int> PokemonHP(2);
  vector<string> PokemonAttack(2);

  char Option;
  char continueprogram = 'Y';

  cout << " Welcome to the Pokemon Battle Party Program" << endl;
  cout << "(Press any letter and hit enter to continue)" << endl;

  cin >> continueprogram;

  do {
    cout << " \t Pokemon Menu:  ---- (Press Q to Quit) " << endl;
    cout << " --> Press t: (Required to start program) <--" << endl;
    cout << " \t Press a: Append " << endl;
    cout << " \t Press r: Remove " << endl;
    cout << " \t Press s: Sort " << endl;
    cout << " \t Press b: Reverse " << endl;
    cout << " \t Press m: Get Min " << endl;
    cout << " \t Press n: Get Max " << endl;
    cout << " \t Press g: Get Name " << endl;
    cout << " \t Press i: Insert " << endl;
    cout << " \t Press d: Display " << endl;
    cin >> Option;

    if (Option == 't') {

      for (i = 0; i < 2; ++i) {
        cout << "Pokemon " << i + 1 << "'s name:" << endl;
        ;
        cin >> Pokemon_Name;
        tempteam.SetName(Pokemon_Name);

        cout << "Pokemon " << i + 1 << "'s type: (water,fire,electric,rock)"
             << endl;

        cin >> Pokemon_Type;
        tempteam.SetType(Pokemon_Type);

        cout << "Pokemon " << i + 1 << "'s level: (0 - 100)" << endl;
        cin >> Pokemon_Level;
        tempteam.SetLevel(Pokemon_Level);

        cout << "Pokemon " << i + 1 << "'s move:(Enter 1 move name)" << endl;

        cin >> Pokemon_Move;
        tempteam.SetMove(Pokemon_Move);

        cout << "Pokemon " << i + 1 << "'s height in feet: " << endl;

        cin >> Pokemon_Height;
        tempteam.SetHeight(Pokemon_Height);

        cout << "Pokemon " << i + 1 << "'s weight in lbs:" << endl;

        cin >> Pokemon_Weight;
        tempteam.SetHeight(Pokemon_Weight);

        cout << "Pokemon " << i + 1 << "'s gender (m/f):" << endl;

        cin >> Pokemon_Gender;
        tempteam.SetGender(Pokemon_Gender);

        cout << "Pokemon " << i + 1 << "'s HP (0-100):" << endl;

        cin >> Pokemon_HP;
        tempteam.SetHP(Pokemon_HP);

        cout << "Pokemon " << i + 1 << "'s attack points (1-30):" << endl;

        cin >> Pokemon_Attack;
        tempteam.SetAttack(Pokemon_Attack);

        PokemonParty.push_back(tempteam);
      }
      // DUANE
    } else if (Option == 'a') {
      cout << "Addition to pokemon roster:" << endl;

      // 1) name
      cout << "Pokemon " << i + 1 << "'s name:" << endl;
      string Pname;
      cin >> Pname;
      tempteam.SetName(Pname);

      // 2) type
      cout << "Pokemon " << i + 1 << "'s type (water,fire,electric,rock)"
           << endl;
      string Ptype;
      cin >> Ptype;
      tempteam.SetType(Ptype);

      // 3 level
      cout << "Pokemon " << i + 1 << "'s level: (0 - 100)" << endl;
      int Plevel;
      cin >> Plevel;
      tempteam.SetLevel(Plevel);

      // 4) move
      cout << "Pokemon " << i + 1 << "'s move:(Enter 1 move name)" << endl;
      string Pmove;
      cin >> Pmove;
      tempteam.SetMove(Pmove);

      // 5) height
      cout << "Pokemon " << i + 1 << "'s height in feet: " << endl;
      double Pheight;
      cin >> Pheight;
      tempteam.SetHeight(Pheight);

      // 6) weight
      cout << "Pokemon " << i + 1 << "'s weight in lbs:" << endl;
      double Pweight;
      cin >> Pweight;
      tempteam.SetWeight(Pweight);

      // 7) gender
      cout << "Pokemon " << i + 1 << "'s gender (m/f):" << endl;
      char Pgender;
      cin >> Pgender;
      tempteam.SetGender(Pgender);

      // 8) hp
      cout << "Pokemon " << i + 1 << "'s HP (0-100):" << endl;
      int32_t Php;
      cin >> Php;
      tempteam.SetHP(Php);

      // 9) attack
      cout << "Pokemon " << i + 1 << "'s attack points (1-30):" << endl;
      int Pattack;
      cin >> Pattack;
      tempteam.SetAttack(Pattack);

      PokemonParty.push_back(tempteam);

      // DUANE2
    } else if (Option == 'r') {
      cout << "Enter a pokemon name to remove: " << endl;
      string Pname;
      cin >> Pname;
      for (i = 0; i < PokemonParty.size(); ++i) {
        if (PokemonParty.at(i).GetName() == Pname) {
          PokemonParty.erase(PokemonParty.begin() + i);
        }
      }

    } else if (Option == 's') {
      // for(i = 0; i < PokemonParty.size() ; ++i){
      // if (   )
      // cout <<  << " ";
      // }

    } else if (Option == 'b') {
      for(i = 0; i < PokemonParty.size(); i--){
      // if (Pokemon::begin(i); Pokemon::end());
      // cout << reverse_Pokemon << " ";
        cout << PokemonParty.at(i).GetName() << " ";
        
        }

    } else if (Option == 'm') {

    } else if (Option == 'n') {

    } else if (Option == 'g') {

      cout << "Enter a pokemon name to search: " << endl;
      string Search_name;
      cin >> Search_name;
      for (i = 0; i < PokemonParty.size(); ++i) {
        if (PokemonParty.at(i).GetName() == Search_name) {
          cout << PokemonParty.at(i).GetName()
               << " -- Level: " << PokemonParty.at(i).GetLevel()
               << " -- Type: " << PokemonParty.at(i).GetType() << endl
               << endl;
        }
      }

    } else if (Option == 'i') {

    } else if (Option == 'd') {
      cout << "Displaying main battle party information:" << endl;
      for (i = 0; i < PokemonParty.size(); ++i) {
        cout << "Pokemon " << i + 1
             << ", Name: " << PokemonParty.at(i).GetName()
             << " -- Level: " << PokemonParty.at(i).GetLevel()
             << " -- Type: " << PokemonParty.at(i).GetType() << endl
             << endl;
      }
    }

  } while (Option != 'Q');

  Pokemon key;

  key.SetName(Pokemon_Name);
  key.SetType(Pokemon_Type);
  key.SetLevel(Pokemon_Level);

  cout << "The Pokemon is " << key.GetName() << endl;
  cout << "Type: " << key.GetType() << endl;
  cout << "Level: " << key.GetLevel() << endl;

  return 0;
}
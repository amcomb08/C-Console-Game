#pragma once
#include <iostream>
#include <vector>
#include <string>
#include <GameFunctions.h>
using namespace std;

string name;
string classType;

char CreatePlayerClass() {
    char Character;
    cout << R"(

Create your player
-------------------

Choose your Class:
************************** 
* A: Fighter B: Barbarian*
* C: Cleric  D: Wizard   *
**************************
)";

    cin >> Character;
    Character = CheckCaseisUpper(Character);
    return Character;
}

string SetPlayerName(char x) {

    string yourName;
    cout << "Choose your name: \n";
    cin >> yourName;

    switch (x) {
    case 'A':
        cout << "Welcome " << yourName << ", The Brave Fighter!\n";
        FighterArt();
        break;
    case 'B':
        cout << "Welcome " << yourName << ", The Mighty Brabarian!\n";
        BarbarianArt();
        break;
    case 'C':
        cout << "Welcome " << yourName << ", The Great Cleric!";
        ClericArt();
        break;
    case 'D':
        cout << "Welcome " << yourName << ", The All-Powerful Greatwizard!";
        WizardArt();
        break;
    }

    return yourName;
}

class Player {
public:
    int health = 100;
    vector<string> items = { "Key", "Scissors", "Gasmask"};
    string Name;
    string PlayerClass;
    string HeavyAttack;
    string LightAttack;
    Player(string N, string P, string L, string H) {
        Name = N;
        PlayerClass = P;
        HeavyAttack = L;
        LightAttack = H;
    }
    Player() {

    }
};

class GreatWizard : public Player {
public:
    string HeavyAttack = "Staff Strike";
    string LightAttack = "Cast Magic";
};

class Cleric : public Player {
public:
    string HeavyAttack = "ClericHeavy";
    string LightAttack = "ClericLight";

};

class Barbarian : public Player {
public:
    string HeavyAttack = "Barbarian Heavy";
    string LightAttack = "Barbarian Light";
   
};

class Fighter : public Player {
public:
    string HeavyAttack = "Fighter Heavy";
    string LightAttack = "Fighter Light";
};

Player MakePlayer(string Name, string PlayerClass) {

    Player Player; 
    Fighter Fighter;
    Barbarian Barbarian;
    Cleric Cleric;
    GreatWizard GreatWizard;
    Player.Name = Name;
    Player.PlayerClass = PlayerClass;

    if (PlayerClass == "Wizard") {
        Player.LightAttack = GreatWizard.LightAttack;
        Player.HeavyAttack = GreatWizard.HeavyAttack;
    }
    else if (PlayerClass == "Fighter") {
        Player.LightAttack = Fighter.LightAttack;
        Player.HeavyAttack = Fighter.HeavyAttack;
    }
    else if (PlayerClass == "Cleric") {
        Player.LightAttack = Cleric.LightAttack;
        Player.HeavyAttack = Cleric.HeavyAttack;
    }
    else
    {
        Player.LightAttack = Barbarian.LightAttack;
        Player.HeavyAttack = Barbarian.HeavyAttack;
    }

    return Player;

}
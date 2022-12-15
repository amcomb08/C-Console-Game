#include <iostream>
#include <GameFunctions.h>
#include <CreateCharacter.h>
#include <Encounters.h>
#include <MainMenu.h>
#include <stdio.h>
#include <windows.h>
#include <vector>
using namespace std;

int main() {
    //*****************Initalize Variables******************
    bool SurviveFirstEncounter;
    bool SurviveSecondEncounter;
    char Character;
    string currentClass;
    string yourName;
    Player currentPlayer;
    char tunnelChoice;
    bool DidPlayerStartGame;
    DidPlayerStartGame = MainMenu();

    if (DidPlayerStartGame == true) {
        //Clear main menu screen
        ClearScreen();

        //Create player
        Character = CreatePlayerClass();
        currentClass = GetPlayerClass(Character);
        yourName = SetPlayerName(Character);
        currentPlayer = MakePlayer(yourName, currentClass);

        //small wait to display graphic
        cout << "Loading Game";
        Sleep(5000);
        ClearScreen();

        //*****************Begin Game******************

        //First player enounter, if they survive return true if not false
        SurviveFirstEncounter = FirstEncounter();

        //*****************Second player encounter******************
        if (SurviveFirstEncounter == true) {
            cout << "A: Tunnel 1= Fire Elemental \n B: Tunnel 2= Dragon  \n C: Tunnel 3= Giant Spider : \n";
            cin >> tunnelChoice;
            ClearScreen();
            tunnelChoice = CheckCaseisUpper(tunnelChoice);
            //Take players into encounter 2 and return true/false if they survive
            SurviveSecondEncounter = TunnelEncounter(tunnelChoice);
            if (SurviveSecondEncounter == true) {
                DisplayYouWon();
            }
            else { DisplayGameOver(); }
        }
        else {
            DisplayGameOver();
        }
    }
    else {
        cout << "See you next time traveler!";
    }

}
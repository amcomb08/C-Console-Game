#pragma once
#include <iostream>
#include <windows.h>
using namespace std;
//*********** Script that contains misc. functions used throughout game ***********

//Function checks if user input is uppercase, if not coverts to upper and returns
char CheckCaseisUpper(char x) {
    char LetterToReturn;

    if (islower(x)) {
        LetterToReturn = toupper(x);
    }
    else { LetterToReturn = x; }

    return LetterToReturn;
}

string GetPlayerClass(char x) {

    CheckCaseisUpper(x);
    string playerClass;

    if (x == 'A') {
        playerClass = "Fighter";
    }
    else if (x == 'B')
    {
        playerClass = "Barbarian";
    }
    else if (x == 'C') {
        playerClass = "Cleric";
    }
    else
    {
        playerClass = "Wizard";
    }

    return playerClass;

}

void PrintOutText(string text) {

    int x = 0;
    while (text[x] != '\0') {
        cout << text[x];
        Sleep(50);
        x++;
    }

}

//Special text that gives effect of clearing user screen
void ClearScreen() {
    cout << "\033[2J\033[1;1H";
}

//Function that displays game over when user dies
void DisplayGameOver() {
    cout << R"(  
   _____                         ____                 
  / ____|                       / __ \                
 | |  __  __ _ _ __ ___   ___  | |  | |_   _____ _ __ 
 | | |_ |/ _` | '_ ` _ \ / _ \ | |  | \ \ / / _ \ '__|
 | |__| | (_| | | | | | |  __/ | |__| |\ V /  __/ |   
  \_____|\__,_|_| |_| |_|\___|  \____/  \_/ \___|_|

)";
}

//Function that displays winning graphic
void DisplayYouWon() {
    cout << R"(
_________                                     __        .__          __  .__                     ._. 
\_   ___ \  ____   ____    ________________ _/  |_ __ __|  | _____ _/  |_|__| ____   ____   _____| | 
/    \  \/ /  _ \ /    \  / ___\_  __ \__  \\   __\  |  \  | \__  \\   __\  |/  _ \ /    \ /  ___/ | 
\     \___(  <_> )   |  \/ /_/  >  | \// __ \|  | |  |  /  |__/ __ \|  | |  (  <_> )   |  \\___ \ \| 
 \______  /\____/|___|  /\___  /|__|  (____  /__| |____/|____(____  /__| |__|\____/|___|  /____  >__ 
        \/            \//_____/            \/                     \/                    \/     \/ \/ 
)";
}

//credit https://www.asciiart.eu/weapons/axes
void FighterArt() {
    cout << R"(
       ___                                                                
      /___\                                                 
     (|0 0|)                                                    
   __/{\U/}\_ ___/vvv                                                
  / \  {~}   / _|_P|                                                 
  | /\  ~   /_/   ||                                                 
  |_| (____)      ||                       
  \_]/______\  /\_||_/\ 
     _\_||_/_ |] _||_ [|            
    (_,_||_,_) \/ [] \/
)";
}

//Credit https://www.asciiart.eu/weapons/swords Joan Stark
void BarbarianArt() {
    cout << R"(
                           .-.
                          {{#}}
          {}               8@8
        .::::.             888
    @\\/W\/\/W\//@         8@8
     \\/^\/\/^\//     _    )8(    _
      \_O_{}_O_/     (@)__/8@8\__(@)
 ____________________ `~"-=):(=-"~`
|<><><>  |  |  <><><>|     |.|
|<>      |  |      <>|     |S|
|<>      |  |      <>|     |'|
|<>   .--------.   <>|     |.|
|     |   ()   |     |     |P|
|_____| (O\/O) |_____|     |'|
|     \   /\   /     |     |.|
|------\  \/  /------|     |U|
|       '.__.'       |     |'|
|        |  |        |     |.|
:        |  |        :     |N|
 \       |  |       /      |'|
  \<>    |  |    <>/       |.|
   \<>   |  |   <>/        |K|
    `\<> |  | <>/'         |'|
      `-.|__|.-`           \ /
                            ^
)";
}

//Credit https://www.asciiart.eu/religion/preachers Joan Stark
void ClericArt() {
    cout << R"(
            ,-----.
           #,-. ,-.#
          () a   e ()
          (   (_)   )
          #\_  -  _/#
        ,'   `"""`    `.
      ,'      \X/      `.
     /         X     ____\
    /          v   ,`  v  `,
   /    /         ( <==+==> )
   `-._/|__________\   ^   /
  (\\)  |______@____\  ^  /
    \\  |     ( )    \ ^ /
     )  |             \^/
    (   |             |v
   <(^)>|             |
     v  |             |
        |             |
        |_.--.__ .--._|
          `==='  `==='
)";
}

//credit https://www.asciiart.eu/people/occupations/wizards
void WizardArt() {
    cout << R"(
                  .

                   .
         /^\     .
    /\   "V"
   /__\   I      O  o
  //..\\  I     .
  \].`[/  I
  /l\/j\  (]    .  O
 /. ~~ ,\/I          .
 \\L__j^\/I       o
  \/--v}  I     o   .
  |    |  I   _________
  |    |  I c(`       ')o
  |    l  I   \.     ,/
_/     \_!  _//^---^\\_ 
)";
}
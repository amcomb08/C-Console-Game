#pragma once
#include <iostream>
#include <GameFunctions.h>
using namespace std;

//Displays main menu and awaits for user to start or exit game
bool MainMenu() {
	bool DidStart;
	char UserChoice;

	cout << R"(
 __      __       .__                                  __                                                             ._.
/  \    /  \ ____ |  |   ____  ____   _____   ____   _/  |_  ____     ____  __ _________     _________    _____   ____| |
\   \/\/   // __ \|  | _/ ___\/  _ \ /     \_/ __ \  \   __\/  _ \   /  _ \|  |  \_  __ \   / ___\__  \  /     \_/ __ \ |
 \        /\  ___/|  |_\  \__(  <_> )  Y Y  \  ___/   |  | (  <_> ) (  <_> )  |  /|  | \/  / /_/  > __ \|  Y Y  \  ___/\|
  \__/\  /  \___  >____/\___  >____/|__|_|  /\___  >  |__|  \____/   \____/|____/ |__|     \___  (____  /__|_|  /\___  >_
       \/       \/          \/            \/     \/                                       /_____/     \/      \/     \/\/

)";

	cout << R"(

	Press A to start			Press B to exit

)";

	cin >> UserChoice;
	UserChoice = CheckCaseisUpper(UserChoice);

	if (UserChoice == 'A') {
		DidStart = true;
		return DidStart;
	}
	else {
		DidStart = false;
		return DidStart;
	}

}

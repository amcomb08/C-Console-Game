#pragma once
#include <iostream>
#include <GameFunctions.h>
using namespace std;

bool FirstEncounter() {
    char choice1;
    int x = 0;
    string ContinueButton;
    string secondLine = "A: Key or  B: Window: \n\n";
    string choiceOneText = "\n\n\n You walk towards the window and pull the grate off. As you climb out you realize that you are going to have to climb along a ledge. As you shimmy along this edge you begin to feel the building shake. You start to lose your grip and end up falling.";
    string choiceTwoText = "\n\n\nAfter grabbing the key off of the wall you open the door and start to walk down a corridor. The corridor then leads to a spiral staircase. Carefully you begin to walk down it, after what seems like ages of walking you are finally at the bottom. And come across 3 tunnels, each with a marking above it. There is a slight smell of smoking coming from tunnel 1 and above it scratched into the stone is text that says “ignis”. Tunnel 2 is barricaded and covered in danger signs. Above it there is the word “draco”. Lastly your eyes wander to tunnel 3 which is covered in spider webs. There is an eerie clicking echoing from the tunnel. The sign reads Aranea. Which tunnel will you choose?  \n\n";
    cout << R"(
     ###################################################################################################
     #               You wake up groggily in a dark and damp jail cell,                                #
     #       your head throbbing from the blow that must have knocked you unconscious.                 #
     #  As you slowly regain your senses, you look around and realize that you are in a castle dungeon.# 
     #           you have no idea how you ended up here, or what fate awaits you.                      #
     #   As you explore your surroundings, you quickly realize that this is no ordinary castle dungeon.# 
     #            Strange and otherworldly creatures lurk in the shadows,                              #
     #                and you must use all of your wits and cunning to survive.                        #
     # You will need to scavenge for weapons and supplies, and use them wisely in order to             #
     #             fight your way through the castle and escape to freedom.                            #
     #   But be warned, the castle is filled with traps and dangers at every turn,                     #
     #                  and not everyone you encounter will be an ally.                                #
     #            Can you escape the castle and uncover the mysteries within?                          #
     #               The fate of the game depends on the choices you make.                             #
     ###################################################################################################)";
    cout << "\n\n\n\n";
    cout << "You also discover a map of the castle, but it is tornand incomplete, offering only a glimpse of the castle's layout";
    cout << "\n\n\n\n Enter A to continue";
    cin >> ContinueButton;
    ClearScreen();
    PrintOutText(secondLine);
    cin >> choice1;
    choice1 = CheckCaseisUpper(choice1);
    //*****************First player choice******************
    if (choice1 == 'A') {
        PrintOutText(choiceOneText);
        return false;
    }
    else if (choice1 == 'B') {
        PrintOutText(choiceTwoText);
        return true;
    }

}

bool TunnelEncounter(char tunnelChoice) {
    char napOrKeepgoing;
    char kickRockOrLeaveroom;
    char useWtrgunOrNot;
    char pickUpTheCoinsOrDont;
    char fightforYourLifeOrSurrender;
    char goToTunnelCOrNot;

    //*****************Fire Element path******************
    if (tunnelChoice == 'A') {
        string ChoicesText = "A: Take a nap \n B: Keep Going  \n";
        cout << R"(
            #############################################################################################
            #                                                                                           #
            #             You walk towards the tunnel and the smell of smoke gets stronger.             #
            #  No choice but to enter now.As you wander through the tunnel you begin to get exhausted.  #
            #                  You wonder if you should take a nap or keep going.                       #
            #                                                                                           #
            #############################################################################################")";                  
        cout << "\n\n\n\n";
        PrintOutText(ChoicesText);
        cin >> napOrKeepgoing;
        napOrKeepgoing = CheckCaseisUpper(napOrKeepgoing);
        //First choice in path if user picks B GAME OVER
        if (napOrKeepgoing == 'A') {
            cout << R"(
                ####################################################################################
                #                                                                                  #
                #   As you walk down the tunnel, the path begins to widen into a large room        #
                #   with a rock at the center.As you begin to approach it you see a door at the    #
                #   other end of the room. Should you...                                           #
                #                                                                                  #
                #                                                                                  #
                ####################################################################################)";
            cout << "A: Kick the rock\nB: Walk out of the room";
            cin >> kickRockOrLeaveroom;
            kickRockOrLeaveroom = CheckCaseisUpper(kickRockOrLeaveroom);
            //Second choice in path if user picks A GAME OVER
            if (kickRockOrLeaveroom == 'A') {
                cout << R"(
                    ####################################################################################
                    #                                                                                  #
                    #            You walk up to the rock and kick it with all your might.              #
                    #    Immediately your leg snaps.Unable to walk, you end up starving in the tunnel. #
                    #                                                                                  #
                    ####################################################################################)";
                    return false;
            }
            else if (kickRockOrLeaveroom == 'B') {
                cout << R"(
                    ###################################################################################
                    #                                                                                 #
                    #                 After careful consideration you decide its probably             #
                    #                         for the best to leave the rock alone.                   #
                    #                                  You leave the room.                            #
                    #                                                                                 #
                    ###################################################################################)";
            }
            cout << R"(
                ###################################################################################
                #                                                                                 #
                #      The longer you spend walking in the tunnel the thicker the smoke gets.     #
                #  You begin to cough and your eyes water as the air is practically unbreathable. #
                # It feels as if it is 150 degrees and light is emanating through the smoke ahead.#                                                                                                                                                                                                                                                                                                                                                                                                                                                                  #\n
                #               You make a run for it hoping to get out of the smoke.             #
                ###################################################################################)";
                cout << R"(
                #####################################################################################
                #                                                                                   #
                # The smoke begins to clear and you see a fire spirit standing in an empty coliseum.#
                #  You crouch down and start to walk clockwise around it hoping it doesn't see you. #
                #               As you walk you forget that you are wearing clogs -                 #                                                                                                                                                                                                                                                                                                                                                                                                                                                                  #\n
                #             and a ball of fire flies at you inches above your head.               #
                #                   As the fire spirit prepares another ball -                      #
                #                you remember the water gun the dwarf gave to you.                  #
                #####################################################################################)";

                cout << "\n\n A: Use water gun\n B: Don't use the water gun.\n";
            cin >> useWtrgunOrNot;
            useWtrgunOrNot = CheckCaseisUpper(useWtrgunOrNot);
            //Third choice in path if user picks B Game OVER; If A WIN
            if (useWtrgunOrNot == 'A') {
                cout << R"(\n\n\n
                    ######################################################################################
                    #                                                                                    #
                    #                                                                                    #
                    #               As the fire spirit prepares another ball you remember                #
                    # the water gun the dwarf gave to you.As the giant begins to throw it you pull out   #
                    #                           the water gun and start spraying.                        #
                    #                        The spirit yells in agony and perishes.                     #
                    #                                                                                    #
                    ######################################################################################)";

                    cout << R"()\n\n\n
                    #########################
                    #                       #
                    #  YOU WON THE DUNGEON  #
                    #                       #
                    #########################)";
                    return true;
            }
            else if (useWtrgunOrNot == 'B') {
                cout << R"(
                    ######################################################################################
                    #                                                                                    #
                    #                                                                                    #
                    # The smoke begins to clear and you see a fire spirit standing in an empty coliseum. #
                    #  You crouch down and start to walk clockwise around it hoping it doesn't see you.  #
                    #      As you walk you forget that you are wearing clogs and a ball of fire flies -  #
                    #                            at you inches above your head.                          #
                    #      As the fire spirit prepares another ball you grab your sword and run at it.   #
                    #         The spirit launches the next ball and you swing your sword at it.          #
                    #                   It instantly melts your sword and incinerates you.               #
                    #                                                                                    #
                    ######################################################################################)";
                    cout << R"(
                    #########################
                    #                       #
                    #      GAME OVER!!!     #
                    #                       #
                    #########################)";

                    return false;
            }
        }
        else if (napOrKeepgoing == 'B') {
            cout << "You died";
            return false;
        }
    }
    //*****************Dragon path******************
    else if (tunnelChoice == 'B') {
    string choicesText = "A: Pick up the coins: B: Don't pick up the coins:";
        cout << R"(
            ####################################################################################
            #                                                                                  #
            #                                                                                  #
            #    You look around the room to try and find anything to pry the boards off.      #
            #            With no luck finding anything you walk up to the barricade            #
            # to find out it is rotten.With one pull the planks crumble revealing an entrance. #
            #        After shrugging your shoulders you start to walk down the dark cave.      #
            #                 As you walk you notice gold coins on the ground                  #
            #                   and you wonder if you should pick them up.                     #
            #                                                                                  #
            #                                                                                  #
            ####################################################################################)";
        cout << "\n\n\n\n";
        PrintOutText(choicesText);
        cin >> pickUpTheCoinsOrDont;
        pickUpTheCoinsOrDont = CheckCaseisUpper(pickUpTheCoinsOrDont);
        //First Choice in path
        if (pickUpTheCoinsOrDont == 'A') {
            cout << R"(\n\n\n
                ####################################################################################
               #                                                                                  #
               #       Guess I�ill save these for later you think as you pocket the coins.        #
               #               You continue to walk, picking up coins as you go                   #
               # and you begin to notice the amount is getting larger and you can faintly -       #
               #                          hear footsteps ahead.                                   #
               #                      �Hello ? � you shout down the tunnel.                       #
               #               All that you hear now is the echo of your own voice.               #
               #              Then a few minutes later the footsteps have resumed,                #
               #   but now there are multiple and they are behind you.You turn around,            #
               #                  weapon drawn but it is already too late.                        #
               #                 A group of heavily armed goblins swarm you                       #
               #         yelling "you took our gold!" as they drag you into the darkness.         #
               #                                                                                  #
               #                                   You died.                                      #
               #                                                                                  #
               #                                                                                  #
               ####################################################################################)";

                cout << R"(
                #########################
                #                       #
                #      GAME OVER!!!     #
                #                       #
                #########################)";
                return false;
        }
        else if (pickUpTheCoinsOrDont == 'B') {
            cout <<R"(
                ####################################################################################
                #                                                                                  #
                #            You walk up to the rock and kick it with all your might.              #
                #   Immediately your leg snaps.Unable to walk, you end up starving in the tunnel.  #
                #                                                                                  #
                ####################################################################################)";
                cout << R"(
                ####################################################################################
                #                                                                                  #
                #  After careful consideration you think that those coins might belong to someone. #
                #  And what would you do with them anyway.Ignoring them you walk down the tunnel - #
                #                 hoping to find a way out of this nightmare.                      #
                #                                                                                  #
                ####################################################################################)";
                cout << R"(
                ####################################################################################
                #                                                                                  #
                #                                                                                  #
                # The gold seen before starts to grow and the tunnel starts to smell of fresh air. #
                #  You can even hear a stream up ahead.Filled with optimism that you might be      #
                #  able to get out, you walk faster and faster until you can see the giant cavern  #
                #  in front of you.There is a giant pile of gold in the middle with a soft -       #
                #  rumbling coming from it.As you enter the cavern the tunnel collapses behind you.#
                #          Then the gold begins to move as a dragon rises out of the pile.         #
                #      The dragon turns its attention on you, you now have to make a choice.       #
                #                   Should you fight for your life or surrender ? `                #
                #                                                                                  #
                #                                                                                  #
                ####################################################################################)";
                cout << "A: Fight\nB: Surrender:\n\n";
            cin >> fightforYourLifeOrSurrender;
            fightforYourLifeOrSurrender = CheckCaseisUpper(fightforYourLifeOrSurrender);
            //Second Choice in path
            if (fightforYourLifeOrSurrender == 'A') {
                cout << R"(
                    ####################################################################################
                    #                                                                                  #
                    #        You draw your weapon and charge at it screaming the entire distance.      #
                    #             The dragon doesn�t move until you are within 10 feet of it.          #
                    #           Then it raises its foot and squishes you before you can hit it.        #
                    #                                    You died.                                     #
                    #                                                                                  #
                    ####################################################################################)";
                    cout << R"(\n\n\n
                    #########################
                    #                       #
                    #      GAME OVER!!!     #
                    #                       #
                    #########################)";
                    return false;
            }
            else if (fightforYourLifeOrSurrender == 'B') {
                cout << R"(\n\n\n
                    ######################################################################################\n
                    #                                                                                    #\n
                    #           Common sense takes over and you drop your weapon to the ground.          #\n
                    #              There is no way you would ever stand a chance against that.           #\n
                    # Upon seeing the act of surrendering your weapon the dragon walks across the cavern #\n
                    #                                 revealing an exit.                                 #\n
                    #                                                                                    #\n
                    #                                                                                    #\n
                    ######################################################################################\n)";

                    cout << R"(\n\n\n \n\n\n 
                    ########################################
                    #                                      #
                    #         WON THIS DUNGEON!!!          #
                    #                                      #
                    ########################################\n\n\n)";
                    return true;

            }
        }
    }
    //*****************Giant Spider Path******************
    else if (tunnelChoice == 'C') {
        cout << R"(
            ############################################################################################
            #                                                                                          #
            #   Walking toward this tunnel you think to yourself �I must be crazy�.                    #
            #   Poking at the webs with your weapon they remain stuck over the entrance.               #
            #   You begin to swing wildly and walk down the path.                                      #
            #   The webs coat you and you have to stop constantly to brush them off.                   #
            #   You have a constant feeling that insects are crawling over you and the                 #
            #   clicking is only getting louder.                                                       #
            #   You begin to realize that the walls of the tunnel are moving ever so slowly,           #
            #   millions of spiders crawl around you on all sides.                                     #
            #   Unable to bear the thought you start to run down the tunnel,                           #
            #   fear taking over you forget about the clicking and the spiders around you -            #
            #   and not paying attention to where you are going.                                       #
            #   The tunnel is so dark and you are running so fast you couldn�t see the cliff ahead.    #
            #   You run off the edge and fall into what feels like a hammock.                          #
            #   Suspending you over what might be certain death.                                       #
            #   The clicking is unbearable and the hammock - like structure wont let you move,         #
            #   it sticks to your clothes.You realize that this isnt a net or a hammock at all,        #
            #   you are ensnared in a giant spider web and you falling on it has woken up the spider.  #
            #   The web begins to vibrate as it makes its way over,                                    #
            #   too dark to see and stuck to the web all you can do is sit in horror.                  #
            #   This will surely be the end. Death.                                                    #
            #   Immediately your leg snaps.Unable to walk, you end up starving in the tunnel.          #
            #                                                                                          #
            ############################################################################################)";

            return false;
    }

}
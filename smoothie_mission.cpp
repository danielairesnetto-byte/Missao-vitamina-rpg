#include <iostream>
#include <string>
using namespace std;

int main(void) {
   // Variaveis
    int menu_decision, second_decision, second_decision_case_2, second_decision_case_3, second_decision_case_2_case_0, second_decision_case_2_case_0_case_0, garbage, second_decision_case_2_case_0_case_0_if_1, second_decision_case_2_case_0_case_0_case_0, second_decision_case_0, second_decision_case_1, qtd_choose_times = 0;
    string first_decision;
    string second_decision_case_2_case_1, second_decision_case_2_case_1_if_1;
    // Definir valores iniciais
    string open = "Completed"; string blocked = "Pending";
    string secret = "|*| Secret conquest |*|  ";
    string complete_all_the_game = "";
    string status_achiviement_fear = blocked;
    string status_achiviement_sad = blocked;
    string status_achiviement_boring = blocked;
    string status_achiviement_tetanus = blocked;
    string status_achiviement_fire = blocked;
    string status_achiviement_hospital = blocked;
    string status_achiviement_good = blocked;
    string status_achiviement_thunderstruck = blocked;
    string status_achiviement_bad_drink = blocked;
    string status_achiviement_cheese = blocked;
    string status_secret_achiviement_cheese = secret;
    string status_secret_achiviement_thunderstruck = secret;
    string status_secret_achiviement_bad_drink = secret;
    // Entrada do programa
    cout << "Daniel Aires Netto presents\n";
    cout << "MV --- Vitamin Mission (Short RPG)\n";
    for ( ; ; ) {
        // Menu
        cout << "\nPress 0 to play\n";
        cout << "Press 1 to check achievements\n";
        cout << "Press 2 to reset the game" << "     <-- Progress is not lost\n";
        cout << "Press 3 to close the program" << "      <-- Progress will be lost\n";

        cin >> menu_decision;
        
        // Lógica de escolha do menu
        switch (menu_decision) {
        case 0:
            // First decision making
            cout << "You suddenly feel an overwhelming urge to drink a smoothie\n";
            cout << "Even knowing the dangers, do you wish to proceed [Y/N]?\n";
            cin >> first_decision;
            cout << endl;
            if (first_decision == "S" || first_decision == "s" || first_decision == "Y" || first_decision == "y") {
                // Second decision making
                cout << "You decided to proceed...\n"; 
                cout << "You went to the kitchen, grabbed the blender, and noticed something\n";
                cout << "Its voltage was 220V, and inside your house there was only 110V...\n";
                cout << "These are your ideas, which one will you choose?\n";
                cout << "Press 0 to grab the 110V --> 220V transformer in the garage\n";
                cout << "Press 1 to look for a 110V outlet\n";
                cout << "Press 2 to buy a new blender\n";
                cout << "Press 3 to use lightning energy\n";
                /*Essa é a minha melhor vigarice, quem diria que uma palavra faltando no digite 3 causaria tanto impacto */
                cin >> second_decision;
                switch (second_decision) {
                case 0:
                    cout << "You go to your garage to grab your transformer,\n";
                    cout << "however, you come across some spider webs on top of it and an old cover\n";
                    cout << "And now, the choice is yours!\n";
                    cout << "Press 0 to remove the cover with a broom\n";
                    cout << "Press 1 to remove the cover with your hand\n";
                    cout << "Press 2 to call your mom asking for help\n";
                    cout << "Press 3 to use a flamethrower\n";
                    cin >> second_decision_case_0;
                    switch (second_decision_case_0) {
                    case 0:
                        cout << "You feel like you are being watched, you grab the broom from a distance\n";
                        cout << "and notice the monstrous spider hidden next to your transformer\n";
                        cout << "You manage to kick it out of the house and safely grab the transformer\n";
                        cout << "Finally, let's head to the ultimate goal: the smoothie\n";
                        cout << "You grab the ingredients, blend everything perfectly\n";
                        cout << "Pour your drink into the glass, satisfy your craving, and end the story\n";
                        cout << "Congratulations, you completed your goal!, making a smoothie.\n";
                        cout << "I know it was simple, but for those who think the game ends here, you are mistaken...\n";
                        cout << "Goal completed, smoothie in the right dose!\n";
                        if (status_achiviement_good != open) {
                            cout << "Achievement unlocked:\n" << "|*| Good ending |*|\n";
                            status_achiviement_good = open;
                        }
                    break;
                    case 1:
                        cout << "You go bravely and pull off the cover, showing who's boss\n";
                        cout << "Until a giant spider appears underneath it!\n";
                        cout << "(which is not radioactive, sorry Peter Parker fans but I don't want a lawsuit from Marvel).\n";
                        cout << "And it is a Brazilian wandering spider aimed right at you!\n";
                        cout << "The spider's initiative is higher than yours, you didn't even have time and it bites you!\n";
                        cout << "And now, what to do?\n";
                        cout << "Press 0 to call an ambulance\n";
                        cout << "Press 1 to walk to the hospital (we have no savings, remember?)\n";
                        cin >> second_decision_case_1;
                        if (second_decision_case_1 == 0) {
                            cout << "You call the ambulance and pass out, when you wake up you are eating soup\nIn the last room of a hospital that surpasses 20 buildings together.\n";
                            cout << "Well, it's not a smoothie but at least you are alive\n";
                            cout << "Lucky to get a spot, huh?\n";
                            if (status_achiviement_hospital != open) {
                                cout << "Achievement unlocked:\n" << "|*| Sky-Spider |*|\n";
                                status_achiviement_hospital = open;
                            }
                        } else if (second_decision_case_1 == 1) {
                            cout << "Economy first, you yelled while limping\n";
                            cout << "And almost fainting in the middle of the street in the dead of night, however\n";
                            cout << "your death was painful and quick, the townspeople found your corpse\n";
                            cout << "on the street, meaning, you DIED...\n";
                            cout << "Do you want to try again?\n";
                        } else {
                            cout << "Incomprehensible response, shall we try again?\n";
                            cout << "Want to break my code?, GIVE UP!\n";
                            cout << "Play properly, please ):\n";
                        }
                    break;
                    case 2:
                        cout << "Do you really think I'm going to follow up on this here?\n";
                        cout << "Your mom has much more to do, dude, go get a job!\n";
                        cout << "And no, there is no achievement here, trophy hunters can rest easy\n";
                        cout << "Do you want to try again?\n";
                    break;
                    case 3:
                        cout << "You went with a flamethrower on everything towards your covered transformer,\nthe result was more than predictable, HOUSE ON FIRE\n";
                        cout << "You try to turn on faucets, throw water, but nothing helps\nThe firefighters arrive and you are already on the news\n";
                        cout << "Well, at least now you are famous\n";
                        if (status_achiviement_fire != open) {
                         cout << "Achievement unlocked:\n" << "|*| Street Celebrity |*|\n";
                         status_achiviement_fire = open;
                        }
                    break;
                    }
                    break;
                case 1:
                    cout << "You walked around your house and didn't find your outlet, how sad, you lost the game so early...\n";
                    cout << "This is 0.1% of the game, there is SO much more to explore!\n";
                    cout << "Do you want to try again?\n";
                    break;
                case 2:
                    cout << "You checked your balance\n";
                    cout << "You noticed your bank account was negative\n";
                    cout << "And now, what's the best way out?\n";
                    cout << "Press 0 to sell the old blender and refund it for a new one\n";
                    cout << "Press 1 to use the 220V blender on 110V\n";
                    cin >> second_decision_case_2;
                    switch (second_decision_case_2) {
                    case 0:
                        cout << "You realize that the best choice is to exchange it for another one\n";
                        cout << "You put yours up for sale as used for half the price and go to buy a new one\n";
                        cout << "Soon you realized it was night, and the shops were closed\n";
                        cout << "And now, what's the best way out?\n";
                        cout << "Press 0 to buy online\n";
                        cout << "Press 1 to wait for the next day\n";
                        cin >> second_decision_case_2_case_0; 
                    switch (second_decision_case_2_case_0) {
                    case 0:
                        cout << "Buying online seems like a great choice";
                        cout << "(remember the word 'seems')\n";
                        cout << "And now, let's go, where will you buy your product?\n";
                        cout << "Press 0 to buy on a marketplace website\n";
                        cout << "Press 1 to buy one at Joe's Junkyard shack\n";
                        cin >> garbage;
                        cout << "Did you think I would let you choose that one?\n";
                        cout << "You are out of money, forgot? let's go to Joe's shack!\n";
                        cout << "You grabbed your car, drove, and arrived right in front of Joe\n";
                        cout << "Coming from an Italian family, they called him Joe Ruela\n" ;
                        cout << "You said:\n";
                        cout << "Master of washers, how do I get rid of this undeniable urge to drink a smoothie?\n";
                        cout << "Joe spits out a toothpick, scratches his head with a wrench, and says:\n";
                        cout << "Smoothie? In my day, that was called a lack of grease in the radiator!\n";
                        cout << "If you want to get rid of this urge, there's only one way...\n";
                        cout << "But only if you help me with a project of mine...\n";
                        cout << "Press 0 to accept\n";
                        cout << "Press 1 to question\n";
                        cout << "Press 2 to refuse the proposal before it's even said\n";
                        cout << "Press 3 to prioritize the smoothie\n";
                        cin >> second_decision_case_2_case_0_case_0;
                        switch (second_decision_case_2_case_0_case_0) {
                        case 0:
                            cout << "You said\n";
                            cout << "DEAL!, what do I have to do for you sir?";
                            cout << "Joe Ruela explodes with happiness knowing he was finally going to achieve his dream and said:\n";
                            cout << "That's the guy I know, let's go, you are going to help me with my rocket, my dream is to go to the Moon!\n";
                            cout << "And now, what is the wisest response? Choose:\n";
                            cout << "Press 0 to say \"LET'S GO JOE RUELA\"\n";
                            cout << "Press 1 to say \"What nonsense, who is going to drive this?\"\n";
                            cin >> second_decision_case_2_case_0_case_0_case_0;
                            switch (second_decision_case_2_case_0_case_0_case_0) {
                                case 0:
                                cout << "Joe Ruela flashes a glowing smile and said:\n";
                                cout << "LET'S GOOOOO TO THE MOON!\n";
                                cout << "You worked hard for several days, sweating buckets\n and using scrap metal, you did a job that even a NASA agent would envy\n, everything was ready, until Joe Ruela said:\n";
                                    cout << "I can't even believe this dream is coming true,\n thank you so much kid, you're like a son to me,\n now get into position!\n";
                                    cout << "You pour in the last drops of rocket fuel discarded straight from NASA\n, now is the time, Joe Ruela takes his place in the cockpit,\n he presses a button on his old cassette tape player which starts playing:\n";
                                    cout << "We're leavin' together\nBut still it's farewell\nAnd maybe we'll come back\nTo Earth, who can tell?\nI guess there is no one to blame\nWe're leaving ground (leaving ground)\nWill things ever be the same again?\nIt's the final countdown\n";
                                    cout << "3\n2\n1\nLIFT OFF!\n";
                                    cout << "The government didn't even have time to identify the rocket, you broke through the stratosphere\n";
                                    cout << "You finally reach the Moon\n, land on it, and Joe Ruela immediately starts eating 1/100 of the Moon and he said:\n";
                                    cout << "Finally, finally I can taste the best cheese in the world, thank you young man\n";
                                    cout << "Well, you lost your urge to drink a smoothie,\n but you gained something much more important than that.\n";
                                    if (status_achiviement_cheese != open) {
                                        cout << "SECRET Achievement unlocked:\n" << "|*| The Final Countdown |*|\n";
                                        status_secret_achiviement_cheese = "|*| The Final Countdown |*|";
                                        status_achiviement_cheese = open;
                                    }
                                break;
                                case 1:
                                    cout << "Joe Ruela explodes with anger and screams:\n";
                                    cout << "NONSENSE IS YOUR SMOOTHIE!; GET OUT OF HERE, SOUR MILK!\n";
                                    cout << "You humiliated a man's dream and that's just not done, now you have no smoothie\n";
                                    cout << "Shall we try again?\n";
                                    break;
                                default:
                                cout << "Incomprehensible response, shall we try again?\n";
                                cout << "Want to break my code?, GIVE UP!\n";
                                cout << "Play properly, please ):\n";
                                break;
                            }
                        break;
                        case 1:
                            cout << "What project is this? Depending on what it is, I won't do it\n";
                            cout << "Joe Ruela turns red with anger and explodes saying:\n";
                            cout << "WHAT DO YOU MEAN DEPENDING?, GET OUT OF HERE YOU FREELOADER, NEVER SPEAK TO ME AGAIN, YOU TRAILED THE CODE OF CONDUCT!, RULE NUMBER 493, NEVER QUESTION JOE, OUT!\n";
                             cout << "You betrayed the junkyard code of conduct and as a consequence, you are now without a smoothie\n";
                            cout << "Shall we try again?\n";
                        break;
                        case 2:
                            cout << "Just as it was written, you refused the\n";
                            cout << "proposal and as a consequence, you are now without a smoothie\n";
                            cout << "Shall we try again?\n";
                        break;
                        case 3:
                            cout << "You said:\n";
                            cout << "Yeah, but my smoothie comes first!\n";
                            cout << "Joe smiles and says\n";
                            cout << "Fine... you won't regret it!\n";
                            cout << "You'll have to blend a cast-iron smoothie with a loose screw!\n";
                            cout << "He hands you a blender jar that looks like a Beetle engine.\n";
                            cout << "Press 0 to drink and prove your capability to Joe (or to tetanus)\n";
                            cout << "Press 1 to refuse and take a washer to the forehead\n";
                            cin >> second_decision_case_2_case_0_case_0_if_1;
                            if (second_decision_case_2_case_0_case_0_if_1 == 0) {
                                cout << "You did the honors and put your mouth on that old piece of junk\n";
                                cout << "There you go, you finally satisfied your urge, didn't even talk to Joe Ruela anymore, and went home\n";
                                cout << "Days went by and they were burying your coffin\n";
                                cout << "You were dead, satisfied?\n";
                                cout << "Well, at least you drank the smoothie\n";
                                if (status_achiviement_tetanus != open) {
                                    cout << "Achievement unlocked:\n" << "|*| Teta-Joe-nus |*|\n";
                                    status_achiviement_tetanus = open;
                                }
                            } else if (second_decision_case_2_case_0_case_0_if_1 == 1) {
                                cout << "Just as it was written, you refused and\n";
                                cout << "took a washer to the forehead, now you are without a smoothie\n";
                                cout << "Shall we try again?\n";
                            } else {
                                cout << "Incomprehensible response, shall we try again?\n";
                                cout << "Want to break my code?, GIVE UP!\n";
                                cout << "Play properly, please ):\n";
                            }
                        break;
                        default:
                        cout << "Incomprehensible response, shall we try again?\n";
                        cout << "Want to break my code?, GIVE UP!\n";
                        cout << "Play properly, please ):\n";
                        break;
                        }
                    break;
                    case 1:
                        cout << "You went to your room and slept\n";
                        cout << "You woke up starving, had your breakfast, and got ready because\n";
                        cout << "After waiting so long for the day to change (from July 20th to August 2nd)\n";
                        cout << "You completely lost the urge to drink a smoothie\n";
                        cout << "Well, at least you saved your ingredients\n";
                        if (status_achiviement_boring != open) {
                            cout << "Achievement unlocked:\n" << "|*| Boring to the Bone |*|\n";
                            status_achiviement_boring = open;
                        }
                        break;
                    default:
                    cout << "Incomprehensible response, shall we try again?\n";
                    cout << "Want to break my code?, GIVE UP!\n";
                    cout << "Play properly, please ):\n";
                    break;
                    }
                    break;
                    case 1:
                        cout << "Enough stalling!, let's prepare the smoothie!\n";
                        cout << "All the fruits were cut and placed with milk\n";
                        cout << "inside the blender, now just blend it\n";
                        cout << "Press the button [Y/N]?\n";
                        cin >> second_decision_case_2_case_1;
                        if (second_decision_case_2_case_1 == "S" || second_decision_case_2_case_1 == "s" || second_decision_case_2_case_1 == "Y" || second_decision_case_2_case_1 == "y") {
                            cout << "The blender button was pressed!\n";
                            cout << "IT WON'T TURN ON!, how about spraying some penetrating oil on the blade?\n";
                            cout << "IT WORKED!, BLENDING EVERYTHING FINALLY, now let's drink\n";
                            cout << "Do you wish to drink? [Y/N]\n";
                            cin >> second_decision_case_2_case_1_if_1;
                            if (second_decision_case_2_case_1_if_1 == "S" || second_decision_case_2_case_1_if_1 == "N" || second_decision_case_2_case_1_if_1 == "s" || second_decision_case_2_case_1_if_1 == "n" || second_decision_case_2_case_1_if_1 == "Y" || second_decision_case_2_case_1_if_1 == "y") {
                                    cout << "Want to see the beginning of the story again?\n";
                                    cout << "There's no way to refuse your ultimate goal, or is there?\n";
                                    cout << "Well, either way, you drink the smoothie\n";
                                    cout << "And that's it, you completed your...\n";
                                    cout << "You got a stomach ache, and rush to the bathroom\n";
                                    cout << "They open your coffin and open your life history\n";
                                    cout << "They type the cause of your death\n";
                                    cout << "Dysentery by WD-40, ARE YOU KIDDING ME?\n";
                                    cout << "THIS IS NOT A SIMPLE MULTIPLICATION; HERE THE ORDER\n";
                                    cout << "OF THE FACTORS DOES ALTER THE PRODUCT!\n";
                                    cout << "But look on the bright side, you killed your urge to drink a smoothie (literally)\n";
                                    cout << "SECRET Achievement unlocked:\n" << "|*| Mechanical Smoothie |*|\n";
                                    if (status_achiviement_bad_drink != open) {
                                        status_secret_achiviement_bad_drink = "|*| Mechanical Smoothie |*|";
                                        status_achiviement_bad_drink = open;
                                    }
                            } else {
                                cout << "Incomprehensible response, shall we try again?\n";
                                cout << "Want to break my code?, GIVE UP!\n";
                                cout << "Play properly, please ):\n";
                                break;
                            }
                        } else if (second_decision_case_2_case_1 == "N" || second_decision_case_2_case_1 == "n") {
                            cout << "Why? I might be evil in the story but the blender isn't going to explode.\n";
                            cout << "Try again (:\n";
                            break;
                        } else {
                            cout << "Incomprehensible response, shall we try again?\n";
                            cout << "Want to break my code?, GIVE UP!\n";
                            cout << "Play properly, please ):\n";
                            break;
                        }
                    break;
                    default:
                        cout << "Incomprehensible response, shall we try again?\n";
                        cout << "Want to break my code?, GIVE UP!\n";
                        cout << "Play properly, please ):\n";
                        break;
                    }
                    break;
                    case 3:
                    qtd_choose_times += 1; // MY SCHEME HAHAHAHAHAHA
                        if (qtd_choose_times == 2 ) { // Just one more time so we don't overdo it 
                            cout << "You go to the garage to grab your lightning rod\n";
                            cout << "You climbed the highest mountain you found around your house\n";
                            cout << "Positioned the lightning rod and connected the blender to it\n";
                            cout << "The sound of the 90s echoes through your mind...";
                            cout << "You've been....THUNDERSTRUCK";
                            cout << "LIGHTNING HIT YOU!\n";
                            cout << "Lightning shows no mercy, your last words were ashes\n";
                            cout << "Well, at least now you killed your urge to drink a smoothie (literally)\n"; // GENIUS WORDPLAY HAHAHAHAHAHA
                            if (status_achiviement_thunderstruck != open) {
                                cout << "SECRET Achievement unlocked:\n" << "|*| Thunderstruck |*|\n";
                                status_achiviement_thunderstruck = open;
                                status_secret_achiviement_thunderstruck = "|*| Thunderstruck |*|";
                            }  
                            break;
                        } else if (qtd_choose_times != 3) {
                            cout << "You decide to use solar energy\n";
                            cout << "You grab an old solar panel, go outside and... it's night time\n";
                            cout << "You try to use the house lights but they are not enough...\n";
                            cout << "Giving up is not an option and now, what do you want to do?\n";
                            cout << "Press 0 to give up\n";
                            cout << "Press 1 to cry in the bathroom\n";
                            cin >> second_decision_case_3;
                                switch (second_decision_case_3) {
                                case 0:
                                    cout << "Why give up? You came so far!\nLet's try again";
                                    cout << endl;
                                    break;
                                case 1:
                                    cout << "Actions have consequences!\n";
                                    cout << "You go to the bathroom and shed tears\n";
                                    cout << "Congratulations, you ruined your day!\n";
                                    cout << "At least you saved electricity and bath water...\n";
                                    if (status_achiviement_sad != open) {
                                    cout << "Achievement unlocked:\n" << "|*| Bath of Tears |*|\n";
                                    status_achiviement_sad = open;
                                    }
                                    break;
                                default:
                                    cout << "Incomprehensible response, shall we try again?\n";
                                    cout << "Want to break my code?, GIVE UP!\n";
                                    cout << "Play properly, please ):\n";
                                break;
                                }
                        } else {
                            cout << "Incomprehensible response, shall we try again?\n";
                            cout << "Want to break my code?, GIVE UP!\n";
                            cout << "Play properly, please ):\n";
                            break;
                        } 
                    break;
                default:
                    cout << "Incomprehensible response, shall we try again?\n";
                    cout << "Want to break my code?, GIVE UP!\n";
                    cout << "Play properly, please ):\n";
                    break;

                }
            } else if (first_decision == "N" || first_decision == "n" || first_decision == "N" || first_decision == "n") {
               cout << "Congratulations, safety first!\n";
               if (status_achiviement_fear != open) {
               status_achiviement_fear = open;
               cout << "Achievement unlocked:\n" << "|*| Coward |*|\n";
               }
            } else {
                cout << "Incomprehensible response, shall we try again?\n";
                cout << "Want to break my code?, GIVE UP!\n";
                cout << "Play properly, please ):\n";
                continue;
            }
            break;
        case 1: 
            // Ensures it starts empty to avoid printing garbage
            complete_all_the_game = ""; 

            // Congratulations upon 100% completion
            if (status_achiviement_fear == open && 
                status_achiviement_good == open && 
                status_achiviement_sad == open && 
                status_achiviement_boring == open && 
                status_achiviement_tetanus == open && 
                status_achiviement_fire == open && 
                status_achiviement_hospital == open && 
                status_achiviement_thunderstruck == open && 
                status_achiviement_bad_drink == open && 
                status_achiviement_cheese == open) {
                
                complete_all_the_game = "\n====================================================================\n"
                                        "THE JOURNEY IS COMPLETE. THE SMOOTHIE HAS BEEN ACHIEVED.\n\n"
                                        "Myths spoke of a fearless warrior who would face the 110V vs 220V dilemma.\n"
                                        "You didn't just face the danger, you wrote your name in the stars (right next to Joe Ruela's rocket).\n\n"
                                        "ALL ACHIEVEMENTS UNLOCKED!\n\n"
                                        "The smoothie universe now rests in peace. Thank you for playing!\n"
                                        "====================================================================\n";
            }

            // Check achievements
            cout << "Achievements:\n" << endl;
            cout << "|----Name----|            |--Status--|\n";
            cout << "|*| Coward |*|              " << status_achiviement_fear << endl;
            cout << "|*| Good Ending |*|         " << status_achiviement_good << endl;
            cout << "|*| Bath of Tears |*|       " << status_achiviement_sad << endl;
            cout << "|*| Boring to the Bone |*|  " << status_achiviement_boring << endl;
            cout << "|*| Teta-Joe-nus |*|        " << status_achiviement_tetanus << endl;
            cout << "|*| Street Celebrity |*|    " << status_achiviement_fire << endl;
            cout << "|*| Sky-Spider |*|          " << status_achiviement_hospital << endl;
            cout << status_secret_achiviement_thunderstruck << "   " << status_achiviement_thunderstruck << endl;
            cout << status_secret_achiviement_bad_drink << "   " << status_achiviement_bad_drink << endl;
            cout << status_secret_achiviement_cheese << "   " << status_achiviement_cheese << endl;
            
            // Only prints the message if it has content (if the platinum if was executed)
            if (!complete_all_the_game.empty()) {
                cout << complete_all_the_game << endl;
            }
            break;
        case 2:
            cout << "Game reset successfully!\n";
            break; // Resets the loop, restarting the for loop without losing progress
        case 3:
            cout << "Closing the program...\n" ;
            cout << "Thank you for playing!";
            return 0; // Terminates int main(void) closing the program
        default:
            cout << "Incomprehensible response, shall we try again?\n";
            cout << "Want to break my code?, GIVE UP!\n";
            cout << "Play properly, please ):\n";
            break;
        }
    }
     // Safety mechanism to close the code in case of an error that breaks the loop
    return 0;
}

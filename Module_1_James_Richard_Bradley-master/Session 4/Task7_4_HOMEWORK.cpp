#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

/* VARIABLE DECLARATIONS */

bool play = true, eventONE = false, eventTWO = false, eventTHREE = false;
enum event { ALARM, BREAKFAST, TRANSPORT, TOTALEVENTS };
enum names { PLAYER_1, PLAYER_2, PLAYER_3, PLAYER_4, PLAYER_5, TOTALNAMES };
// loops[loop number for each player], score[score for round][player], totalSCORE[combined score per player]
int loops[TOTALNAMES]{ 0,2,3,4,5 }, score[TOTALEVENTS][TOTALNAMES]{ { 0,150,250,350,450 }, { 0,200,300,400,500 }, { 0,200,300,400,500 }}, totalSCORE[TOTALNAMES];
string choices, playerNAME[TOTALNAMES]{"PLAYER_1", "TONY", "MAGGIE", "BORIS", "THERESA"};

int main()
{
	while (play == true)
	{
		/* INTRODUCTION */
			cout << " Please tell me your name:" << endl;
			cin >> playerNAME[0];
			system("CLS");
			cout << endl;
			cout << endl;

		/* This section creates a faked graphic using characters to create the image */

			cout << "                  o--o0o--o                  " << endl;		// Beginning of "Graphic" output
			cout << "      8=8===========================8=8      " << endl;		// FRAME SIZES (in characters)
			cout << "       |                             |       " << endl;		// Total Width: 45, Outer Border: 1, Inner Border: 1
			cout << "       |         WELCOME  TO         |       " << endl;
			cout << "       |";														// Opening of frame
			int position = 12 - (size(playerNAME[0]) / 2);								// Calculates values for centering name
			for (int i = 0; i <= position; i++)							// Generates spaces before name
			{
				cout << " ";
			}
			cout << playerNAME[0] << "'s";												// Adds "'s" to a name i.e. James's
			if (size(playerNAME[0]) % 2 == 0)								// If playername contains odd number of characters, adds another single space
			{
				cout << " ";
			}
			for (int i = 0; i <= position; i++)							// Generates spaces after the name
			{
				cout << " ";
			}
			cout << "|" << endl;													// Closing of frame
			cout << "       |       BIZARRE  DAY!!!       |       " << endl;
			cout << "       |                             |       " << endl;
			cout << "      8=8===========================8=8      " << endl;
			cout << "                  o--o0o--o                  " << endl;					// End of "Graphic" output
			cout << endl;
			cout << endl;

			system("pause");
			system("CLS");

		/* MAIN GAME */
		for (;;)
		{
			switch (loops[0])
			{
				case 0:
				{
					cout << endl;
					cout << endl;
					cout << "                  o--o0o--o                  " << endl;						cout << "      8=8===========================8=8      " << endl;
					cout << endl;
					cout << "   *BUZZ*  *BUZZ*  *BUZZ*  *BUZZ*  *BUZZ*    " << endl;
					cout << endl;
					cout << " The sound of the alarm clock wakes you from " << endl;
					cout << " your deep sleep. The date on the screen says" << endl;
					cout << endl;
					cout << "            07:00 AM  17/10/2020             " << endl;
					cout << endl;
					cout << " You never have been very much of a morning  " << endl;
					cout << " person, and this rude awakening has put you " << endl;
					cout << " in a foul mood.                             " << endl;
					cout << endl;
					cout << " How do you decide to deal with the clock?   " << endl;
					cout << " You can SILENCE it like a normal sane person" << endl;
					cout << " ... THROW it in anger... or SMASH it with   " << endl;
					cout << " your fist like a psychopath?                " << endl;
					cout << endl;
					cout << "     | SILENCE |   | THROW |   | SMASH |     " << endl;
					cout << endl;
					cin >> choices;
					cout << endl;

					if ((choices == "SILENCE") || (choices == "silence"))
					{
						cout << " You calmly reach over and press the button  " << endl;
						cout << " on top of the alarm to switch it off.  It's " << endl;
						cout << " about time you got up and ready for the day." << endl;
						cout << endl;
						cout << "      8=8===========================8=8      " << endl;
						cout << "                  o--o0o--o                  " << endl;
						cout << endl;
						cout << endl;

						score[ALARM][0] += 100;
						eventONE = true;

						system("pause");
						system("CLS");
					}
					else if ((choices == "THROW") || (choices == "throw"))
					{
						cout << " You aggresivley grab for the alarm, pull it " << endl;
						cout << " from the cabinet, and launch it across the  " << endl;
						cout << " room.  It rebounds off the opposite wall and" << endl;
						cout << " smacks you in the face in retaliation...    " << endl;
						cout << endl;
						cout << " Well done idiot... maybe that'll teach you  " << endl;
						cout << " not to be so quick tempered in the future..." << endl;
						cout << endl;
						cout << " Rubbing your face where the clock made it's " << endl;
						cout << " impact, you decide you are now too awake to " << endl;
						cout << " continue sleeping.  Best get up and get dre-" << endl;
						cout << " ssed for the day...                         " << endl;
						cout << endl;
						cout << "      8=8===========================8=8      " << endl;
						cout << "                  o--o0o--o                  " << endl;
						cout << endl;
						cout << endl;

						score[ALARM][0] += 50;
						eventONE = false;

						system("pause");
						system("CLS");
					}
					else if ((choices == "SMASH") || (choices == "smash"))
					{
						cout << " You angrily pound your fist into the top of " << endl;
						cout << " the alarm, until you feel the plastic break." << endl;
						cout << " You have however forgotton that this alarm  " << endl;
						cout << " also doubles as a charging station... and is" << endl;
						cout << " currently plugged into the mains...         " << endl;
						cout << endl;
						cout << " You'd think modern technology would have    " << endl;
						cout << " measures in place to prevent electrocution, " << endl;
						cout << " but this cheap import you got did away with " << endl;
						cout << " any safety standards...                     " << endl;
						cout << endl;
						cout << " Your eyes start to go dark, and the smell of" << endl;
						cout << " burning hair fills your nose as the voltage " << endl;
						cout << " of the national grid courses through you... " << endl;
						cout << " And you quickly contemplate your choices in " << endl;
						cout << " life as oblivion sets in...                 " << endl;
						cout << endl;
						cout << "      8=8===========================8=8      " << endl;
						cout << "                  o--o0o--o                  " << endl;
						cout << endl;
						cout << endl;

						eventONE = false;
						system("pause");
						system("CLS");

						break;
					}

					cout << endl;
					cout << endl;
					cout << "                  o--o0o--o                  " << endl;
					cout << "      8=8===========================8=8      " << endl;
					cout << endl;
					cout << " After getting dressed, you head down to the " << endl;
					cout << " kitchen to get yourself some breakfast.     " << endl;
					cout << " You haven't been out to get the shopping for" << endl;
					cout << " for a few days, so your choices are limited." << endl;
					cout << endl;
					cout << " You have enough bread to make some TOAST... " << endl;
					cout << " There is a single BANANA left in the fruit  " << endl;
					cout << " bowl that you could have... or you could opt" << endl;
					cout << " for a quick bowl of cereal.                 " << endl;
					cout << endl;
					cout << "      | TOAST |  | BANANA |  | CEREAL |      " << endl;
					cout << endl;
					cin >> choices;
					cout << endl;

					if ((choices == "BANANA") || (choices == "banana"))
					{
						cout << " You take the banana from the fruit bowl, and" << endl;
						cout << " look at the world outside your window while " << endl;
						cout << " you eat.                                    " << endl;
						cout << endl;
						cout << "      8=8===========================8=8      " << endl;
						cout << "                  o--o0o--o                  " << endl;
						cout << endl;
						cout << endl;

						score[BREAKFAST][0] += 100;
						eventTWO = true;

						system("pause");
						system("CLS");
					}
					else if ((choices == "CEREAL") || (choices == "cereal"))
					{
						cout << " You resign yourself to eating a simple bowl " << endl;
						cout << " of cereal for your breakfast.  However, you " << endl;
						cout << " you forgot to check the packaging when you  " << endl;
						cout << " bought them, not noticing the MAY CONTAIN   " << endl;
						cout << " NUTS warning in small print on the back.    " << endl;
						cout << endl;
						cout << " Almost immediately after your second spoon- " << endl;
						cout << " full your airway begins to close up, and you" << endl;
						cout << " start to feel faint.                        " << endl;
						cout << endl;
						cout << " Your last thought as you lay on the ground  " << endl;
						cout << " staring at the cereal box on the countertop " << endl;
						cout << " is... 'Stop laughing at me you stupid monkey" << endl;
						cout << endl;
						cout << "      8=8===========================8=8      " << endl;
						cout << "                  o--o0o--o                  " << endl;
						cout << endl;
						cout << endl;

						eventTWO = false;
						system("pause");
						system("CLS");

						break;
					}
					else if ((choices == "TOAST") || (choices == "toast"))
					{
						cout << " You deside that a couple of slices of toast " << endl;
						cout << " will be sufficient for breakfast, and put a " << endl;
						cout << " couple of slices into the toaster.          " << endl;
						cout << endl;
						cout << " After several minutes you realise the machi-" << endl;
						cout << " ne is taking far longer than it should to   " << endl;
						cout << " finish.  Upon closer inspection, you find it" << endl;
						cout << " jammed, burning the bread to a lovely shade " << endl;
						cout << " of jet black.                               " << endl;
						cout << endl;
						cout << " Surprisingly, you manage to drag the toast  " << endl;
						cout << " out with a fork, and didn't electrocute or  " << endl;
						cout << " burn yourself in the process...  but your   " << endl;
						cout << " breakfast is beyond salvation.              " << endl;
						cout << endl;
						cout << "      8=8===========================8=8      " << endl;
						cout << "                  o--o0o--o                  " << endl;
						cout << endl;
						cout << endl;

						score[BREAKFAST][0] += 50;
						eventTWO = false;

						system("pause");
						system("CLS");
					}

					cout << endl;
					cout << endl;
					cout << "                  o--o0o--o                  " << endl;
					cout << "      8=8===========================8=8      " << endl;
					cout << endl;
					cout << " You look over at the clock on the wall...   " << endl;
					cout << endl;
					cout << "                    08:30 am                 " << endl;
					cout << endl;
					cout << " Damn... you are running late for work...    " << endl;
					cout << " You have three options you can take to try  " << endl;
					cout << " and get to work on time.  You could WALK to " << endl;
					cout << " work... but you doubt you'd be able to make " << endl;
					cout << " it in time.  You could call an uber to take " << endl;
					cout << " you there by CAR.  Or you can rush for the  " << endl;
					cout << " BUS and hope you make it.                   " << endl;
					cout << endl;
					cout << "        | WALK |   | CAR |   | BUS |         " << endl;
					cout << endl;
					cin >> choices;
					cout << endl;

					if ((choices == "WALK") || (choices == "walk"))
					{
						cout << " You deside to take the scenic option and    " << endl;
						cout << " walk to work.  Although a healthy option, in" << endl;
						cout << " your rush to get to work on time you are not" << endl;
						cout << " looking both ways every time you cross the  " << endl;
						cout << " street.                                     " << endl;
						cout << endl;
						cout << " Ironically... you have not been hit by any  " << endl;
						cout << " oncoming traffic... but a large sinkhole has" << endl;
						cout << " appeared beneath you, caused by the recent  " << endl;
						cout << " sever thunderstorms.                        " << endl;
						cout << endl;
						cout << " As you tumble down through the darkness, you" << endl;
						cout << " think to yourself:  ''...should have got an " << endl;
						cout << " uber...''                                   " << endl;
						cout << endl;
						cout << "      8=8===========================8=8      " << endl;
						cout << "                  o--o0o--o                  " << endl;
						cout << endl;
						cout << endl;

						eventTHREE = false;
						system("pause");
						system("CLS");

						break;
					}
					else if ((choices == "CAR") || (choices == "car"))
					{
						cout << " Your uber driver pulls up outside the house " << endl;
						cout << " and you eagerly jump in ready to leave.  He " << endl;
						cout << " seems friendly enough... but you do not rea-" << endl;
						cout << " lise that he has not been taking his medica-" << endl;
						cout << " tion... and suddenly believes you are both  " << endl;
						cout << " being chased down by an enormous crazed ele-" << endl;
						cout << " phant.                                      " << endl;
						cout << endl;
						cout << " You grip the door of the car as he floors it" << endl;
						cout << " through town.  He veers to the left and aims" << endl;
						cout << " towards the river... explaining calmly that " << endl;
						cout << " it's the only way to escape... as elephants " << endl;
						cout << " can't swim on Saturday's...                 " << endl;
						cout << endl;
						cout << " Who would have thought that ordering a lift " << endl;
						cout << " from a random person on the internet could  " << endl;
						cout << " ever have been such a bad idea?             " << endl;
						cout << endl;
						cout << "      8=8===========================8=8      " << endl;
						cout << "                  o--o0o--o                  " << endl;
						cout << endl;
						cout << endl;

						score[TRANSPORT][0] += 50;
						eventTHREE = false;

						system("pause");
						system("CLS");

						break;
					}
					else if ((choices == "BUS") || (choices == "bus"))
					{
						cout << " You bolt out of the door towards the bus    " << endl;
						cout << " stop, and just manage to catch it...        " << endl;
						cout << endl;
						cout << " As you take your seat towards the back, you " << endl;
						cout << " silently congratulate yourself on making the" << endl;
						cout << " more evironmentally moral choice of public  " << endl;
						cout << " transport, and bask in the accompanying smu-" << endl;
						cout << " gness it brings with the other passengers.  " << endl;
						cout << endl;
						cout << "      8=8===========================8=8      " << endl;
						cout << "                  o--o0o--o                  " << endl;
						cout << endl;
						cout << endl;

						score[TRANSPORT][0] += 100;
						eventTHREE = true;
						system("pause");
						system("CLS");

						break;
					}
				}
				case 1:
				{
					cout << endl;
					cout << endl;
					cout << "                  o--o0o--o                  " << endl;
					cout << "      8=8===========================8=8      " << endl;
					cout << endl;
					cout << "   *BUZZ*  *BUZZ*  *BUZZ*  *BUZZ*  *BUZZ*    " << endl;
					cout << endl;
					cout << " You open your eyes to the sound of your     " << endl;
					cout << " alarm clock screaming out... you are laying " << endl;
					cout << " in your bed staring at the ceiling... you   " << endl;
					cout << " glance over at your bedisde cabinet:        " << endl;
					cout << endl;
					cout << "            07:00 AM  17/10/2020             " << endl;
					cout << endl;
					cout << " You could have sworn that this had already  " << endl;
					cout << " happened, must've been a bad dream or some- " << endl;
					cout << " thing...                                    " << endl;
					cout << endl;
					cout << " How do you decide to deal with the clock?   " << endl;
					cout << " You can SILENCE it like a normal sane person" << endl;
					cout << " ... THROW it in anger... or SMASH it with   " << endl;
					cout << " your fist like a psychopath?                " << endl;
					cout << endl;
					cout << "     | SILENCE |   | THROW |   | SMASH |     " << endl;
					cout << endl;
					cin >> choices;
					cout << endl;

					if ((choices == "SILENCE") || (choices == "silence"))
					{
						cout << " You calmly reach over and press the button  " << endl;
						cout << " on top of the alarm to switch it off.  It's " << endl;
						cout << " about time you got up and ready for the day." << endl;
						cout << endl;
						cout << "      8=8===========================8=8      " << endl;
						cout << "                  o--o0o--o                  " << endl;
						cout << endl;
						cout << endl;

						score[ALARM][0] += 100;
						eventONE = true;

						system("pause");
						system("CLS");
					}
					else if ((choices == "THROW") || (choices == "throw"))
					{
						cout << " You aggresivley grab for the alarm, pull it " << endl;
						cout << " from the cabinet, and launch it across the  " << endl;
						cout << " room.  It rebounds off the opposite wall and" << endl;
						cout << " smacks you in the face in retaliation...    " << endl;
						cout << endl;
						cout << " Well done idiot... maybe that'll teach you  " << endl;
						cout << " not to be so quick tempered in the future..." << endl;
						cout << endl;
						cout << " Rubbing your face where the clock made it's " << endl;
						cout << " impact, you decide you are now too awake to " << endl;
						cout << " continue sleeping.  Best get up and get dre-" << endl;
						cout << " ssed for the day...                         " << endl;
						cout << endl;
						cout << "      8=8===========================8=8      " << endl;
						cout << "                  o--o0o--o                  " << endl;
						cout << endl;
						cout << endl;

						score[ALARM][0] += 50;
						eventONE = false;

						system("pause");
						system("CLS");
					}
					else if ((choices == "SMASH") || (choices == "smash"))
					{
						cout << " You angrily pound your fist into the top of " << endl;
						cout << " the alarm, until you feel the plastic break." << endl;
						cout << " You have however forgotton that this alarm  " << endl;
						cout << " also doubles as a charging station... and is" << endl;
						cout << " currently plugged into the mains...         " << endl;
						cout << endl;
						cout << " You'd think modern technology would have    " << endl;
						cout << " measures in place to prevent electrocution, " << endl;
						cout << " but this cheap import you got did away with " << endl;
						cout << " any safety standards...                     " << endl;
						cout << endl;
						cout << " Your eyes start to go dark, and the smell of" << endl;
						cout << " burning hair fills your nose as the voltage " << endl;
						cout << " of the national grid courses through you... " << endl;
						cout << " And you quickly contemplate your choices in " << endl;
						cout << " life as oblivion sets in...                 " << endl;
						cout << endl;
						cout << "      8=8===========================8=8      " << endl;
						cout << "                  o--o0o--o                  " << endl;
						cout << endl;
						cout << endl;

						eventONE = false;
						system("pause");
						system("CLS");

						break;
					}

					cout << endl;
					cout << endl;
					cout << "                  o--o0o--o                  " << endl;
					cout << "      8=8===========================8=8      " << endl;
					cout << endl;
					cout << " After getting dressed, you head down to the " << endl;
					cout << " kitchen to get yourself some breakfast.     " << endl;
					cout << " You haven't been out to get the shopping for" << endl;
					cout << " for a few days, so your choices are limited." << endl;
					cout << endl;
					cout << " You have enough bread to make some TOAST... " << endl;
					cout << " There is a single BANANA left in the fruit  " << endl;
					cout << " bowl that you could have... or you could opt" << endl;
					cout << " for a quick bowl of cereal.                 " << endl;
					cout << endl;
					cout << "      | TOAST |  | BANANA |  | CEREAL |      " << endl;
					cout << endl;
					cin >> choices;
					cout << endl;

					if ((choices == "BANANA") || (choices == "banana"))
					{
						cout << " You take the banana from the fruit bowl, and" << endl;
						cout << " look at the world outside your window while " << endl;
						cout << " you eat.                                    " << endl;
						cout << endl;
						cout << "      8=8===========================8=8      " << endl;
						cout << "                  o--o0o--o                  " << endl;
						cout << endl;
						cout << endl;

						score[BREAKFAST][0] += 100;
						eventTWO = true;

						system("pause");
						system("CLS");
					}
					else if ((choices == "CEREAL") || (choices == "cereal"))
					{
						cout << " You resign yourself to eating a simple bowl " << endl;
						cout << " of cereal for your breakfast.  However, you " << endl;
						cout << " you forgot to check the packaging when you  " << endl;
						cout << " bought them, not noticing the MAY CONTAIN   " << endl;
						cout << " NUTS warning in small print on the back.    " << endl;
						cout << endl;
						cout << " Almost immediately after your second spoon- " << endl;
						cout << " full your airway begins to close up, and you" << endl;
						cout << " start to feel faint.                        " << endl;
						cout << endl;
						cout << " Your last thought as you lay on the ground  " << endl;
						cout << " staring at the cereal box on the countertop " << endl;
						cout << " is... 'Stop laughing at me you stupid monkey" << endl;
						cout << endl;
						cout << "      8=8===========================8=8      " << endl;
						cout << "                  o--o0o--o                  " << endl;
						cout << endl;
						cout << endl;

						eventTWO = false;
						system("pause");
						system("CLS");

						break;
					}
					else if ((choices == "TOAST") || (choices == "toast"))
					{
						cout << " You deside that a couple of slices of toast " << endl;
						cout << " will be sufficient for breakfast, and put a " << endl;
						cout << " couple of slices into the toaster.          " << endl;
						cout << endl;
						cout << " After several minutes you realise the machi-" << endl;
						cout << " ne is taking far longer than it should to   " << endl;
						cout << " finish.  Upon closer inspection, you find it" << endl;
						cout << " jammed, burning the bread to a lovely shade " << endl;
						cout << " of jet black.                               " << endl;
						cout << endl;
						cout << " Surprisingly, you manage to drag the toast  " << endl;
						cout << " out with a fork, and didn't electrocute or  " << endl;
						cout << " burn yourself in the process...  but your   " << endl;
						cout << " breakfast is beyond salvation.              " << endl;
						cout << endl;
						cout << "      8=8===========================8=8      " << endl;
						cout << "                  o--o0o--o                  " << endl;
						cout << endl;
						cout << endl;

						score[BREAKFAST][0] += 50;
						eventTWO = false;

						system("pause");
						system("CLS");
					}

					cout << endl;
					cout << endl;
					cout << "                  o--o0o--o                  " << endl;
					cout << "      8=8===========================8=8      " << endl;
					cout << endl;
					cout << " You look over at the clock on the wall...   " << endl;
					cout << endl;
					cout << "                    08:30 am                 " << endl;
					cout << endl;
					cout << " Damn... you are running late for work...    " << endl;
					cout << " You have three options you can take to try  " << endl;
					cout << " and get to work on time.  You could WALK to " << endl;
					cout << " work... but you doubt you'd be able to make " << endl;
					cout << " it in time.  You could call an uber to take " << endl;
					cout << " you there by CAR.  Or you can rush for the  " << endl;
					cout << " BUS and hope you make it.                   " << endl;
					cout << endl;
					cout << "        | WALK |   | CAR |   | BUS |         " << endl;
					cout << endl;
					cin >> choices;
					cout << endl;

					if ((choices == "WALK") || (choices == "walk"))
					{
						cout << " You deside to take the scenic option and    " << endl;
						cout << " walk to work.  Although a healthy option, in" << endl;
						cout << " your rush to get to work on time you are not" << endl;
						cout << " looking both ways every time you cross the  " << endl;
						cout << " street.                                     " << endl;
						cout << endl;
						cout << " Ironically... you have not been hit by any  " << endl;
						cout << " oncoming traffic... but a large sinkhole has" << endl;
						cout << " appeared beneath you, caused by the recent  " << endl;
						cout << " sever thunderstorms.                        " << endl;
						cout << endl;
						cout << " As you tumble down through the darkness, you" << endl;
						cout << " think to yourself:  ''...should have got an " << endl;
						cout << " uber...''                                   " << endl;
						cout << endl;
						cout << "      8=8===========================8=8      " << endl;
						cout << "                  o--o0o--o                  " << endl;
						cout << endl;
						cout << endl;

						eventTHREE = false;
						system("pause");
						system("CLS");

						break;
					}
					else if ((choices == "CAR") || (choices == "car"))
					{
						cout << " Your uber driver pulls up outside the house " << endl;
						cout << " and you eagerly jump in ready to leave.  He " << endl;
						cout << " seems friendly enough... but you do not rea-" << endl;
						cout << " lise that he has not been taking his medica-" << endl;
						cout << " tion... and suddenly believes you are both  " << endl;
						cout << " being chased down by an enormous crazed ele-" << endl;
						cout << " phant.                                      " << endl;
						cout << endl;
						cout << " You grip the door of the car as he floors it" << endl;
						cout << " through town.  He veers to the left and aims" << endl;
						cout << " towards the river... explaining calmly that " << endl;
						cout << " it's the only way to escape... as elephants " << endl;
						cout << " can't swim on Saturday's...                 " << endl;
						cout << endl;
						cout << " Who would have thought that ordering a lift " << endl;
						cout << " from a random person on the internet could  " << endl;
						cout << " ever have been such a bad idea?             " << endl;
						cout << endl;
						cout << "      8=8===========================8=8      " << endl;
						cout << "                  o--o0o--o                  " << endl;
						cout << endl;
						cout << endl;

						score[TRANSPORT][0] += 50;
						eventTHREE = false;

						system("pause");
						system("CLS");

						break;
					}
					else if ((choices == "BUS") || (choices == "bus"))
					{
						cout << " You bolt out of the door towards the bus    " << endl;
						cout << " stop, and just manage to catch it...        " << endl;
						cout << endl;
						cout << " As you take your seat towards the back, you " << endl;
						cout << " silently congratulate yourself on making the" << endl;
						cout << " more evironmentally moral choice of public  " << endl;
						cout << " transport, and bask in the accompanying smu-" << endl;
						cout << " gness it brings with the other passengers.  " << endl;
						cout << endl;
						cout << "      8=8===========================8=8      " << endl;
						cout << "                  o--o0o--o                  " << endl;
						cout << endl;
						cout << endl;

						score[TRANSPORT][0] += 100;
						eventTHREE = true;
						system("pause");
						system("CLS");

						break;
					}
				}
				case 2:
				{
					cout << endl;
					cout << endl;
					cout << "                  o--o0o--o                  " << endl;
					cout << "      8=8===========================8=8      " << endl;
					cout << endl;
					cout << "   *BUZZ*  *BUZZ*  *BUZZ*  *BUZZ*  *BUZZ*    " << endl;
					cout << endl;
					cout << " You wake up with a start... and look over at" << endl;
					cout << " your alarm clock.                           " << endl;
					cout << endl;
					cout << "            07:00 AM  17/10/2020             " << endl;
					cout << endl;
					cout << " This is getting weird... are you having a   " << endl;
					cout << " dream within a dream or something?  Like the" << endl;
					cout << " movie INCEPTION???" << endl;
					cout << endl;
					cout << " You suppose you'd better do something about " << endl;
					cout << " the alarm...  How do you deal with it?      " << endl;
					cout << " You can SILENCE it like a normal sane person" << endl;
					cout << " ... THROW it in anger... or SMASH it with   " << endl;
					cout << " your fist like a psychopath?                " << endl;
					cout << endl;
					cout << "     | SILENCE |   | THROW |   | SMASH |     " << endl;
					cout << endl;
					cin >> choices;
					cout << endl;

					if ((choices == "SILENCE") || (choices == "silence"))
					{
						cout << " You calmly reach over and press the button  " << endl;
						cout << " on top of the alarm to switch it off.  It's " << endl;
						cout << " about time you got up and ready for the day." << endl;
						cout << endl;
						cout << "      8=8===========================8=8      " << endl;
						cout << "                  o--o0o--o                  " << endl;
						cout << endl;
						cout << endl;

						score[ALARM][0] += 100;
						eventONE = true;

						system("pause");
						system("CLS");
					}
					else if ((choices == "THROW") || (choices == "throw"))
					{
						cout << " You aggresivley grab for the alarm, pull it " << endl;
						cout << " from the cabinet, and launch it across the  " << endl;
						cout << " room.  It rebounds off the opposite wall and" << endl;
						cout << " smacks you in the face in retaliation...    " << endl;
						cout << endl;
						cout << " Well done idiot... maybe that'll teach you  " << endl;
						cout << " not to be so quick tempered in the future..." << endl;
						cout << endl;
						cout << " Rubbing your face where the clock made it's " << endl;
						cout << " impact, you decide you are now too awake to " << endl;
						cout << " continue sleeping.  Best get up and get dre-" << endl;
						cout << " ssed for the day...                         " << endl;
						cout << endl;
						cout << "      8=8===========================8=8      " << endl;
						cout << "                  o--o0o--o                  " << endl;
						cout << endl;
						cout << endl;

						score[ALARM][0] += 50;
						eventONE = false;

						system("pause");
						system("CLS");
					}
					else if ((choices == "SMASH") || (choices == "smash"))
					{
						cout << " You angrily pound your fist into the top of " << endl;
						cout << " the alarm, until you feel the plastic break." << endl;
						cout << " You have however forgotton that this alarm  " << endl;
						cout << " also doubles as a charging station... and is" << endl;
						cout << " currently plugged into the mains...         " << endl;
						cout << endl;
						cout << " You'd think modern technology would have    " << endl;
						cout << " measures in place to prevent electrocution, " << endl;
						cout << " but this cheap import you got did away with " << endl;
						cout << " any safety standards...                     " << endl;
						cout << endl;
						cout << " Your eyes start to go dark, and the smell of" << endl;
						cout << " burning hair fills your nose as the voltage " << endl;
						cout << " of the national grid courses through you... " << endl;
						cout << " And you quickly contemplate your choices in " << endl;
						cout << " life as oblivion sets in...                 " << endl;
						cout << endl;
						cout << "      8=8===========================8=8      " << endl;
						cout << "                  o--o0o--o                  " << endl;
						cout << endl;
						cout << endl;

						eventONE = false;
						system("pause");
						system("CLS");

						break;
					}

					cout << endl;
					cout << endl;
					cout << "                  o--o0o--o                  " << endl;
					cout << "      8=8===========================8=8      " << endl;
					cout << endl;
					cout << " After getting dressed, you head down to the " << endl;
					cout << " kitchen to get yourself some breakfast.     " << endl;
					cout << " You haven't been out to get the shopping for" << endl;
					cout << " for a few days, so your choices are limited." << endl;
					cout << endl;
					cout << " You have enough bread to make some TOAST... " << endl;
					cout << " There is a single BANANA left in the fruit  " << endl;
					cout << " bowl that you could have... or you could opt" << endl;
					cout << " for a quick bowl of cereal.                 " << endl;
					cout << endl;
					cout << "      | TOAST |  | BANANA |  | CEREAL |      " << endl;
					cout << endl;
					cin >> choices;
					cout << endl;

					if ((choices == "BANANA") || (choices == "banana"))
					{
						cout << " You take the banana from the fruit bowl, and" << endl;
						cout << " look at the world outside your window while " << endl;
						cout << " you eat.                                    " << endl;
						cout << endl;
						cout << "      8=8===========================8=8      " << endl;
						cout << "                  o--o0o--o                  " << endl;
						cout << endl;
						cout << endl;

						score[BREAKFAST][0] += 100;
						eventTWO = true;

						system("pause");
						system("CLS");
					}
					else if ((choices == "CEREAL") || (choices == "cereal"))
					{
						cout << " You resign yourself to eating a simple bowl " << endl;
						cout << " of cereal for your breakfast.  However, you " << endl;
						cout << " you forgot to check the packaging when you  " << endl;
						cout << " bought them, not noticing the MAY CONTAIN   " << endl;
						cout << " NUTS warning in small print on the back.    " << endl;
						cout << endl;
						cout << " Almost immediately after your second spoon- " << endl;
						cout << " full your airway begins to close up, and you" << endl;
						cout << " start to feel faint.                        " << endl;
						cout << endl;
						cout << " Your last thought as you lay on the ground  " << endl;
						cout << " staring at the cereal box on the countertop " << endl;
						cout << " is... 'Stop laughing at me you stupid monkey" << endl;
						cout << endl;
						cout << "      8=8===========================8=8      " << endl;
						cout << "                  o--o0o--o                  " << endl;
						cout << endl;
						cout << endl;

						eventTWO = false;
						system("pause");
						system("CLS");

						break;
					}
					else if ((choices == "TOAST") || (choices == "toast"))
					{
						cout << " You deside that a couple of slices of toast " << endl;
						cout << " will be sufficient for breakfast, and put a " << endl;
						cout << " couple of slices into the toaster.          " << endl;
						cout << endl;
						cout << " After several minutes you realise the machi-" << endl;
						cout << " ne is taking far longer than it should to   " << endl;
						cout << " finish.  Upon closer inspection, you find it" << endl;
						cout << " jammed, burning the bread to a lovely shade " << endl;
						cout << " of jet black.                               " << endl;
						cout << endl;
						cout << " Surprisingly, you manage to drag the toast  " << endl;
						cout << " out with a fork, and didn't electrocute or  " << endl;
						cout << " burn yourself in the process...  but your   " << endl;
						cout << " breakfast is beyond salvation.              " << endl;
						cout << endl;
						cout << "      8=8===========================8=8      " << endl;
						cout << "                  o--o0o--o                  " << endl;
						cout << endl;
						cout << endl;

						score[BREAKFAST][0] += 50;
						eventTWO = false;

						system("pause");
						system("CLS");
					}

					cout << endl;
					cout << endl;
					cout << "                  o--o0o--o                  " << endl;
					cout << "      8=8===========================8=8      " << endl;
					cout << endl;
					cout << " You look over at the clock on the wall...   " << endl;
					cout << endl;
					cout << "                    08:30 am                 " << endl;
					cout << endl;
					cout << " Damn... you are running late for work...    " << endl;
					cout << " You have three options you can take to try  " << endl;
					cout << " and get to work on time.  You could WALK to " << endl;
					cout << " work... but you doubt you'd be able to make " << endl;
					cout << " it in time.  You could call an uber to take " << endl;
					cout << " you there by CAR.  Or you can rush for the  " << endl;
					cout << " BUS and hope you make it.                   " << endl;
					cout << endl;
					cout << "        | WALK |   | CAR |   | BUS |         " << endl;
					cout << endl;
					cin >> choices;
					cout << endl;

					if ((choices == "WALK") || (choices == "walk"))
					{
						cout << " You deside to take the scenic option and    " << endl;
						cout << " walk to work.  Although a healthy option, in" << endl;
						cout << " your rush to get to work on time you are not" << endl;
						cout << " looking both ways every time you cross the  " << endl;
						cout << " street.                                     " << endl;
						cout << endl;
						cout << " Ironically... you have not been hit by any  " << endl;
						cout << " oncoming traffic... but a large sinkhole has" << endl;
						cout << " appeared beneath you, caused by the recent  " << endl;
						cout << " sever thunderstorms.                        " << endl;
						cout << endl;
						cout << " As you tumble down through the darkness, you" << endl;
						cout << " think to yourself:  ''...should have got an " << endl;
						cout << " uber...''                                   " << endl;
						cout << endl;
						cout << "      8=8===========================8=8      " << endl;
						cout << "                  o--o0o--o                  " << endl;
						cout << endl;
						cout << endl;

						eventTHREE = false;
						system("pause");
						system("CLS");

						break;
					}
					else if ((choices == "CAR") || (choices == "car"))
					{
						cout << " Your uber driver pulls up outside the house " << endl;
						cout << " and you eagerly jump in ready to leave.  He " << endl;
						cout << " seems friendly enough... but you do not rea-" << endl;
						cout << " lise that he has not been taking his medica-" << endl;
						cout << " tion... and suddenly believes you are both  " << endl;
						cout << " being chased down by an enormous crazed ele-" << endl;
						cout << " phant.                                      " << endl;
						cout << endl;
						cout << " You grip the door of the car as he floors it" << endl;
						cout << " through town.  He veers to the left and aims" << endl;
						cout << " towards the river... explaining calmly that " << endl;
						cout << " it's the only way to escape... as elephants " << endl;
						cout << " can't swim on Saturday's...                 " << endl;
						cout << endl;
						cout << " Who would have thought that ordering a lift " << endl;
						cout << " from a random person on the internet could  " << endl;
						cout << " ever have been such a bad idea?             " << endl;
						cout << endl;
						cout << "      8=8===========================8=8      " << endl;
						cout << "                  o--o0o--o                  " << endl;
						cout << endl;
						cout << endl;

						score[TRANSPORT][0] += 50;
						eventTHREE = false;

						system("pause");
						system("CLS");

						break;
					}
					else if ((choices == "BUS") || (choices == "bus"))
					{
						cout << " You bolt out of the door towards the bus    " << endl;
						cout << " stop, and just manage to catch it...        " << endl;
						cout << endl;
						cout << " As you take your seat towards the back, you " << endl;
						cout << " silently congratulate yourself on making the" << endl;
						cout << " more evironmentally moral choice of public  " << endl;
						cout << " transport, and bask in the accompanying smu-" << endl;
						cout << " gness it brings with the other passengers.  " << endl;
						cout << endl;
						cout << "      8=8===========================8=8      " << endl;
						cout << "                  o--o0o--o                  " << endl;
						cout << endl;
						cout << endl;

						score[TRANSPORT][0] += 100;
						eventTHREE = true;
						system("pause");
						system("CLS");

						break;
					}
				}
				default:
				{
					cout << endl;
					cout << endl;
					cout << "                  o--o0o--o                  " << endl;						cout << "      8=8===========================8=8      " << endl;
					cout << endl;
					cout << "   *BUZZ*  *BUZZ*  *BUZZ*  *BUZZ*  *BUZZ*    " << endl;
					cout << endl;
					cout << " You glare at the alarm clock...             " << endl;
					cout << endl;
					cout << "            07:00 AM  17/10/2020             " << endl;
					cout << endl;
					cout << " ''Why is this happening... I keep living the" << endl;
					cout << " same day over and over...'' you think to yo-" << endl;
					cout << " urself.  ''I must be doing something wrong''" << endl;
					cout << endl;
					cout << " How do you decide to deal with the clock?   " << endl;
					cout << " You can SILENCE it like a normal sane person" << endl;
					cout << " ... THROW it in anger... or SMASH it with   " << endl;
					cout << " your fist like a psychopath?                " << endl;
					cout << endl;
					cout << "     | SILENCE |   | THROW |   | SMASH |     " << endl;
					cout << endl;
					cin >> choices;
					cout << endl;

					if ((choices == "SILENCE") || (choices == "silence"))
					{
						cout << " You calmly reach over and press the button  " << endl;
						cout << " on top of the alarm to switch it off.  It's " << endl;
						cout << " about time you got up and ready for the day." << endl;
						cout << endl;
						cout << "      8=8===========================8=8      " << endl;
						cout << "                  o--o0o--o                  " << endl;
						cout << endl;
						cout << endl;

						score[ALARM][0] += 100;
						eventONE = true;

						system("pause");
						system("CLS");
					}
					else if ((choices == "THROW") || (choices == "throw"))
					{
						cout << " You aggresivley grab for the alarm, pull it " << endl;
						cout << " from the cabinet, and launch it across the  " << endl;
						cout << " room.  It rebounds off the opposite wall and" << endl;
						cout << " smacks you in the face in retaliation...    " << endl;
						cout << endl;
						cout << " Well done idiot... maybe that'll teach you  " << endl;
						cout << " not to be so quick tempered in the future..." << endl;
						cout << endl;
						cout << " Rubbing your face where the clock made it's " << endl;
						cout << " impact, you decide you are now too awake to " << endl;
						cout << " continue sleeping.  Best get up and get dre-" << endl;
						cout << " ssed for the day...                         " << endl;
						cout << endl;
						cout << "      8=8===========================8=8      " << endl;
						cout << "                  o--o0o--o                  " << endl;
						cout << endl;
						cout << endl;

						score[ALARM][0] += 50;
						eventONE = false;

						system("pause");
						system("CLS");
					}
					else if ((choices == "SMASH") || (choices == "smash"))
					{
						cout << " You angrily pound your fist into the top of " << endl;
						cout << " the alarm, until you feel the plastic break." << endl;
						cout << " You have however forgotton that this alarm  " << endl;
						cout << " also doubles as a charging station... and is" << endl;
						cout << " currently plugged into the mains...         " << endl;
						cout << endl;
						cout << " You'd think modern technology would have    " << endl;
						cout << " measures in place to prevent electrocution, " << endl;
						cout << " but this cheap import you got did away with " << endl;
						cout << " any safety standards...                     " << endl;
						cout << endl;
						cout << " Your eyes start to go dark, and the smell of" << endl;
						cout << " burning hair fills your nose as the voltage " << endl;
						cout << " of the national grid courses through you... " << endl;
						cout << " And you quickly contemplate your choices in " << endl;
						cout << " life as oblivion sets in...                 " << endl;
						cout << endl;
						cout << "      8=8===========================8=8      " << endl;
						cout << "                  o--o0o--o                  " << endl;
						cout << endl;
						cout << endl;

						eventONE = false;
						system("pause");
						system("CLS");

						break;
					}

					cout << endl;
					cout << endl;
					cout << "                  o--o0o--o                  " << endl;
					cout << "      8=8===========================8=8      " << endl;
					cout << endl;
					cout << " After getting dressed, you head down to the " << endl;
					cout << " kitchen to get yourself some breakfast.     " << endl;
					cout << " You haven't been out to get the shopping for" << endl;
					cout << " for a few days, so your choices are limited." << endl;
					cout << endl;
					cout << " You have enough bread to make some TOAST... " << endl;
					cout << " There is a single BANANA left in the fruit  " << endl;
					cout << " bowl that you could have... or you could opt" << endl;
					cout << " for a quick bowl of cereal.                 " << endl;
					cout << endl;
					cout << "      | TOAST |  | BANANA |  | CEREAL |      " << endl;
					cout << endl;
					cin >> choices;
					cout << endl;

					if ((choices == "BANANA") || (choices == "banana"))
					{
						cout << " You take the banana from the fruit bowl, and" << endl;
						cout << " look at the world outside your window while " << endl;
						cout << " you eat.                                    " << endl;
						cout << endl;
						cout << "      8=8===========================8=8      " << endl;
						cout << "                  o--o0o--o                  " << endl;
						cout << endl;
						cout << endl;

						score[BREAKFAST][0] += 100;
						eventTWO = true;

						system("pause");
						system("CLS");
					}
					else if ((choices == "CEREAL") || (choices == "cereal"))
					{
						cout << " You resign yourself to eating a simple bowl " << endl;
						cout << " of cereal for your breakfast.  However, you " << endl;
						cout << " you forgot to check the packaging when you  " << endl;
						cout << " bought them, not noticing the MAY CONTAIN   " << endl;
						cout << " NUTS warning in small print on the back.    " << endl;
						cout << endl;
						cout << " Almost immediately after your second spoon- " << endl;
						cout << " full your airway begins to close up, and you" << endl;
						cout << " start to feel faint.                        " << endl;
						cout << endl;
						cout << " Your last thought as you lay on the ground  " << endl;
						cout << " staring at the cereal box on the countertop " << endl;
						cout << " is... 'Stop laughing at me you stupid monkey" << endl;
						cout << endl;
						cout << "      8=8===========================8=8      " << endl;
						cout << "                  o--o0o--o                  " << endl;
						cout << endl;
						cout << endl;

						eventTWO = false;
						system("pause");
						system("CLS");

						break;
					}
					else if ((choices == "TOAST") || (choices == "toast"))
					{
						cout << " You deside that a couple of slices of toast " << endl;
						cout << " will be sufficient for breakfast, and put a " << endl;
						cout << " couple of slices into the toaster.          " << endl;
						cout << endl;
						cout << " After several minutes you realise the machi-" << endl;
						cout << " ne is taking far longer than it should to   " << endl;
						cout << " finish.  Upon closer inspection, you find it" << endl;
						cout << " jammed, burning the bread to a lovely shade " << endl;
						cout << " of jet black.                               " << endl;
						cout << endl;
						cout << " Surprisingly, you manage to drag the toast  " << endl;
						cout << " out with a fork, and didn't electrocute or  " << endl;
						cout << " burn yourself in the process...  but your   " << endl;
						cout << " breakfast is beyond salvation.              " << endl;
						cout << endl;
						cout << "      8=8===========================8=8      " << endl;
						cout << "                  o--o0o--o                  " << endl;
						cout << endl;
						cout << endl;

						score[BREAKFAST][0] += 50;
						eventTWO = false;

						system("pause");
						system("CLS");
					}

					cout << endl;
					cout << endl;
					cout << "                  o--o0o--o                  " << endl;
					cout << "      8=8===========================8=8      " << endl;
					cout << endl;
					cout << " You look over at the clock on the wall...   " << endl;
					cout << endl;
					cout << "                    08:30 am                 " << endl;
					cout << endl;
					cout << " Damn... you are running late for work...    " << endl;
					cout << " You have three options you can take to try  " << endl;
					cout << " and get to work on time.  You could WALK to " << endl;
					cout << " work... but you doubt you'd be able to make " << endl;
					cout << " it in time.  You could call an uber to take " << endl;
					cout << " you there by CAR.  Or you can rush for the  " << endl;
					cout << " BUS and hope you make it.                   " << endl;
					cout << endl;
					cout << "        | WALK |   | CAR |   | BUS |         " << endl;
					cout << endl;
					cin >> choices;
					cout << endl;

					if ((choices == "WALK") || (choices == "walk"))
					{
						cout << " You deside to take the scenic option and    " << endl;
						cout << " walk to work.  Although a healthy option, in" << endl;
						cout << " your rush to get to work on time you are not" << endl;
						cout << " looking both ways every time you cross the  " << endl;
						cout << " street.                                     " << endl;
						cout << endl;
						cout << " Ironically... you have not been hit by any  " << endl;
						cout << " oncoming traffic... but a large sinkhole has" << endl;
						cout << " appeared beneath you, caused by the recent  " << endl;
						cout << " sever thunderstorms.                        " << endl;
						cout << endl;
						cout << " As you tumble down through the darkness, you" << endl;
						cout << " think to yourself:  ''...should have got an " << endl;
						cout << " uber...''                                   " << endl;
						cout << endl;
						cout << "      8=8===========================8=8      " << endl;
						cout << "                  o--o0o--o                  " << endl;
						cout << endl;
						cout << endl;

						eventTHREE = false;
						system("pause");
						system("CLS");

						break;
					}
					else if ((choices == "CAR") || (choices == "car"))
					{
						cout << " Your uber driver pulls up outside the house " << endl;
						cout << " and you eagerly jump in ready to leave.  He " << endl;
						cout << " seems friendly enough... but you do not rea-" << endl;
						cout << " lise that he has not been taking his medica-" << endl;
						cout << " tion... and suddenly believes you are both  " << endl;
						cout << " being chased down by an enormous crazed ele-" << endl;
						cout << " phant.                                      " << endl;
						cout << endl;
						cout << " You grip the door of the car as he floors it" << endl;
						cout << " through town.  He veers to the left and aims" << endl;
						cout << " towards the river... explaining calmly that " << endl;
						cout << " it's the only way to escape... as elephants " << endl;
						cout << " can't swim on Saturday's...                 " << endl;
						cout << endl;
						cout << " Who would have thought that ordering a lift " << endl;
						cout << " from a random person on the internet could  " << endl;
						cout << " ever have been such a bad idea?             " << endl;
						cout << endl;
						cout << "      8=8===========================8=8      " << endl;
						cout << "                  o--o0o--o                  " << endl;
						cout << endl;
						cout << endl;

						score[TRANSPORT][0] += 50;
						eventTHREE = false;

						system("pause");
						system("CLS");

						break;
					}
					else if ((choices == "BUS") || (choices == "bus"))
					{
						cout << " You bolt out of the door towards the bus    " << endl;
						cout << " stop, and just manage to catch it...        " << endl;
						cout << endl;
						cout << " As you take your seat towards the back, you " << endl;
						cout << " silently congratulate yourself on making the" << endl;
						cout << " more evironmentally moral choice of public  " << endl;
						cout << " transport, and bask in the accompanying smu-" << endl;
						cout << " gness it brings with the other passengers.  " << endl;
						cout << endl;
						cout << "      8=8===========================8=8      " << endl;
						cout << "                  o--o0o--o                  " << endl;
						cout << endl;
						cout << endl;

						score[TRANSPORT][0] += 100;
						eventTHREE = true;
						system("pause");
						system("CLS");

						break;
					}
				}
			}

			loops[0] += 1;

			if ((eventONE == true) && (eventTWO == true) && (eventTHREE == true))
			{
				break;
			}
			else if ((eventONE == true) && (eventTWO == false) && (eventTHREE == true))
			{
				cout << endl;
				cout << endl;
				cout << "                  o--o0o--o                  " << endl;
				cout << "      8=8===========================8=8      " << endl;
				cout << endl;
				cout << " You arrive at work on time... however you   " << endl;
				cout << " feel faint as you enter youw workplace, due " << endl;
				cout << " to a lack of breakfast.                     " << endl;
				cout << endl;
				cout << " As you head towards your desk, you have a   " << endl;
				cout << " dizzy spell and fall... smacking your head  " << endl;
				cout << " against the corner.                         " << endl;
				cout << endl;
				cout << "      8=8===========================8=8      " << endl;
				cout << "                  o--o0o--o                  " << endl;
				cout << endl;
				cout << endl;

				system("pause");
				system("CLS");
			}
			else if ((eventONE == false) && (eventTWO == true) && (eventTHREE == true))
			{
				cout << endl;
				cout << endl;
				cout << "                  o--o0o--o                  " << endl;
				cout << "      8=8===========================8=8      " << endl;
				cout << endl;
				cout << " You arrive at work on time... however the   " << endl;
				cout << " mild concussion you sustained this morning  " << endl;
				cout << " has been effecting your concentration.      " << endl;
				cout << endl;
				cout << " You fail to notice the open cellar door of  " << endl;
				cout << " the local bar, and shoot straight down the  " << endl;
				cout << " hatch head first into the metal casks below." << endl;
				cout << endl;
				cout << "      8=8===========================8=8      " << endl;
				cout << "                  o--o0o--o                  " << endl;
				cout << endl;
				cout << endl;

				system("pause");
				system("CLS");
			}

			eventONE = false;
			eventTWO = false;
			eventTHREE = false;
		}

		/* GAME ENDING */

		cout << endl;
		cout << endl;
		cout << "                  o--o0o--o                  " << endl;
		cout << "      8=8===========================8=8      " << endl;
		cout << endl;
		cout << " You have a lovely, productive, uneventful   " << endl;
		cout << " day at work.  When you return home and go to" << endl;
		cout << " bed you sleep soundly.                      " << endl;
		cout << endl;
		cout << "   *BUZZ*  *BUZZ*  *BUZZ*  *BUZZ*  *BUZZ*    " << endl;
		cout << endl;
		cout << " You glare at the alarm clock...             " << endl;
		cout << endl;
		cout << "            07:00 AM  18/10/2020             " << endl;
		cout << endl;
		cout << " Congratulations, you escaped your fate and  " << endl;
		cout << " have broken the time loop." << endl;
		cout << endl;
		cout << "    Would you like to see the SCOREBOARD?    " << endl;
		cout << "           |   YES   |  |   NO   |           " << endl;
		cin >> choices;
		system("CLS");

		if ((choices == "YES") || (choices == "yes"))
		{
			cout << endl;
			cout << endl;
			cout << "     HIGHEST SCORE WITH LOWEST LOOPS WINS    " << endl;
			cout << endl;
			cout << "                  o--o0o--o                  " << endl;
			cout << " 8=8=============LEADERBOARD=============8=8 " << endl;
			cout << "  |  NAME           LOOPS          SCORE  |  " << endl;
			cout << "  |                                       |  " << endl;

			for (int i = 0; i <= TOTALNAMES - 1; i++)
			{
				cout << "  |  " << playerNAME[i];
				for (int j = 0; j <= 15 - size(playerNAME[i]); j++)
				{
					cout << " ";

				}
				int loopSIZE = 1, temp = loops[0];
				if (loops[0] >= 10)
				{
					loopSIZE = 0;
					while (temp != 0)
					{
						temp = temp / 10;
						loopSIZE++;
					}
				}
				for (int k = 0; k <= (2 - loopSIZE); k++)
				{
					cout << "0";
				}
				cout << loops[i];
				totalSCORE[i] = score[ALARM][i] + score[BREAKFAST][i] + score[TRANSPORT][i];
				int scoreSIZE = 1, temp2 = totalSCORE[i];
				if (totalSCORE[i] >= 10)
				{
					scoreSIZE = 0;
					while (temp2 != 0)
					{
						temp2 = temp2 / 10;
						scoreSIZE++;
					}
				}
				for (int l = 0; l <= 15 - scoreSIZE; l++)
				{
					cout << " ";
				}
				cout << totalSCORE[i];
				cout << "  |  " << endl;
			}

			cout << "  |                                       |  " << endl;
			cout << " 8=8=====================================8=8 " << endl;
			cout << "                  o--o0o--o                  " << endl;
			cout << endl;
			cout << endl;

			system("pause");
			system("CLS");
		}

		cout << endl;
		cout << endl;
		cout << "         Would you like to play again?       " << endl;
		cout << "           |   YES   |  |   NO   |           " << endl;
		cout << endl;
		cin >> choices;

		if ((choices == "YES") || (choices == "yes"))
		{
			eventONE = false;
			eventTWO = false;
			eventTHREE = false;
			score[ALARM][0] = 0;
			score[BREAKFAST][0] = 0;
			score[TRANSPORT][0] = 0;
			totalSCORE[0] = 0;
		}
		else
		{
			play = false;
		}
		system("CLS");
	}
	cout << endl;
	cout << endl;
	cout << "                  o--o0o--o                  " << endl;
	cout << "      8=8===========================8=8      " << endl;
	cout << "       |      THANKS FOR PLAYING     |" << endl;
	cout << "      8=8===========================8=8      " << endl;
	cout << "                  o--o0o--o                  " << endl;
	cout << endl;
	cout << endl;

	return 0;
}

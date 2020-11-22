#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

bool play = true, gameOver = false;
enum statNames { LOCATION, TURNS, HEALTH, ATTACK, DEFENCE, EVASION, KILLS, TOTALSTATS };
int playerStats[TOTALSTATS]{ 0,0,100,0,0,0,0 }, die;
string choice = "YES", enemyChoice;

int dice(), statRoll(), statView(), output(), battle(), reset();

int main()
{
	while (play == true)
	{
		cout << " Rolling for stats..." << endl;
		cout << endl;
		system("pause");
		system("CLS");
		statRoll();
		cout << " These are your stats for this game:" << endl;
		cout << endl;
		cout << " ATTACK:           " << playerStats[ATTACK] << endl;
		cout << " DEFENCE:          " << playerStats[DEFENCE] << endl;
		cout << " EVASION:          " << playerStats[EVASION] << endl;
		cout << endl;
		system("pause");
		system("CLS");

		for (playerStats[TURNS]; playerStats[HEALTH] > 0; playerStats[TURNS]++)
		{
			if (gameOver == true)
			{
				break;
			}

			if (playerStats[LOCATION] < 100)
			{
				cout << endl;
				cout << " Roll Dice, or view stats?" << endl;
				cout << "   | DICE |  | STATS |" << endl;
				cout << endl;
				cin >> choice;
				system("CLS");
				cout << endl;
				if (choice == "DICE")
				{
					dice();
					playerStats[LOCATION] += die;
					output();
				}
				else
				{
					statView();
					playerStats[TURNS]--;
				}
			}
			else
			{
				break;
			}
		}

		cout << endl;
		cout << " Play again?" << endl;
		cout << " | YES |  | NO |" << endl;
		cin >> choice;
		if (choice == "NO")
		{
			play = false;
		}

		system("CLS");

		reset();
	}
	return 0;
}

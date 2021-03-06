#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

extern bool play, gameOver;
extern enum statNames { LOCATION, TURNS, HEALTH, ATTACK, DEFENCE, EVASION, KILLS, TOTALSTATS };
extern int playerStats[TOTALSTATS], die;
extern string choice, enemyChoice;

int dice(), statRoll(), statView(), output(), battle(), reset();

int battle()
{
	srand((time(0)));
	int enemyHealth = 100, enemyAttack = (rand() % 6) + 9, enemyDefence = (rand() % 6) + 9, enemyEvasion = (rand() % 6) + 13;

	cout << " A giant snake has appeared to attack you." << endl;
	system("pause");
	system("CLS");

	while (enemyHealth > 0)
	{
		if (playerStats[HEALTH] > 0)
		{
			cout << " Your Turn...  " << endl;
			cout << " YOUR HEALTH:  " << playerStats[HEALTH] << endl;
			cout << " ENEMY HEALTH  " << enemyHealth << endl;
			cout << " | ATTACK | DEFEND | ESCAPE |" << endl;
			cout << endl;
			cin >> choice;
			cout << endl;

			if (choice == "ATTACK")
			{
				dice();

				if (enemyChoice == "DEFEND")
				{
					enemyHealth -= (playerStats[ATTACK] + die) - enemyDefence;
					cout << " You have damaged the SNAKE for " << (playerStats[ATTACK] + die) - enemyDefence << " damage!" << endl;
					system("pause");
					system("CLS");

				}
				else
				{
					enemyHealth -= playerStats[ATTACK] + die;
					cout << " You have damaged the SNAKE for " << playerStats[ATTACK] + die << " damage!" << endl;
					system("pause");
					system("CLS");
				}
			}
			else if (choice == "DEFEND")
			{
				cout << " You have chosen to DEFEND!" << endl;
				system("pause");
				system("CLS");
			}
			else if (choice == "ESCAPE")
			{
				dice();
				if ((playerStats[EVASION] + die) > enemyEvasion)
				{
					cout << "You successfully escaped the SNAKE!" << endl;
					dice();
					cout << " But you have gone back " << die << " spaces!" << endl;
					playerStats[LOCATION] -= die;
					if (playerStats[LOCATION] < 0)
					{
						playerStats[LOCATION] = 0;
					}
					system("pause");
					system("CLS");
					break;
				}
				else
				{
					cout << " You failed to escape!" << endl;
					system("pause");
					system("CLS");
				}
			}
		}
		else
		{
			cout << " You were defeated by the SNAKE!" << endl;
			system("pause");
			system("CLS");
			gameOver = true;
			break;
		}

		if (enemyHealth > 0)
		{
			enemyChoice = "NULL";
			dice();
			if (die > 3)
			{
				cout << " The SNAKE has chosen to ATTACK!" << endl;
				cout << " SNAKE attacks for " << enemyAttack + die << " damage!" << endl;
				cout << endl;
				playerStats[HEALTH] -= enemyAttack + die;
			}
			else
			{
				cout << " The SNAKE has chosen to DEFEND!" << endl;
				enemyChoice = "DEFEND";
				cout << endl;
			}
			system("pause");
			system("CLS");
		}
		else
		{
			cout << " Congratulations... You successfully defeated the SNAKE!" << endl;
			system("pause");
			system("CLS");
			playerStats[KILLS]++;
		}
	}

	return 0;
}

int statView()
{
	cout << " CURRENT LOCATION: " << playerStats[LOCATION] << endl;
	cout << " SPACES LEFT:      " << 100 - playerStats[LOCATION] << endl;
	cout << " TURNS TAKEN:      " << playerStats[TURNS] << endl;
	cout << " SNAKES KILLED:    " << playerStats[KILLS] << endl;
	cout << endl;
	cout << " HEALTH:           " << playerStats[HEALTH] << endl;
	cout << " ATTACK:           " << playerStats[ATTACK] << endl;
	cout << " DEFENCE:          " << playerStats[DEFENCE] << endl;
	cout << " EVASION:          " << playerStats[EVASION] << endl;
	cout << endl;
	system("pause");
	system("CLS");
	return 0;
}

int output()
{
	cout << " You have moved " << die << " spaces." << endl;
	if (playerStats[LOCATION] >= 100)
	{
		cout << " Congratulations, You have won the game!" << endl;
	}
	else
	{
		dice();
		switch (die)
		{
		case 1:
		{
			if (playerStats[HEALTH] < 100)
			{
				cout << " You have regained 30 health!" << endl;
				playerStats[HEALTH] += 30;
			}
			if (playerStats[HEALTH] > 100)
			{
				playerStats[HEALTH] = 100;
			}
			break;
		}
		case 2:
		{
			battle();
			break;
		}
		case 3:
		{
			break;
		}
		case 4:
		{
			if (playerStats[HEALTH] < 100)
			{
				cout << " You have regained 30 health!" << endl;
				playerStats[HEALTH] += 30;
			}
			if (playerStats[HEALTH] > 100)
			{
				playerStats[HEALTH] = 100;
			}
			break;
		}
		case 5:
		{
			battle();
			break;
		}
		case 6:
		{
			if (playerStats[HEALTH] < 100)
			{
				cout << " You have fully regained health!" << endl;
				playerStats[HEALTH] = 100;
			}
			break;
		}
		}
	}
	return 0;
}

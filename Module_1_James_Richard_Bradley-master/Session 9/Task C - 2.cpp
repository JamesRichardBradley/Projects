#include <iostream>
#include <string>
#include <Windows.h>
#include <cstdlib>
#include <ctime>

using namespace std;

class playerStats
{
public:
	string forename;
	string surname;
	int health, attack, defence, luck;

	playerStats()
	{
		forename = "DEFAULT";
		surname = "DEFAULT";
		health = 100;
		attack = 20;
		defence = 20;
		luck = 12;
	}

	void getStats()
	{
		cout << "  Please Enter your characters first name:" << endl;
		cout << "  ";
		cin >> forename;
		cout << "  Please Enter your characters last name:" << endl;
		cout << "  ";
		cin >> surname;

		srand((time(0)));

		attack = (rand() % 20) + 1;
		defence = (rand() % 20) + 1;
		luck = (rand() % 20) + 1;
	}

	void callStats()
	{
		cout << "  " << forename << endl;
		cout << "  " << surname << endl;
		cout << "  " << health << endl;
		cout << "  " << attack << endl;
		cout << "  " << defence << endl;
		cout << "  " << luck << endl;
		cout << "  " << endl;
	}
};

playerStats* initial = new playerStats;
playerStats* player1 = new playerStats;
playerStats* player2 = new playerStats;

int main()
{
	cout << "  D&D Character Stat Roller v0.1" << endl;
	cout << endl;
	cout << "  Default Stats:" << endl;
	initial->callStats();
	cout << endl;
	cout << "  Player 1:" << endl;
	player1->getStats();
	cout << "  Player 1 Stats:" << endl;
	player1->callStats();
	cout << endl;
	cout << "  Player 2:" << endl;
	player2->getStats();
	cout << "  Player 2 Stats:" << endl;
	player2->callStats();

	return 0;
}

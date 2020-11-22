#include <iostream>
#include <string>
#include <Windows.h>
#include <cstdlib>
#include <ctime>

using namespace std;

struct playerStats
{
	string forename = "DEFAULT";
	string surname = "DEFAULT";
	int health = 100, attack = 20, defence = 20, luck = 12;
};

playerStats* player1 = new playerStats;

void statRoller()
{
	cout << "  Default Stats:" << endl;
	cout << "  " << player1->forename << endl;
	cout << "  " << player1->surname << endl;
	cout << "  " << player1->health << endl;
	cout << "  " << player1->attack << endl;
	cout << "  " << player1->defence << endl;
	cout << "  " << player1->luck << endl;
	cout << "  " << endl;

	cout << "  Please Enter your characters first name:" << endl;
	cin >> player1->forename;
	cout << "  Please Enter your characters last name:" << endl;
	cin >> player1->surname;

	srand((time(0)));

	player1->attack = (rand() % 20) + 1;
	player1->defence = (rand() % 20) + 1;
	player1->luck = (rand() % 20) + 1;

	cout << "  New Stats:" << endl;
	cout << "  " << player1->forename << endl;
	cout << "  " << player1->surname << endl;
	cout << "  " << player1->health << endl;
	cout << "  " << player1->attack << endl;
	cout << "  " << player1->defence << endl;
	cout << "  " << player1->luck << endl;
	cout << "  " << endl;
}

int main()
{
	cout << "  D&D Character Stat Roller v0.1" << endl;
	cout << endl;
	statRoller();


	return 0;
}

#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;
enum direction {NORTH=1, EAST, SOUTH, WEST};
int choice = 0;
string yesNo;

int main()
{
	cout << endl;
	cout << " THE WHEEL OF MORBIDITY" << endl;
	cout << endl;
	cout << " You wake up in a room... with four corridors leading from each side... and a pair of dice at your feet..." << endl;
	cout << endl;
	cout << " Roll the dice to see which corridor you take:" << endl;
	cout << " | YES | NO |";
	cout << endl;
	cin >> yesNo;
	cout << endl;

	if (yesNo == "YES")
	{

		while (yesNo == "YES")
		{
			choice = rand() % 4 + 1;

			switch (choice)
			{
			case direction::NORTH:
				cout << " You head towards the NORTH corridor... A boulder appear from a trapdoor in the ceiling..." << endl;
				cout << " You have been crushed to death..." << endl;
				cout << endl;
				cout << " Roll the dice again?" << endl;
				cout << " | YES | NO |";
				cout << endl;
				cin >> yesNo;
				break;

			case direction::EAST:
				cout << " You head towards the EAST corridor... The floor below you opens up and you fall into lava..." << endl;
				cout << " You have burned to death..." << endl;
				cout << endl;
				cout << " Roll the dice again?" << endl;
				cout << " | YES | NO |";
				cout << endl;
				cin >> yesNo;
				break;

			case direction::SOUTH:
				cout << " You head towards the SOUTH corridor... A black hole forms before you, and you feel yourself being pulled into it..." << endl;
				cout << " You have been atomised..." << endl;
				cout << endl;
				cout << " Roll the dice again?" << endl;
				cout << " | YES | NO |";
				cout << endl;
				cin >> yesNo;
				break;

			case direction::WEST:
				cout << " You head towards the WEST corridor... You come across a cute kitten... you are allergic to cat hair..." << endl;
				cout << " You have died of Anaphylaxis..." << endl;
				cout << endl;
				cout << " Roll the dice again?" << endl;
				cout << " | YES | NO |";
				cout << endl;
				cin >> yesNo;
				break;

			}
		}
	}
	else
	{
		cout << " Your inabilty to grasp the concept of rolling dice has led you to stand in place..." << endl;
		cout << " For all eternity... You have starved to death..." << endl;
		cout << endl;
	}
}

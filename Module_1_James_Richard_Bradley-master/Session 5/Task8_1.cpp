#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

int die, location = 0;

int dice()
{
	srand((time(0)));
	die = (rand() % 6) + 1;
	return die;
}

int main()
{
	while (location < 12)
	{
		cout << endl;
		cout << "Roll Dice" << endl;
		cout << endl;
		system("pause");
		system("CLS");
		cout << endl;
		dice();
		location += die;
		
		switch (location)
		{
			default:
			{
				cout << "You have moved " << die << " spaces." << endl;
				if (location >= 12)
				{
					cout << "Congratulations, You have won the game!" << endl;
				}
				else
				{
					cout << "You landed on square " << location << "." << endl;
					cout << endl;
					system("pause");
					system("CLS");
				}
				continue;
			}
			case 3:
			{
				cout << "You have moved " << die << " spaces." << endl;
				if (location >= 12)
				{
					cout << "Congratulations, You have won the game!" << endl;
				}
				else
				{
					cout << "You landed on square " << location << "." << endl;
					cout << "Go back 2 spaces." << endl;
					location -= 2;
					cout << "You are now on square " << location << "." << endl;
					cout << endl;
					system("pause");
					system("CLS");
				}
				continue;
			}
			case 7:
			{
				cout << "You have moved " << die << " spaces." << endl;
				if (location >= 12)
				{
					cout << "Congratulations, You have won the game!" << endl;
				}
				else
				{
					cout << "You landed on square " << location << "." << endl;
					cout << "Go back 2 spaces." << endl;
					location -= 2;
					cout << "You are now on square " << location << "." << endl;
					cout << endl;
					system("pause");
					system("CLS");
				}
				continue;
			}
			case 10:
			{
				cout << "You have moved " << die << " spaces." << endl;
				if (location >= 12)
				{
					cout << "Congratulations, You have won the game!" << endl;
				}
				else
				{
					cout << "You landed on square " << location << "." << endl;
					cout << "Go back 5 spaces." << endl;
					location -= 5;
					cout << "You are now on square " << location << "." << endl;
					cout << endl;
					system("pause");
					system("CLS");
				}
				continue;
			}
		}
	}

	return 0;
}

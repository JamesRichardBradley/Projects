#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

bool play = true;
int die, location = 0, turns = 0;

int dice()
{
	srand((time(0)));
	die = (rand() % 6) + 1;
	return die;
}
int stats()
{
	cout << "CURRENT LOCATION: " << location << endl;
	cout << "SPACES LEFT:      " << 12 - location << endl;
	cout << "TURNS TAKEN:      " << turns << endl;
	cout << "TURNS REMAINING:  " << 10 - turns << endl;
	cout << endl;
	system("pause");
	system("CLS");
	return 0;
}

int reset()
{
	location = 0;
	turns = 0;
	die = 0;
	return 0;
}

int output()
{
	cout << "You have moved " << die << " spaces." << endl;
	if (location >= 12)
	{
		cout << "Congratulations, You have won the game!" << endl;
	}
	else if (turns > 10)
	{
		cout << "You ran out of turns!" << endl;
		cout << endl;
	}
	else
	{
		switch (location)
		{
		default:
		{
			cout << "You landed on square " << location << "." << endl;
			cout << endl;
			system("pause");
			system("CLS");
			break;
		}
		case 3:
		{
			cout << "You landed on square " << location << "." << endl;
			cout << "Go back 2 spaces." << endl;
			location -= 2;
			cout << "You are now on square " << location << "." << endl;
			cout << endl;
			system("pause");
			system("CLS");
			break;
		}
		case 7:
		{
			cout << "You landed on square " << location << "." << endl;
			cout << "Go back 2 spaces." << endl;
			location -= 2;
			cout << "You are now on square " << location << "." << endl;
			cout << endl;
			system("pause");
			system("CLS");
			break;
		}
		case 10:
		{
			cout << "You landed on square " << location << "." << endl;
			cout << "Go back 5 spaces." << endl;
			location -= 5;
			cout << "You are now on square " << location << "." << endl;
			cout << endl;
			system("pause");
			system("CLS");
			break;
		}
		}
	}
	return 0;
}

int main()
{
	string choice = "YES";

	while (play == true)
	{
		for (turns; turns <11; turns++)
		{
			if (location < 12)
			{
				cout << endl;
				cout << "Roll Dice, or view stats?" << endl;
				cout << "   | DICE |  | STATS |" << endl;
				cout << endl;
				cin >> choice;
				system("CLS");
				cout << endl;
				if (choice == "DICE")
				{
					dice();
					location += die;
					output();
				}
				else
				{
					stats();
					turns--;
				}
			}
			else
			{
				break;
			}
		}

		cout << endl;
		cout << "Play again?" << endl;
		cout << "| YES |  | NO |" << endl;
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

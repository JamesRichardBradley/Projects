#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

int main()
{
	bool play = true;
	string playChoice = "YES";
	
	while (play == true)
	{
		int guess;
		int secretNumber = (rand() % 10 + 1);
		int turns = 5;

		cout << " Hello... I want to play a game..." << endl;
		cout << " I'm going to choose a number between 1 - 10..." << endl;

		do
		{
			cout << endl;
			cout << " You have " << turns << " turns to guess..." << endl;
			cout << endl;
			cin >> guess;
			cout << endl;
			--turns;

			if (guess == secretNumber)
			{
				cout << "Congratulations, you guessed the right answer!" << endl;
				cout << "It took " << 5 - turns << " turns!" << endl;
				cout << endl;
				break;
			}
			else if (guess > secretNumber)
			{
				cout << " You guessed TOO HIGH" << endl;
			}
			else if (guess < secretNumber)
			{
				cout << " You guessed TOO LOW..." << endl;
			}

		} while (turns > 0);

		cout << " Would you like to play again?" << endl;
		cout << "      | YES | | NO |" << endl;
		cin >> playChoice;

		if (playChoice == "YES")
			{
			play = true;
			}
		else
		{
			play = false;
		}
	}
	
	cout << endl;
	cout << " Thanks for playing." << endl;

	return 0;
}

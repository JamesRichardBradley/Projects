#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

enum playerNumber { SERENA, AMY, RAYE, LITA, MINA, PLAYER, TOTALPLAYERS };
int score[6] = { 200,800,500,650,400,0 };
string playerNames[6]{ "SERENA","AMY","RAYE","LITA","MINA" }, choice;

int main()
{

	cout << " Please enter your name:" << endl;
	cin >> playerNames[5];
	cout << endl;
	cout << " Please enter your score:" << endl;
	cin >> score[5];
	cout << endl;

	cout << "             o--o0o--o             " << endl;
	cout << " 8=8========LEADERBOARD========8=8 " << endl;
	cout << "  |  NAME                SCORE  |  " << endl;
	cout << "  |                             |  " << endl;

	for (int j = 0; j <= TOTALPLAYERS -1; j++)
	{
		int temp = score[j], tempPos = 0;

		if (temp <= 9)
		{
			tempPos = 1;
		}
		else
		{
			while (temp != 0)
			{
					temp = temp / 10;
					tempPos++;
			}
		}

		int positionOne = 24 - (size(playerNames[j]) + tempPos);

		cout << "  |  " << playerNames[j];
		for (int k = 0; k <= positionOne; k++)
		{
			cout << " ";
		}
		cout << score[j];
		cout << "  |" << endl;
	}

	cout << "  |                             |  " << endl;
	cout << " 8=8===========================8=8 " << endl;
	cout << "             o--o0o--o             " << endl;
	cout << endl;

	cout << " Would you like to know how your score compared to the others?" << endl;
	cout << " | YES |     | NO |" << endl;
	cin >> choice;
	cout << endl;

	if (choice == "YES")
	{
		int average, totalScore{}, l = 0;

		for (l = 0; l <= TOTALPLAYERS - 1 ; l++)
		{
			totalScore = totalScore + score[l];
		}

		average = totalScore / l;

		if (score[5] > average)
		{
			cout << " Congratulations, your score of " << score[5] << " is definitely" << endl;
			cout << " above average." << endl;
			cout << endl;
		}
		else if (score[5] == average)
		{
			cout << " Your score of " << score[5] << " is decidedly... average..." << endl;
			cout << endl;
		}
		else
		{
			cout << " I think you know in your heart of hearts... " << score[5] << endl;
			cout << " isn't going to be above average... is it...?" << endl;
			cout << endl;
		}
	}

	cout << " Goodbye..." << endl;
	cout << endl;

	return 0;
}

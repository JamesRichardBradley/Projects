// Source.cpp is the root file for the entire game

#include "Source.h"

// String to store user selections
string choice;

// Converts user unput to ALL CAPITALS, reduces errors caused by incorrectly typed options
void caseConversion()
{
	transform(choice.begin(), choice.end(), choice.begin(), toupper);
}

int main()
{
	while (choice != "EXIT")
	{
		system("CLS");
		title();
		menu();
		cout << "  Please enter your selection: ";
		cin >> choice;
		caseConversion();
		cout << endl;

		if (choice == "PLAY")
		{
			system("CLS");
			cardGame();
			system("pause");
		}
		else if (choice == "INFO")
		{
			system("CLS");
			info();
			system("pause");
		}
		else if (choice == "EXIT")
		{
			exit(0);
		}
		else
		{
			cout << "  That is not a valid selection." << endl;
			cout << "  ";
			system("pause");

		}
	}

	return 0;

}

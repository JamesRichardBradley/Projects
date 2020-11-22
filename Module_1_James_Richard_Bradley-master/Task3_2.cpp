#include <iostream>												
#include <string>

using namespace std;

int firstNumber=0, secondNumber=0;
float result;
string selection;

int main() 
{
	cout << "Welcome to the AMAZING CONSOLE CALCULATOR-NATOR!!!" << endl;
	cout << " " << endl;
	cout << "Please choose what you wish to do: " << endl;
	cout << "| ARITHMATIC | ODD/EVEN | PRIME |" << endl;
	cout << " " << endl;
	cin >> selection;

		if (selection == "ARITHMATIC")
		{
			char computation;

			cout << "Please enter your first value: " << endl;
			cin >> firstNumber;
			cout << " " << endl;
			cout << "Your first value is: " << firstNumber << "... GREAT!!!" << endl;
			cout << " " << endl;
			cout << "Please enter your second value: " << endl;
			cin >> secondNumber;
			cout << " " << endl;
			cout << "Your second value is: " << secondNumber << "... AMAZING!!!" << endl;
			cout << " " << endl;
			cout << "OK... we're almost there!!!" << endl;
			cout << "Now... What would you like me to do with these values? " << endl;
			cout << "| Add: '+' | Subtract: '-' | Multiply: '*' | Divide: '/' |" << endl;
			cin >> computation;
			cout << " " << endl;
			cout << "OK... HERE WE GO!!!" << endl;
			cout << " " << endl;

				if (computation == '+') {
					result = firstNumber + secondNumber;
				}
				else if (computation == '-') {
					result = firstNumber - secondNumber;
				}
				else if (computation == '*') {
					result = static_cast<float>(firstNumber) * static_cast<float>(secondNumber);
				}
				else if (computation == '/') {
					result = static_cast<float>(firstNumber) / static_cast<float>(secondNumber);
				}
				else
				{
					cout << "Look... work with me here... type in one of the four symbols next time yeah?" << endl;
				}

			cout << "OK... results are in... and your answer is..." << endl;
			cout << result;
			cout << " " << endl;
		}

		else if (selection == "ODD/EVEN") {

			cout << "Please enter a value: " << endl;
			cin >> firstNumber;
			cout << " " << endl;
			cout << "Your value is: " << firstNumber << endl;
			cout << " " << endl;
			cout << "GREAT!!!" << endl;
			cout << " " << endl;

				if (firstNumber % 2 == 0)
					cout << "The value you entered is EVEN!!!" << endl;
				else
					cout << "The value you entered is ODD!!!" << endl;
		}

		else if (selection == "PRIME")
		{
			cout << "Please enter a value: " << endl;
			cin >> firstNumber;
			cout << " " << endl;
			cout << "Your value is: " << firstNumber << "... GREAT!!!" << endl;
			cout << " " << endl;

			int half = firstNumber / 2;
			bool prime = true;

				for (secondNumber = 2; secondNumber <= half; secondNumber++)
				{
					if (firstNumber % secondNumber == 0)
					{
						prime = false;
					}
				}

				if (prime == true)
				{
					cout << firstNumber << " is PRIME!!!" << endl;
				}

				else
				{
					cout << firstNumber << " is NOT PRIME!!!" << endl;
				}
		}

		else
		{
			cout << "Look... I'm not an Oracle... give me the information I asked for or we won't get anywhere... will we." << endl;
		}

	return 0;
}

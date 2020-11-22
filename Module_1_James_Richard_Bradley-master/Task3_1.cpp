#include <iostream>												
#include <string>
using namespace std;

int firstNumber, secondNumber;
float result;
char computation;


int main() {

	cout << "Welcome to the AMAZING CONSOLE CALCULATORNATOR!!!" << endl; {
		cout << " " << endl;
		cout << "Please enter your first value: " << endl;
		cin >> firstNumber;
		cout << " " << endl;
		cout << "Your first value is: " << firstNumber << endl;
		cout << " " << endl;
		cout << "GREAT!!!" << endl;
		cout << " " << endl;
		cout << "Please enter your second value: " << endl;
		cin >> secondNumber;
		cout << " " << endl;
		cout << "Your second value is: " << secondNumber << endl;
		cout << " " << endl;
		cout << "AMAZING!!!" << endl;
		cout << " " << endl;
		cout << "OK... we're almost there!!!" << endl;
		cout << " " << endl;
		cout << "Now... What would you like me to do with these values? " << endl;
		cout << "Add: +   Subtract: -   Multiply: *   Divide: /" << endl;
		cin >> computation;
		cout << " " << endl;
		cout << "OK... HERE WE GO!!!" << endl;
		cout << " " << endl; }


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
		cout << "Look... work with me here... type in one of the four symbols next time yeah?" << endl;

	cout << "OK... results are in... and your answer is..." << endl;
	cout << result;
	cout << " " << endl;

	return 0;
}

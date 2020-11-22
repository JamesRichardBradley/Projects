#include <iostream>
#include <string>

using namespace std;

int main()
{
	bool again = true;
	string choice;

	while (again == true)
	{
		int* score = new int;
		int number{};
		cout << "Enter Number:" << endl;
		cin >> number;
		cout << endl;

		*score = number;

		cout << "Score address   =   " << &score << endl;
		cout << "Score value     =   " << *score << endl;
		cout << endl;
		cout << "Again? Y/N" << endl;
		cin >> choice;
		cout << endl;

		delete score;

		if (choice == "N")
		{
			again = false;
		}
	}

	return 0;
}

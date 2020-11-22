
#include <iostream>
#include <string>

using namespace std;

int main()
{
	// 1.
	int score = 0;

	//2.
	int numberArray[3]{ 1,2,3 };

	for (int i : numberArray)
	{
		cout << i << endl;
	}

	//3. Create a constant string variable, initialised to "Hello". 
	//   Print out this string.

	const string message = "Hello";

	cout << message << endl;

	//4. Create a boolean variable, initialised to 'true'.

	bool choice = true;

	//5. Create an array of 3 floats, initialised to 1.1, 2.2 and 3.3.

	float floater[3]{ 1.1,2.2,3.3 };

	system("pause");
	return 0;

}

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

struct House
{
	bool hasPool;
	int totalRooms;
	short totalPeople;
};

int main()
{
	//========================================================================
	//1. Consider the struct above

	//1.1 Create a pointer to House and nullify it
	House* newHouse = NULL;

	//1.2 Create an instance of House on the heap
	House* newNewHouse = new House;

	//1.3 Add values to the newly created object
	newNewHouse->hasPool = true;
	newNewHouse->totalRooms = 42;
	newNewHouse->totalPeople = 69420;

	//1.4 Destroy the house object
	delete newNewHouse;
	newNewHouse = nullptr;

	//2.1 Create an array of House objects
	House shiteHouse[6];

	//2.2 Loop through each object and assign different values
	for (int i = 0; i < 6; i++)
	{
		shiteHouse[i].hasPool = i % 2;
		shiteHouse[i].totalRooms = i;
		shiteHouse[i].totalPeople = i;
	}

	//2.3 Test and display these values on screen
	for (int i = 0; i <6; i++)
	{
		cout << "=======================" << endl;
		cout << shiteHouse[i].hasPool << endl;
		cout << shiteHouse[i].totalRooms << endl;
		cout << shiteHouse[i].totalPeople << endl;

	}

	//3.1 Create an array of House pointers
	House* thingy[4]{};

	//3.2 Loop through the array and instantiate House objects for each pointer
	for (int i = 0; i < 4; i++)
	{
		thingy[i] = new House;
	}

	//3.3 Assign data to each element of each House object
	for (int i = 0; i < 4; i++)
	{
		thingy[i]->hasPool = true;
		thingy[i]->totalRooms = 7;
		thingy[i]->totalPeople = 60;
	}

	//3.4 Create a menu and ask the user which item they wish to remove
	int selection = 0;

	cout << "Please select which house to remove (1-4):";
	cin >> selection;

	//3.5 Find the requested House object and delete it
	delete thingy[selection - 1];
	thingy[selection - 1] = nullptr;

	//========================================================================

	system("pause");
	return 0;

}

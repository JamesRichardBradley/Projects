#include <iostream>

const int health = 100, stamina = 50;


int main()
{

	//========================================================================
	//Replace the magic numbers below with constants to make the code clearer
	//========================================================================

	std::cout << "Welcome to the game, hero! You have a total health of " << health << "\n";
	std::cout << "and are in a fit condition to fight. With this health of " << health << "\n";
	std::cout << "you will be able to fight off many enemies, but beware they will fight \n";
	std::cout << "back, and soon your health will deplete from " << health << " down to zero!\n";
	std::cout << "Your stamina is only on " << stamina << " so be careful you don't get tired\n";
	std::cout << "too fast! Heros with a stamina of " << stamina << " usually don't last long\n";

	system("pause");
	return 0;

}

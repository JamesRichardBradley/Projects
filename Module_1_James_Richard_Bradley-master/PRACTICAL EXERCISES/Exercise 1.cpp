
#include <iostream>

int main()
{

	//=======================================================
	//1.1 Rewrite this switch statement as an if/else
	//1.2 Use enumerated values to replace the magic numbers
	//=======================================================
	 
 /* switch (num)
	{
	case 0:
		std::cout << "0" << std::endl;
		break;
	case 1:
		std::cout << "1" << std::endl;
		break;
	case 2:
		std::cout << "2" << std::endl;
	} */

	int num = 1;
	enum magicNumber { ZERO, ONE, TWO };

	if (num = ZERO)
	{
		std::cout << "0" << std::endl;
	}
	else if (num = ONE)
	{
		std::cout << "1" << std::endl;
	}
	else if (num = TWO)
	{
		std::cout << "2" << std::endl;
	}
	else
	{
		std::cout << "INVALID" << std::endl;
	}

	//=======================================================
	//2. Rewrite this if-statement as a switch
	//=======================================================

	int age = 33;

	/* if (age == 24)
	{
		std::cout << "You are still very young!" << std::endl;
	}
	else if (age == 55)
	{
		std::cout << "You are getting on in life" << std::endl;
	}
	else
	{
		std::cout << "You are what you are..." << std::endl;
	} */

	switch (age)
	{
	case 24:
		std::cout << "You are still very young!" << std::endl;
		break;
	case 55:
		std::cout << "You are getting on in life" << std::endl;
		break;
	default:
		std::cout << "You are what you are..." << std::endl;
		break;
	}

	//=======================================================
	//3. Rewrite this for-loop as a while-loop
	//=======================================================

	/* for (int i = 0; i < 10; i++)
	{
		//insert your own action here...
	} */

	int i = 0;
	while (i < 10)
	{
		++i;
	}

	//=======================================================
	//4. Rewrite this do-while as a for-loop
	//=======================================================

	/* int i = 0;

	do
	{
		//insert your own action here...
		++i;
	} while (i < 25); */

	for (int i; i < 25; i++)
	{
		std::cout << i << std::endl;
	}

	system("pause");
	return 0;

}

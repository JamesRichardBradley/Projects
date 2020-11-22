#include <iostream>
#include <string>

#define PI 3.14159265359

using namespace std;
float a, b, result;

namespace square {

	int calculate()
	{

		result = a * b;
		cout << "Area of RECTANGLE is " << result << " cm^2" << endl;

		return 0;
	}
}

namespace triangle {

	int calculate()
	{

		result = (a * b) / 2;
		cout << "Area of TRIANGLE is " << result << " cm^2" << endl;

		return 0;
	}

}

namespace elipse {

	int calculate()
	{
		result = ((a / 2) * (b / 2)) * PI ;
		cout << "Area of ELIPSE is " << result << " cm^2" << endl;

		return 0;
	}

}

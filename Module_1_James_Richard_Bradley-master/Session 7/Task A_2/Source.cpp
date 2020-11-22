#include "Header.h"

int main()
{
	cout << "Please enter HEIGHT (cm)" << endl;
	cin >> a;
	cout << "Please enter WIDTH (cm)" << endl;
	cin >> b;

	square::calculate();
	triangle::calculate();
	elipse::calculate();

	system("pause");
}

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	float a, b, c, ac, bc, axc;

	cout << "Введите координаты точек A,B и C" << endl;
	cin >> a >> b >> c;

	if (c > b && c < a)
	{
		cout << "Точка С не между A и B";
	}

	else
	{
		ac = fabs(c - a);
		bc = fabs(c - b);
		axc = ac * bc;

		cout << "Произведение AC и BC равно " << axc << endl;
	}

	system("pause");
	return 0;
}

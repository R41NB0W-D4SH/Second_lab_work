#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	double x1, x2, y1, y2, a, b, p, s;
	cout << "Введите координаты противоположных вершин прямоугольника для первой точки (x1,y1) и (x2,y2)" << endl;
	cin >> x1 >> y1 >> x2 >> y2;

	if (x1 == x2 || y1 == y2)
		{
			cout << "Стороны прямоугольника не параллельны осям координат" << endl;
		}

	else
		{
		a = sqrt(pow(y2 - y1, 2));
		b = sqrt(pow(x2 - x1, 2));
		p = (a + b) * 2;
		s = a * b;

		cout << "Периметр равен " << p << endl << "Площадь равна " << s << endl;
		}

		system("pause");
	return 0;
}

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	double x1, x2, x3, y1, y2, y3, a, b, c, p, p2, s;
	cout << "Введите координаты вершин треугольника для первой точки (x1,y1), затем для второй (x2,y2) и потом для третьей (x3,y3)" << endl;
	cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;

	a = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
	b = sqrt(pow(x3 - x2, 2) + pow(y3 - y2, 2));
	c = sqrt(pow(x1 - x3, 2) + pow(y1 - y3, 2));
	p = a + b + c;
	p2 = p / 2;
	s = sqrt(p2 * (p2 - a) * (p2 - b) * (p2 - c));

	cout << "Периметр равен " << p << endl << "Площадь равна " << s << endl;

	system("pause");
	return 0;
}

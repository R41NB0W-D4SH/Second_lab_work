#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	float x1, y1, x2, y2, l;

	cout << "Введите сначала координаты первой точки, затем - второй" << endl;
	cin >> x1 >> y1 >> x2 >> y2;

	l = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
	
	cout << "Длина отрезка равна " << l;

	system("pause");
	return 0;
}

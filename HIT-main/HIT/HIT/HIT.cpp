#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int x0, y0, x1, y1, R;
	srand(time(0));
	x0 = rand() % 10;
	y0 = rand() % 10;
	R = rand() % 5 + 1;
	//cout << "[DEBUG] Центр круга: (x = " << x0 << ", y = " << y0 << ", R = " << R <<")." << endl;
	cout << "Ваш Х = "; cin >> x1;
	cout << "Ваш Y = "; cin >> y1;
	if ((x1 - x0) * (x1 - x0) + (y1 - y0) * (y1 - y0) <= R * R)
		cout << "Точка " << x0 << ", " << y0 << " потрапляе в коло з центром в точці " << x1 << ", " << y1 << " радіусом " << R << "." << endl;
	else
		cout << "Точка " << x0 << ", " << y0 << " не потрапляе в коло з центром в точці " << x1 << ", " << y1 << " радіусом " << R << "." << endl;
}
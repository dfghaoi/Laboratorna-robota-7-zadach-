#include <iostream>
using namespace std;
int main()
{
    int a, b;
	cout << "A = "; cin >> a;
	cout << "B = "; cin >> b;
	if (a > b)
		cout << "Max(A) = " << a << endl;
	else
		cout << "Max(B) = " << b << endl;
}
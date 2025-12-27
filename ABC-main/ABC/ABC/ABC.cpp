#include <iostream>
using namespace std;
int main()
{
	int A, B, C, temp;
	cout << "A = "; cin >> A;
	cout << "B = "; cin >> B;
	cout << "C = "; cin >> C;
	cout << "A = " << A << ", B = " << B << ", C = " << C << endl;
	if (A > B)
	{
		temp = A;
		A = B;
		B = temp;
	}
	if (B > C)
	{
		temp = B;
		B = C;
		C = temp;
	}
	if (A > B)
	{
		temp = A;
		A = B;
		B = temp;
	}
	cout << "A = " << A << ", B = " << B << ", C = " << C << endl;
}
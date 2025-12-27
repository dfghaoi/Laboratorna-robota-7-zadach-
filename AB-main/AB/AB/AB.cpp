#include <iostream>
using namespace std;
int main()
{
	int A, B, temp;
	cout << "A = "; cin >> A;
	cout << "B = "; cin >> B;
	cout << "A = " << A << "; B = " << B << endl;
	if (A <= B) 
		cout << "A = " << A << "; B = " << B << endl;
	else 
	{
		temp = A;
		A = B;
		B = temp;
		cout << "A = " << A << "; B = " << B << endl;
	}
}
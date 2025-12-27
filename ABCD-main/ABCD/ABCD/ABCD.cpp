#include <iostream>
using namespace std;
int main()
{
	int A, B, C, D, temp;
	cout << "A = "; cin >> A;
	cout << "B = "; cin >> B;
	cout << "C = "; cin >> C;
	cout << "D = "; cin >> D;
	cout << "A = " << A << ", B = " << B << ", C = " << C << ", D = " << D << endl;
	if (A > B) { temp = A; A = B; B = temp; }
	if (B > C) { temp = B; B = C; C = temp; }
	if (C > D) { temp = C; C = D; D = temp; }
	if (A > B) { temp = A; A = B; B = temp; }
	if (B > C) { temp = B; B = C; C = temp; }
	if (A > B) { temp = A; A = B; B = temp; }
	cout << "A = " << A << ", B = " << B << ", C = " << C << ", D = " << D << endl;
}
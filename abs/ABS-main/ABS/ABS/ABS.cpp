#include <iostream>
using namespace std;

int main()
{
    int x;
	cout << "X = "; cin >> x;
	if (x < 0) cout << "|" << x << "| = " << -x << endl;
	else cout << "|" << x << "| = " << x << endl;
}

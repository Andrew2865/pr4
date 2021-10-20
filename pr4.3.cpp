#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
	double x, xp, xk, dx,a,b,c, F;
	cout << "xp = "; cin >> xp;
	cout << "xk = "; cin >> xk;
	cout << "dx = "; cin >> dx;
	cout << fixed;
	cout << "---------------------------" << endl;
	cout << "|" << setw(5) << "x" << " |"
		<< setw(7) << "y" << " |" << endl;
	cout << "---------------------------" << endl;
	x = xp;
	while (x <= xk)
	{ 
		if (a < 0 && x != 0)
			F = a * pow(x, 2) + pow(b, 2) * x;
		if (a > 0 && x = 0)
			F = x - (a / (x - c));
		else
			F = 1 + (x / c);
		x += dx;
	}
	cout << "---------------------------" << endl;
	return 0;

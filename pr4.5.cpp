#include <iostream>
#include <iomanip>
#include <time.h>
using namespace std;
int main()
{
	double x, y,R;
	srand((unsigned)time(NULL));
	for (int i = 0; i < 10; i++)
	{
		cout << "x = "; cin >> x;
		cout << "y = "; cin >> y;
		if ((y <= (x - 1) * (x - 1) && y >= R) ||
			(y >= R && y <=sqrt( (x * x) - (R * R))))
				cout << "yes" << endl;
		else
				cout << "no" << endl;
	}

	cout << endl << fixed;


		for (int i = 0; i < 10; i++)
		{
			x = 6. * rand() / RAND_MAX - 3;
			y = 6. * rand() / RAND_MAX - 3;
			if ((y <= (x - 1) * (x - 1) && y >= R) ||
				(y >= R && y <= sqrt((x * x) - (R * R))))
				cout << setw(8) << setprecision(4) << x << " "
				<< setw(8) << setprecision(4) << y << " " << "yes" << endl;
			else
				cout << setw(8) << setprecision(4) << x << " "
				<< setw(8) << setprecision(4) << y << " " << "no" << endl;
		}
	return 0;
}
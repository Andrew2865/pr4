#include <iostream>
#include <cmath>
using namespace std;
int main() {
	double P, S;
	int j, i;
	S = 0;
	j = 2;
	while (j <= 20)
	{
		S = 0;
		j = 2;
		while (i <= j)
		{
			S +=  j / (j ^ 2) + P;
			i++;
		}
		P *= j;
		j++;
	}
	cout << P << endl;
	S = 0;
	j = 2;
	do
	{
		P = 1;
		i = 1;
		do
		{
			S += j / (j ^ 2) + P;
			
			i++;
		} while (i <= j);
		P *= j;
		j++;
	} while (j <= 20);
	cout << S << endl;
	S = 0;
	for (j = 2; j <= 20; j++)
	{
		S = 0;
		for (i = (j*j); i <= 400; i++)
		{
			S += j / (j ^ 2) + P;
		}
		P *= j;
	}
	cout << P << endl;
	S = 0;
	for (j = 20; j >= 1; j--
		)

	{
		P = 1;
		for (i = (j*j); i >= 400; i--
			)

		{
			S += j / (j ^ 2) + P;;

			

		}
		P *= j;
	}
	cout << P << endl;
	return 0;
}
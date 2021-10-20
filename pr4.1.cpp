#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int k, N, i;
	double S;
	cout << "k = "; cin >> k;
	cout << "N = "; cin >> N;
	S = 0;
	i = k;
	while (i <= N)
	{
		S += (sin(10* i)*cos(10/i))/sqrt(i);
		i++;
	}
	cout << S << endl;
		S = 0;
	i = k;
	do {
		S += (sin(10 * i) * cos(10 / i)) / sqrt(i);
		i++;
	} while (i <= N);
	cout << S << endl;
	S = 0;
	for (i = k; i <= N; i++)
	{
		S += (sin(10 * i) * cos(10 / i)) / sqrt(i);
	}
	cout << S << endl;
	S = 0;
	for (i = N; i >= k; i--)
	{
		S += (sin(10 * i) * cos(10 / i)) / sqrt(i);
	}
	cout << S << endl;
	return 0;
}
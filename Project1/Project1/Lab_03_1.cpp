#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int N, a, k;
	double S;
	a = 19;
	S = 0;

	cout << "N = "; cin >> N;

	k = N;
	while (k <= a)
	{
		S += sqrt(pow(sin(N), 2) + pow(N/k,2));
		k++;
	}
	cout << S << endl;
	
	S = 0;
	k = N;
	do {
		S += sqrt(pow(sin(N), 2) + pow(N / k, 2));
		k++;
	} while (k <= a);
	cout << S << endl;
	S = 0;
	for (k = N; k <= a; k++)
	{
		S += sqrt(pow(sin(N), 2) + pow(N / k, 2));
	}
	cout << S << endl;
	S = 0;
	for (k = a; k >= N; k--)
	{
		S += sqrt(pow(sin(N), 2) + pow(N / k, 2));
	}
	cout << S << endl;
	return 0;
}
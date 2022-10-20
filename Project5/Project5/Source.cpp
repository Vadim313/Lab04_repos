#include <iostream>
#include <iomanip>
#include <time.h>
using namespace std;
int main()
{
	double x, y, R;
	srand((unsigned)time(NULL));
	for (int i = 0; i < 10; i++)
	{
		cout << "x = "; cin >> x;
		cout << "y = "; cin >> y;
		cout << "R = "; cin >> R;
		
		if ((y >= 0 && x <= 0) && (pow(x, 2) + pow(y, 2) <= pow(R, 2))
			|| ((y <= 0 && y >= -R) && (x >= 0 && x <= R)
				&& (y >= -2 * x) && (y >= -2 * R + 2 * x)))

			cout << "yes" << endl;
		else
			cout << "no" << endl;
	}
	cout << endl << fixed;
	
	cout << "R = "; cin >> R;

	for (int i = 0; i < 10; i++)
	{
		x = 2* R * rand() / RAND_MAX - R;
		y = 2* R * rand() / RAND_MAX - R;

		if ((y >= 0 && x <= 0) && (pow(x, 2) + pow(y, 2) <= pow(R, 2))
			|| ((y <= 0 && y >= -R) && (x >= 0 && x <= R)
				&& (y >= -2 * x) && (y >= -2 * R + 2 * x)))

			cout << setw(8) << setprecision(4) << x << " "
			<< setw(8) << setprecision(4) << y << " " << "yes" << endl;
		else
			cout << setw(8) << setprecision(4) << x << " "
			<< setw(8) << setprecision(4) << y << " " << "no" << endl;
	}
	return 0;
}
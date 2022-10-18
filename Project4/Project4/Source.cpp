#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
	double x, dx, y, R, xp, xk;

	cout << "R = "; cin >> R;
	cout << "dx = "; cin >> dx;
	cout << "xp = "; cin >> xp;
	cout << "xk = "; cin >> xk;

	x = xp;
	cout << "---------------------------" << endl;
	cout << "|" << setw(6) << "x" << " |"
		<< setw(8) << "y" << " |" << endl;
	cout << "---------------------------" << endl;
	while (x <= xk)
	{
		if (x <= -8)
			y = -R;
		else
			if (-8 < x && x <= -R)
				y = (pow(R, 2) + R * x) / (-R + 8);
			else
				if (-R < x && x <= R)
					y = -sqrt(abs(pow(x, 2) - pow(R, 2)));
				else
					if (R < x && x <= 5)
						y = (2 * x - 2 * R) / (5 - R);
					else
						y = 3;
		cout << "|" << setw(7) << setprecision(2) << x
			<< " |" << setw(10) << setprecision(3) << y
			<< " |" << endl;
		x += dx;
	}
	cout << "---------------------------" << endl;
	cout << endl;
	cin.get();
	return 0;

}
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
	double R, x, y, xp, xk, dx;
	cout << "xp = "; cin >> xp;
	cout << "xk = "; cin >> xk;
	cout << "dx = "; cin >> dx;
	cout << "R = "; cin >> R;
	cout << fixed;
	cout << "----------------------------" << endl;
	cout << "|" << setw(7) << "x" << " |" << setw(7) << "R" << " |"
		<< setw(7) << "y" << " |" << endl;
	cout << "----------------------------" << endl;
	x = xp;
	while (x <= xk)
	{
		if (x <= 0)
			y = ((x - 6) * R) / 6.;

		else
			if (0 < x && x <= R)
				y = -sqrt(R * R - x * x);

			else
				if (R < x && x <= 2 * R)
					y = sqrt(R * R - (x - 2 * R) * (x - 2 * R));

				else
					y = R;

		cout << "|" << setw(7) << setprecision(2) << x
			<< " |" << setw(7) << setprecision(2) << R << " |" << setw(7) << setprecision(2) << y
			<< " |" << endl;
		x += dx;
	}
	cout << "----------------------------" << endl;
	return 0;
}
#include <iostream>
#include <iomanip>
#include <time.h>
using namespace std;
int main()
{
	double x, y, R;
	srand((unsigned)time(NULL));
	cout << "R = "; cin >> R;
	for (int i = 0; i < 10; i++)
	{
		cout << "x = "; cin >> x;
		cout << "y = "; cin >> y;
		if (x <= 0 && y >= 0 && pow(x, 2) + pow(y, 2) <= pow(R, 2) ||
			(y <= 0 && y >= (-2 * x) && y >= (-2 * x - (2 * R))))
			cout << "yes" << endl;
		else
			cout << "no" << endl;
	}
	cout << endl << fixed;

		for (int i = 0; i < 10; i++)
		{
			x = -R + (rand() / (double)RAND_MAX) * (2 * R);
			y = -R + (rand() / (double)RAND_MAX) * (2 * R);

			if (x <= 0 && y >= 0 && pow(x, 2) + pow(y, 2) <= pow(R, 2) ||
				(y <= 0 && y >= (-2 * x) && y >= (-2 * x - (2 * R))))
				cout << setw(8) << setprecision(4) << x << " "
				<< setw(8) << setprecision(4) << y << " " << "yes" << endl;
			else
				cout << setw(8) << setprecision(4) << x << " "
				<< setw(8) << setprecision(4) << y << " " << "no" << endl;
		}
	return 0;
}
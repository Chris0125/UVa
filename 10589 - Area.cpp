#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	int n, M = 0;
	double a, a2;
	double area = 0;
	while (cin >> n >> a)
	{
		if (n == 0)
			break;
		for (int i = 0; i < n; i++)
		{
			double coord1, coord2;
			cin >> coord1 >> coord2;

			double dist1 = (coord1 * coord1) + (coord2 * coord2);
			double dist2 = ((a - coord1)*(a - coord1)) + (coord2 * coord2);
			double dist3 = (coord1 * coord1) + ((a - coord2)*(a - coord2));
			double dist4 = ((a - coord1)*(a - coord1)) + ((a - coord2)*(a - coord2));
			a2 = a*a;
			if ((dist1 <= a2) && (dist2 <= a2) && (dist3 <= a2) && (dist4 <= a2))
			{
				M++;
			}

		}
		area = (double)M * (double)a * (double)a / (double)n;
		cout << fixed << setprecision(5) << area << endl;
	}
	return 0;
}

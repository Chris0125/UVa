#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
	int n, a, M = 0;
	double area = 0;
	while (cin >> n >> a)
	{
		if (n == 0)
			break;
		for (int i = 0; i < n; i++)
		{
			double coord1, coord2;
			cin >> coord1 >> coord2;

			double dist1 = sqrt((coord1 * coord1) + (coord2 * coord2));
			double dist2 = sqrt(((a - coord1)*(a - coord1)) + (coord2 * coord2));
			double dist3 = sqrt((coord1 * coord1) + ((a - coord2)*(a - coord2)));
			double dist4 = sqrt(((a - coord1)*(a - coord1)) + ((a - coord2)*(a - coord2)));

			if ((dist1 <= a) && (dist2 <= a) && (dist3 <= a) && (dist4 <= a))
			{
				M++;
			}
		}
		area = (double)M * (double)a * (double)a / (double)n;
		cout << fixed << setprecision(5) << area << endl;
	}
	return 0;
}

//**************************************************************
//						Project #26: Area
//                        UVa# 10589
//                  Name: Christopher James
//               Advanced Programming Techniques
//                    Date: 12/8/2016
//*****************************************************************

#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
	//Init variables
	int n; 
	double a, a2;
	double area = 0.0;

	//While we can read in
	while (cin >> n >> a)
	{
		int M = 0;
		//if n = 0, quit
		if (n == 0)
			break;
		//for every coordinate set
		for (int i = 0; i < n; i++)
		{
			//read in the coordinates
			double coord1, coord2;
			cin >> coord1 >> coord2;

			//caluclate the distance of the point from the four corners
			double dist1 = (coord1 * coord1) + (coord2 * coord2);
			double dist2 = ((a - coord1)*(a - coord1)) + (coord2 * coord2);
			double dist3 = (coord1 * coord1) + ((a - coord2)*(a - coord2));
			double dist4 = ((a - coord1)*(a - coord1)) + ((a - coord2)*(a - coord2));
			
			//calculate the area squared
			a2 = a*a;
			
			//if the distance squared is less than the area squared
			if ((dist1 <= a2) && (dist2 <= a2) && (dist3 <= a2) && (dist4 <= a2))
			{
				//Add one to M
				M++;
			}
		}
		//Calculate the area
		area = (double)M * (double)a * (double)a / (double)n;
		//print solution
		printf("%.5lf\n", area);
		
	}
	return 0;
}

//**************************************************************
//              Project #0: Relational Operator
//                        UVa# 11172
//                  Name: Christopher James
//               Advanced Programming Techniques
//                    Date: 09/06/2016
//*****************************************************************
#include <iostream>
using namespace std;

int main()
{
	//Read in the number of lines to come
	int ct;
	cin >> ct;

	//for each line
	for (int i = 0; i < ct; i++)
	{
		//read in the two numbers
		int a, b;
		cin >> a >> b;

		//then compare them
		//if less than
		if (a < b)
		{
			//print less than
			cout << '<' << endl;
		}
		//if greater than
		else if (b < a)
		{
			//print greater than
			cout << '>' << endl;
		}
		//otherwise, it must be equal
		else
		{
			//print equal
			cout << '=' << endl;
		}
	}
	return 0;
}
//**************************************************************
//              Extra Credit #8: Grey Codes
//                        UVa# 11173
//                  Name: Christopher James
//               Advanced Programming Techniques
//                    Date: 11/08/2016
//*****************************************************************
#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main()
{
	//read in number of test cases
	int cases;
	cin >> cases;

	//For each case
	for (int i = 0; i < cases; i++)
	{
		//read in the values
		int n, k, ans;
		cin >> n >> k;

		//Short cut:
		//A gray code of n can be calculated by EXORing the bits
		//with the bits of the value n/2. 
		ans = k ^ (k / 2);
		cout << ans << endl;
	}
	
	
	return 0;
}

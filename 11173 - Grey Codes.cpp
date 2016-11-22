//**************************************************************
//              Extra Credit #8: Grey Codes
//                        UVa# 11173
//                  Name: Christopher James
//               Advanced Programming Techniques
//                    Date: 11/08/2016
//*****************************************************************
#include <iostream>
#include <vector>
using namespace std;

int main()
{
	//read in number of test cases
	int cases;
	cin >> cases;

	//read in n value (2^n)
	int n,k;
	cin >> n >> k;

	vector<vector<bool>>bits(n);
	for (int i = 0; i < k; i++)
	{
		bits[0].push_back(0);
		bits[1].push_back(1);

		bits[2].push_back(1);
		bits[3].push_back(0);
	}
	

	

	return 0;
}

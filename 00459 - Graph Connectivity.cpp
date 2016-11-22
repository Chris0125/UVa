//**************************************************************
//              Project #21: Graph Connectivity
//                        UVa# 459
//                  Name: Christopher James
//               Advanced Programming Techniques
//                    Date: 10/27/2016
//*****************************************************************
#include <iostream>
#include <string>
using namespace std;

int main()
{
	//read in the number of cases
	int cases = 0;
	cin >> cases;

	string line;
	getline(cin, line);
	getline(cin, line);
	//for each case
	for (int i = 0; i < cases; i++)
	{
		getline(cin, line);
		//get the all the lines.
		while (line != "")
		{
			cout << line << endl;
			getline(cin, line);
		}
		cout << endl;

	}
	return 0;
}

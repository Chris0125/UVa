//**************************************************************
//              Project #4: Group Reverse
//                        UVa# 11192
//                  Name: Christopher James
//               Advanced Programming Techniques
//                    Date: 09/18/2016
//*****************************************************************
#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main()
{
	
	int group,index;
	ofstream outfile;
	outfile.open("output.txt");
	while (cin >> group)
	{
		if (group == 0)
		{
			system("pause>0");
			return 0;
		}
		index = 0;
		string input, output;
		cin >> input;

		int set = input.length() / group;

		for (int i = 0; i < group; i++)
		{
			for (int j = set; j > 0; j--)
			{
				output += input[(i*set) + j - 1];
				index++;
			}
		}

		outfile << output << endl;
	}
}
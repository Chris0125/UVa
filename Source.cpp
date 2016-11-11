//**************************************************************
//              Project #6: Kindergarten Counting Game
//                        UVa# 494
//                  Name: Christopher James
//               Advanced Programming Techniques
//                    Date: 09/18/2016
//*****************************************************************
#include <iostream>
#include <string>
using namespace std;

int main()
{
	string line;
	while (getline(cin, line))
	{
		int word = 0;

		for (int i = 0; i < line.length(); i++)
		{
			if (isalpha(line[i]))
			{
				do
				{
					i++;
				} while (isalpha(line[i]) && i<line.length());
				word++;
			}
		}
		cout << word << endl;
	}
	return 0;
}
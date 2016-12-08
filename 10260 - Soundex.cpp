//**************************************************************
//               Extra Credit #3: Soundex
//                        UVa# 10260
//                  Name: Christopher James
//               Advanced Programming Techniques
//                    Date: 12/6/2016
//*****************************************************************
#include <iostream>
#include <string>
using namespace std;

int main()
{
	//Set up translation array
	int Arr[128];
	Arr['B'] = Arr['F'] = Arr['P'] = Arr['V'] = 1;
	Arr['C'] = Arr['G'] = Arr['J'] = Arr['K'] = Arr['Q'] = Arr['S'] = Arr['X'] = Arr['Z'] = 2;
	Arr['D'] = Arr['T'] = 3;
	Arr['L'] = 4;
	Arr['M'] = Arr['N'] = 5;
	Arr['R'] = 6;
	Arr['A'] = Arr['E'] = Arr['I'] = Arr['O'] = Arr['U'] = Arr['H'] = Arr['W'] = Arr['Y'] = 0;

	//While we can read in strings
	string input;
	while (cin >> input)
	{
		//init output string
		string output = "";
		//init previous soundex code
		int sp = 0;
		//for every letter
		for (int i = 0; i < input.length(); i++)
		{
			//get the soundex code
			int s = Arr[input[i]];
			//if the soundex code is not zero and not the same as before
			if (s != 0 && s!=sp)
			{
				//add it to our new string
				output.append(to_string(s));
				//set the previous
				sp = s;
			}
			//else if s == 0 and the previous is different
			else if (s == 0 & s != sp)
			{
				//set the previous
				sp = s;
			}
		}
		//output string
		cout << output << endl;
	}
	return 0;
}

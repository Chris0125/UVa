
//*****************************************************************
//    Project #14: One Little, Two Little, Three Little Endians
//                        UVa# 594
//                  Name: Christopher James
//               Advanced Programming Techniques
//                    Date: 10/2/2016
//*****************************************************************
#include <iostream>
#include <bitset>
#include <fstream>

using namespace std;

int main()
{
	//While we can read in
	int num;
	while (cin >> num)
	{
		//Convert the string to binary and store in bitset
		string bin = bitset<32>(num).to_string();

		//Init reverse string
		string rev = "";

		//Init K to 24
		int k = 24;

		//while K >= 0
		while (k >= 0)
		{
			//Add the next 8 bits to the reverse strings
			for (int i = 8; i > 0; i--)
			{
				rev += bin[k];
				//Add one
				k++;
			}
			//Every 8 bits go back 16 bits
			k = k - 16;
		}
		
		//then convert that reversed bit string to a number
		int decimal = bitset<32>(rev).to_ulong();

		//output solution.
		cout << num << " converts to " << decimal << endl;
	}
	return 0;
}

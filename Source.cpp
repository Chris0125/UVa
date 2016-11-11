#include <iostream>
#include <string>
using namespace std;

int main()
{
	string input = "WERTYUIOP[]\\SDFGHJKL;'XCVBNM,./1234567890-=";
	string output = "QWERTYUIOOP[]ASDFGHJKL;ZXCVBNM,.`1234567890-";

	string table[128];
	string str = "";
	string ostr = "";

	getline(cin, str);

	for (int i = 0; i < 128; i++)
	{
		table[input[i]] = output[i];
	}

	for (int i = 0; i < str.length(); i++)
	{
		ostr.append(table[str[i]]);
	}
	
	cout << ostr << endl;
	

	system("pause>0");
	return 0;
}
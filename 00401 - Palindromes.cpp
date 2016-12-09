#include <iostream>
#include <string>
using namespace std;


bool isPalin(string str)
{
	int j = str.length() - 1;
	int i = 0;

	while (i <= j)
	{
		if (str[i] != str[j])
			return false;
		else
		{
			i++;
			j--;
		}
	}
	return true;
}


bool isMirror(string str)
{
	string Palin = "ABCDEFGHIJKLMNOPQRSTUVWXYZ123456789";
	string Mirro = "A   3  HI  JM O   2TUVWXY51SE Z  8 ";

	int j = str.length() - 1;
	int i = 0;

	while (i <= j)
	{
		int k = Palin.find(str[i]);

		if (str[j] != Mirro[k])
			return false;
		else
		{
			i++;
			j--;
		}
	}
	return true;
}

int main()
{
	bool flag1;
	bool flag2;
	string input;

	while (cin >> input)
	{
		flag1 = isMirror(input);
		flag2 = isPalin(input);

		if (flag1 && flag2)
		{
			cout << input << " -- is a mirrored palindrome." << endl << endl;
		}
		else if (flag1)
		{
			cout << input << " -- is a mirrored string." << endl << endl;
		}
		else if (flag2)
		{
			cout << input << " -- is a regular palindrome." << endl << endl;
		}
		else
			cout << input << " -- is not a palindrome." << endl << endl;
	}
	return 0;
}

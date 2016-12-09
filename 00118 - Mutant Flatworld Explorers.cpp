//**************************************************************
//          Project #18: Mutant Flatworld Explorers
//                        UVa# 118
//                  Name: Christopher James
//               Advanced Programming Techniques
//                    Date: 10/08/2016
//*****************************************************************
#include <iostream>
#include <vector>
#include <string>
using namespace std;

bool InList(vector<pair<int, int>> lst, pair<int, int> p)
{
	for (unsigned int i = 0; i < lst.size();i++)
	{
		if (lst[i] == p)
			return true;
		return false;
	}
}

bool CheckInList(vector<pair<int, int>>&lst, int lx, int ly)
{
	bool lost = false;
	if (!InList(lst, pair<int, int>(lx, ly)))
	{
		lost = true;
		lst.push_back(pair<int, int>(lx, ly));
	}
	return lost;
}

char rotate(char c, char dir) 
{
	if (c == 'R') 
	{
		switch (dir)
		{
			case 'N': return ('E');
			case 'S': return ('W');
			case 'E': return ('S');
			case 'W': return ('N');
			default:;
		}
	}
	if (c == 'L')
	{
		switch (dir)
		{
		case 'N': return ('W');
		case 'S': return ('E');
		case 'E': return ('N');
		case 'W': return ('S');
		default:;
		}
	}
	return 'X';
}
int main()
{
	int mx, my, lx, ly;
	char d;
	string commands;
	vector <pair<int, int>> lst;
	bool lost;
	cin >> mx >> my;

	while (cin >> lx)
	{
		cin >> ly >> d;
		cin >> commands;
		lost = false;
		for (unsigned int i = 0; i < commands.length() && !lost; i++)
		{
			switch (commands[i])
			{
			case 'R':
				d = rotate('R', d);
				break;
			case 'L':
				d = rotate('L', d);
				break;
			case 'F':
				switch (d)
				{
				case 'N': ly++;
					if (ly > my)
					{
						ly--;
						lost = CheckInList(lst, lx, ly);
					}
					break;

				case 'S': ly--;
					if (ly < 0)
					{
						ly++;
						lost = CheckInList(lst, lx, ly);
					}
					break;

				case 'E': lx++;
					if (lx > mx)
					{
						lx--;
						lost = CheckInList(lst, lx, ly);
					}
					break;

				case 'W': lx--;
					if (lx <0)
					{
						lx++;
						lost = CheckInList(lst, lx, ly);
					}
					break;
				default:;
				}//End F switch
			}//End cmd switch
		}
		cout << lx << " " << ly << " " << d;
		if (lost)
		{
			cout << " LOST";
		}
		cout << endl;
	}
	
	return 0;
}

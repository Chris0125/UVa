//**************************************************************
//              Project #22: Spreading The News
//                        UVa# 924 //(558)
//                  Name: Christopher James
//               Advanced Programming Techniques
//                    Date: 11/15/2016
//*****************************************************************
#include <iostream>
#include <string>
#include <vector>
#include <queue>

enum {BLACK, GREY, WHITE};

using namespace std;

vector <int> BFS(vector<vector<int>>AdjList, int strt)
{
	return;
}

int main()
{
	//read in number of employees
	int empnum;
	cin >> empnum;
	
	
	vector <vector <int>> AdjList(empnum);
	for (int i = 0; i < empnum; i++)
	{
		int num;
		cin >> num;
		for (int j = 0; j < num; j++)
		{
			int frnd;
			cin >> frnd;
			AdjList[i].push_back(frnd);
		}
	}

	int cases;
	cin >> cases;
	for (int i = 0; i < cases; i++)
	{
		int num;
		cin >> num;
		

	}
	return 0;
}

//I have written the entire program as turned in and have not copied 
//this code, or parts of this code from the internet or
//another student.                      Signature____________________

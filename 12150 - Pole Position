#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int n;
	cin >> n;
	
	while (n != 0)
	{
		vector <int> polepos(n, 0);
		bool flag = true;
		int c, p;
		for (int i = 0; i < n; i++)
		{
			cin >> c >> p;
			int init = i + p;
			if (init >= 0 && init < n && polepos[init] == 0)
				polepos[init] = c;
			else {
				flag = false;
				i++;
				while (i < n)
				{
					cin >> c >> p;
					i++;
				}
				break;
			}
		}
		if (flag)
		{
			for (int i = 0; i < n; i++)
			{
				cout << polepos[i];
				if (i < n - 1)
					cout << " ";
			}
			cout << endl;
		}
		else
			cout << "-1" << endl;
		cin >> n;
	}
	return 0;
}

#include <iostream>
using namespace std;

int main()
{
	while (cin.eof()){
		int n;
		cin >> n;

		bool *arr = new bool[n - 1];
		int x, y;
		cin >> x;

		for (int i = 0; i < n; i++)
		{
			arr[i] = false;
		}

		for (int i = 0; i < n - 1; i++)
		{
			cin >> y;
			int z = abs(x - y);
			arr[z] = true;
			x = y;
		}

		bool flag = true;
		for (int i = 1; i < n; i++)
		{
			if (arr[i] == false)
				flag = false;
		}
		if (flag)
			cout << "Jolly" << endl;
		else
			cout << "Not jolly" << endl;
	}
	return 0;
}

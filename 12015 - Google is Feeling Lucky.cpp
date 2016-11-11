#include <iostream>
#include <string>
using namespace std;

struct goog
{
	char url[100];
	int rel;
};

int main()
{
	int num;
	cin >> num;
	
	for (int j = 0; j < num; j++)
	{
		goog tab[10];

		for (int i = 0; i < 10; i++)
		{
			cin >> tab[i].url >> tab[i].rel;
		}

		int max = 0;
		string print = "";

		for (int i = 0; i < 10; i++)
		{
			if (max < tab[i].rel)
			{
				max = tab[i].rel;
				print = tab[i].url;
			}
			else if (max == tab[i].rel)
			{
				print = print + '\n' + tab[i].url;
			}
		}
		
		cout << "Case #" << j + 1 << ":" << endl;
		cout << print << endl;
	}
	return 0;
}

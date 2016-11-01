//**************************************************************
//              Project #9: Ecological Premium
//                        UVa# 10300
//                  Name: Christopher James
//               Advanced Programming Techniques
//                    Date: 09/26/2016
//*****************************************************************
#include <iostream>
#include <string>
using namespace std;

struct farm {
	int farmyard;
	int animals;
	int enviro;
	double premium;
};

int main()
{
	//read in number of cases
	int numcase;
	cin >> numcase;

	//for every case
	for (int j = 0; j < numcase; j++)
	{
		//init and set total to zero
		double total = 0;

		//read in the total 
		int numfarmers;
		cin >> numfarmers;

		//create array of farmers
		farm * arr = new farm[numfarmers];

		//for each farmer in the array
		for (int i = 0; i < numfarmers; i++)
		{
			//read in their respective information
			cin >> arr[i].farmyard;
			cin >> arr[i].animals;
			cin >> arr[i].enviro;

			//the number of animals is irrelevant since we multiply
			//and divide by it
			arr[i].premium = arr[i].farmyard * arr[i].enviro;

			//add that farmers premium to the total
			total += arr[i].premium;
		}
		//output totalt
		cout << total << endl;
	}
	
	return 0;
}

//I have written the entire program as turned in and have not copied 
//this code, or parts of this code from the internet or
//another student.                      Signature____________________

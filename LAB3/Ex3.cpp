/*Gladys Roman
 * Ex3.cpp
 * January 28,2019
 * This program will calculate electric company prices based on usage.
 */

//libraries
#include <iostream>
#include <iomanip> 
using namespace std;

int main()
{
	double KWH = 0;  // KWH used by customer
	double rate = 0; // rate based on usage

	// prompt user to enter KWH
	cout << "Enter the number of Kilowatt Hours used: ";
	cin >> KWH;

	// set decimal precisions
	cout << fixed << setprecision(2);
	cout << "Based on KWH used, your total bill will be $";	
	// rate1
	if(KWH > 0 && KWH <= 999)
		{
			rate = KWH * 0.6;
			cout <<  rate << endl;
		}

	//rate2
	else if(KWH >= 1000 && KWH <= 1499)
		{
			rate = KWH * 0.45;
			cout <<  rate << endl;
		}

	//rate3
	else if(KWH >= 1500 && KWH <= 1999)
		{
			rate = KWH * 0.4;
			cout <<  rate << endl;
		}

	//rate4
	else
		{
			rate = KWH * 0.35;
			cout << rate << endl;
		}	


	return 0;

}

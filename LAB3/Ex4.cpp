/*Gladys Roman
 * Ex4.cpp
 * January 3o, 2019
 * This program will prompt a user to enter a month and then it will display the number of days in that month.
 */

// libraries
#include <iostream>
using namespace std;

int main()
{
	// variable for input
	int month;
	// prompt user to enter a month
	cout << "Enter a month 1-12: ";
	cin >> month;

	//declare switch statement
	switch(month)
	{
		case 1: { cout << "January has 31 days\n"; break;}
		case 2: { cout << "February has 28 or 29 days\n"; break;}
		case 3: { cout << "March has 31 days\n"; break;}
		case 4: { cout << "April has 30 days\n"; break;}
		case 5: { cout << "May has 31 days\n"; break;}
		case 6: { cout << "June has 30 days\n"; break;}
		case 7: { cout << "July has 31 days\n"; break;}
		case 8: { cout << "August has 31 days\n"; break;}
		case 9: { cout << "September has 30 days\n"; break;}
		case 10: { cout << "October has 31 days\n"; break;}
 		case 11: { cout << "November has 30 days\n"; break;}
		case 12: { cout << "December has 31 days\n"; break;}
		default: { cout << "Invalid month\n";}
	}		 

	return 0;

}

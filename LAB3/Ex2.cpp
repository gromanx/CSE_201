/*Gladys Roman
 * Ex2.cpp
 * January 28, 2019
 * This program will prompt the user to input a number between 3 and 12, and declare if it's an even/odd number. 
 */

//libraries
#include <iostream>
using namespace std;

int main()
{
	//variables
	int input = 0;
	//prompt user to enter a number between 3 and 12
	cout << "Enter a number between 3 and 12, inclusive: ";
	cin >> input;

	//declare conditions if input is within range, even or odd
	if(input >= 3 && input <= 12)
		{
			cout << "Good number.\n";
			if(input % 2 == 0)
				cout << input << " is an even number.\n";
			else
				cout << input << " is an odd number.\n";
		}
	else
		cout << "Bad number.\n";
	
	return 0;
}

/*
 * Gladys Roman
 * change.cpp
 * This program will count the total amount of change that a user has
 * Jan 21, 2019
 */

#include <iostream>
using namespace std;

int main()
{
	double p, n, d, q;
	cout << "Please enter the following\nNumber of pennies: ";
 	cin >> p;
  	cout << "Number of nickels: ";
	cin >> n;
	cout << "Number of dimes: ";
	cin >> d;
	cout << "Number of quarters: ";
	cin >> q;
	double x1 = p * .01, x2 = n * .05, x3 = d * .1, x4 = q * .25;
	cout << "You have $" << x1 + x2 + x3 + x4 << " in change\n";

	return 0;
}	

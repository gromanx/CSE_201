/* Gladys Roman
 * Ex5.cpp
 * January 30, 2019
 * This program will behave as an ATM machine.
 */

// libraries
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	// variables
	double balance = 100;
	char input;
	double input2 = 0;

	//welcome and prompt user for command
	cout << " Welcome!\n Enter B to check your balance\n Enter W to make a withdrawal\n Enter D to make a deposit\n Enter anything else to quit\n";
	cin >> input;

	// set precisions for dollar outputs
	cout << fixed << setprecision(2);
	
	//declare conditions for user input
	// balance
	if(input == 'B') 
	{	cout << "Your current balance is: $" << balance << endl;
	}
	// withdrawal
	else if(input == 'W')
	{
		cout << "Your current balance is: $" << balance << endl; 
		cout << "How much would you like to withdraw? $";
		cin >> input2;
		balance = balance - input2;
		cout << "Your new balance will be: $" << balance << endl;
	}
	// deposit
	else if(input == 'D')
	{
		cout << "Your current balance is: $" << balance << endl;
		cout << "How much would you like to deposit? $";
		cin >> input2;
		balance = balance + input2;
		cout << "Your new balance will be: $" << balance << endl;
	}

	// anything else; quit
	else 
	{	cout << "Now quitting, goodbye!\n";
	}

	return 0;
}


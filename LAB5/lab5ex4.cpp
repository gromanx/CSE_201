/*Gladys Roman
 * lab5ex4.cpp
 * February 25, 2019
 * This program will act as an interactive ATM machine
 */

// libraries
#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

// global variables
const double checkingInitial = 950.00;
const double savingsInitial = 5000.00;
double checkingBalance = 950.00;
double savingsBalance = 5000.00;

//forward-declare functions
void printbalance(string account);
void deposit(string account, double amount);
void withdraw(string account, double amount);

// main function
int main()
{
	// variables for user input 
	string input;
	string account;
	double amount;

	//welcome msg
	cout << endl << " Welcome to CSE Bank!" << endl;

	// do-while loop for atm menu to display at least once
	do
	{	cout << " Please make a selction from the following menu." << endl << " Enter \"B\" to check your balance." << endl << " Enter \"W\" to make a withdrawal." << endl << " Enter \"D\" to make a deposit." << endl << " Enter \"Q\" to quit." << endl << " Enter selection: ";
		cin >> input;
		cout << endl;
		// balance
		if(input == "B")
		{	cout << " Which account would you like to see the balance of?" << endl << " Enter \"S\" for  Savings, \"C\" for Chaecking, or \"A\" for both." << endl << " Enter account selection: ";
			cin >> account;
			printbalance(account);
			cout  << endl;
		}
		// withdrawal
		else if(input == "W")
		{	cout << " Which account would you like to withdraw from?" << endl << " Enter \"C\" for Checking or \"S\" for Savings." << endl << " Enter account selection: ";
			cin >> account;
			cout << endl;
			cout << " How much would you like to withdraw?: $";
			cin >> amount;
			withdraw(account, amount);
			cout << endl;
		}
		// deposit
		else if(input == "D")
		{	cout << " Which account would you like to deposit to?" << endl << " Enter \"C\" for Checking or \"S\" for Savings." << endl << " Enter account selection: ";
			cin >> account;
			cout << endl;
			cout << " How much would you like to deposit?: $";
			cin >> amount;
			cout << " Deposit complete." << endl;
			deposit(account, amount);
			cout << endl;
		}
		// quit 
		else if (input == "Q")
			break;
		// invalid entry
		else 
			cout << " INVALID ENTRY" << endl << endl ;
	} while(input != "Q");
	
	// selection of Q
	cout << " Your initial balances were:" << endl << " Savings: $" << savingsInitial << endl << " Checking: $" << checkingInitial << endl << " Your final balances are: "<< endl;
	printbalance("A");
	cout << endl << " Thank you for using the CSE Bank! Have a nice day!" << endl << endl;

	return 0;
}

//define declared finctions
// print balance function
void printbalance(string account)
{	cout<< fixed << setprecision(2);
	
	if(account == "A")
	{
	        cout << " Savings Account Balance: $" << savingsBalance << endl;
		cout << " Checking Account Balance: $" << checkingBalance <<endl;
	}
	else if(account == "S")
		cout  << " Savings Account Balance: $" << savingsBalance << endl;
	else if(account == "C")
		cout  << " Checking Account Balance: $" << checkingBalance << endl;
	else
		cout << " Account type not recognized." << endl;
}

// withdrawal function
void withdraw(string account, double amount)
{	
	if(account == "S")
	{	if(savingsBalance > amount)
		{	savingsBalance -= amount;
			cout << " Withdrawal complete." << endl;
			printbalance("S");
		 }
		else
		{	savingsBalance -= 5.00;
			cout << " Withdrawal not valid. Penalty fee of $5.00 has been deducted." << endl;
			printbalance("S");
		}
	}
	else if(account == "C")
	{	if(checkingBalance > amount)
		{	checkingBalance -= amount;
			cout << " Withdrawal complete." << endl;
			printbalance("C");
		}
		else 
		{	checkingBalance -= 5.00;
			cout << " Withdrawal not valid. Penalty fee of $5.00 has been deducted." << endl;
			printbalance("C");
		}
	}
	else
		cout << " Account type not recognized." << endl;
}

// deposit function
void deposit(string account, double amount)
{
	if(account == "S")
	{	savingsBalance += amount;
		printbalance("S");
	}
	else if(account == "C")
	{	checkingBalance += amount;
		printbalance("C");
	}
	else 
		cout << " Account type not recognized." << endl;
}

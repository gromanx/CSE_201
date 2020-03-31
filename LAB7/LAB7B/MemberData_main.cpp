/*Gladys Roman
 * MemberData_main.cpp
 * This program is an implementation for a calss called MemberData, which holds information about a member's number, name, savings and checkings balances.
 * March 17, 2019
 */

// libraries
#include <iostream>
#include "MemberData.h"
#include <vector>
#include <string>

using namespace std;

// main function
int main()
{
	// members and their bank information
	MemberData member1(246810, 1234, "Frosty S. Man", 5600.00, 10500.00);
	MemberData member2(135790, 5678, "Rudolph R. Deer", 7800.50, 3400.00);
	MemberData member3(123456, 2468, "Mrs. Claus", 500.00, 20000.00);
	
	// vector will hold all of the information of the 3 members in one container
	vector <MemberData> bank;
	bank.push_back(member1);
       	bank.push_back(member2);
       	bank.push_back(member3);
	
	cout << endl;

	// for-loop calls the getName function starting at the bank vector's index 0
	for(int i = 0; i < bank.size(); i++){
		cout << bank[i].getName() << ". ";
	}
	cout << endl;

	// interactive ATM
	cout << "Hello! Welcome to the North Pole Bank!" << endl << "Please enter the member number for the account you would like to access: ";
	int memberNumber;
	cin >> memberNumber;
	// for-loop will linear search the user's input to see if it's a valid member number
	for(int i = 0; i < bank.size(); i++){
		if(bank[i].getMember() == memberNumber) 
			memberNumber = i;
	}

	// if the user's input isn't found at any of the indexes, return invalid
	if(memberNumber > bank.size()-1){
		cout << "Member not found. Goodbye\n";
		return 0;
	}
	//ask for the member's pin. if not found, program quits
	else
	{
		cout << "To proceed, enter member pin: ";
		int pin;
		cin >> pin;
		if(pin != bank[memberNumber].getPin()){ 
			cout << "Wrong pin. Goodbye\n";
			return 0;
		}
		// nested else runs if the member number is found and if the pin is correct
		else
		{
			cout << "Welcome, " << bank[memberNumber].getName() << "!" << endl;
			string input;
			
			// while-loop runs until the member enters Q to quit
			while(input != "Q")
			{
				cout << "Select from the following menu: " << endl 
					<< "Enter B to view your balance." << endl 
					<< "Enter W to make a withdrawal." << endl 
					<< "Enter D to make a deposit." << endl
					<< "Enter Q to quit." << endl;
				 cin >> input;
				string account;
				 // balance
				if(input == "B"){
					cout << "Which account's balance would you like to see? " << endl 
						<< "Enter C for checking, or S for savings: ";
					cin >> account;
					if(account == "C") 
						cout << "Checkings ";
					else 
						cout << "Savings ";
					cout << "Balance: $" << bank[memberNumber].getBalance(account) << endl << endl;
				
				}
				// deposit
				else if(input == "D"){
					cout << "Which account would you like to make a deposit to? " << endl 
						<< "Enter C for Checking, or S for savings: ";	
					cin >> account;
					cout << "How much would you like to deposit? $"; 
					double amount;
					cin >> amount;
					bank[memberNumber].deposit(amount, account);
					if(account == "C") 
						cout << "New Checkings ";
					else 
						cout << "New Savings ";
					cout << "Balance: $" << bank[memberNumber].getBalance(account) << endl << endl;
				}
				// withdrawal
				else if(input == "W"){
					cout << "Which account would you like to withdraw from?" << endl 
						<< "Enter C for Checking, or S for Savings: ";
					cin >> account;
					cout << "How much would you like to withdraw? $";
					double amount;
					cin >> amount;
					if(bank[memberNumber].withdraw(amount, account)){
						cout << "Withdrawal complete." << endl;
					}
					else
						cout << "Invalid withdrawal amount. Penalty deducted." << endl;
					if(account == "C") 
						cout << "New Checkings ";
					else 
						cout << "New Savings ";
					cout << "Balance: $" << bank[memberNumber].getBalance(account) << endl << endl;
				}
				//break from the loop if user enters Q
				else if(input == "Q")
					break;
				//invalid enter msg if no other conditions are met
				else
					cout << "Invlaid Entry" << endl << endl;
		}
		
		//goodbye msg with final balances and member name
		cout << bank[memberNumber].getName() << ", your final balances are:" << endl 
			<< "Checkings: $" << bank[memberNumber].getBalance("C") 
			<< endl << "Savings: $" << bank[memberNumber].getBalance("S") << endl 
			<< "Thank you for banking with the North Pole Bank! Have a great day!" << endl;	

		}
	
	}
	return 0;
}

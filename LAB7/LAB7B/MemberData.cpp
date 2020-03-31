//Gladys Roman
//MemberData.cpp

#include "MemberData.h"
#include <string>
#include <iostream>

//default constructor. give private variable default values
MemberData::MemberData(){
	memberNum = 0;
	pin = 0;
	name = "name";
	checkingsbalance = 0;
	savingsbalance = 0;
}

//overload constructor
MemberData::MemberData(int mn, int p, string n, double cb, double sb){
	memberNum = mn;
	pin = p;
	name = n;
	checkingsbalance = cb;
	savingsbalance = sb;
}

//deposit function deposits amount in appropriate account
void MemberData::deposit(double amount, string account){
	if(account == "S")
		savingsbalance += amount;
	else if(account == "C")
		checkingsbalance += amount;
	else
		cout << "Invalid account" << endl;
}

//withdrawal function withdraws from approprate account, checking if it's a valid amount to withdraw
bool MemberData::withdraw(double amount, string account){
	bool valid;
	if(account == "S"){
		if(amount > savingsbalance){
			valid = false;
			savingsbalance -= 5.00;
		}
		else
		{
			valid = true;
			savingsbalance -= amount;
		}
	}
	else if(account == "C"){
		if(amount > checkingsbalance){
			valid = false;
			checkingsbalance -= 5.00;
		}
		else
		{
			valid = true;
			checkingsbalance -= amount;
		}
	}
	else 
		cout << "Invalid account" << endl;
	
	return valid;
}

//getBalance function gets balance for appropriate account
double MemberData::getBalance(string account){
	if(account == "S")
		return savingsbalance;
	else if(account == "C")
		return checkingsbalance;
	else
	{
		cout << "Invalid account" << endl;
		return 0;
	}
}

//getMember function returns the member number
int MemberData::getMember(){
	return memberNum;
}

//getName function returns the member's name
string MemberData::getName(){
	return name;
}

//getPin function returns the member's pin
int MemberData::getPin(){
	return pin;
}

//setPin resets a member's pin
void MemberData::setPin(int p){
	pin = p;
}


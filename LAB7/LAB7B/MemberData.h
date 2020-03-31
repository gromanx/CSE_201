//Gladys Roman
//MemberData.h

#ifndef MEMBERDATA_H
#define MEMBERDATA_H

#include <string>

using namespace std;

class MemberData
{
	public:
		MemberData();
		MemberData(int mn, int p, string n, double cb, double sb);
		void deposit(double amount, string account);
		bool withdraw(double amount, string account);
		double getBalance(string account);
		int getMember();
		string getName();
		int getPin();
		void setPin(int p);

		
	private:
		int memberNum;
		int pin;
		string name;
		double checkingsbalance;
		double savingsbalance;

};

#endif

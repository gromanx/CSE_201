/*
 * Gladys Roman
 * employee.cpp
 * This program will show what an employee's salary could be with a 5% increase
 * Jan 20, 2019
 */

#include <iostream>
#include <string>
using namespace std;

int main()
{
	cout << "Hello! This program will show what an employee's salary could be if they perform well.\n";
	string first, last;
	cout << "Please enter employee's first name: ";
	cin >> first;
	cout << "Please enter employee's last name: ";
	cin >> last;
	string name = first.substr(0) + " " + last.substr(0);
	double salary;
	cout << "What is "<< name <<"'s starting salary? $";
	cin >> salary;
	double s1 = salary * 1.05;
	string initials = first.substr(0,1) + "." + last.substr(0,1);	
	
	cout << "If " << initials <<" performs well, they could be looking at a 5% salary increase to $" << s1 << "\n";

	return 0;
}

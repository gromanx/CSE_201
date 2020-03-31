/*Gladys Roman
 * Ex1.cpp
 * January 28, 2019
 * This program will prompt the user to enter 2 integers and then display whether those integers are equal to one another or if one is larger than the other. 
 */

//declare libraries
#include <iostream> 
using namespace std;

int main()
{
	//declare variables
	int num1, num2;
	//prompt user to enter two integers
	cout << "Enter two integers: ";
	//assign input to corresponding variables
	cin >> num1 >> num2;

	// if/else statements
	if(num1 == num2)
		cout << num1 << " is equal to " << num2 << endl;
	else if(num1 > num2)
		cout << num1 << " is greater than " << num2 << endl;
	else
		cout << num2 << " is greater than " << num1 << endl;

	return 0;
}

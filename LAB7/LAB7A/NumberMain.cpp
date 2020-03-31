/*Gladys Roman
 * numberMain.cpp
 * This program will implement the Number class
 * March 17, 2019
 */

// libraries
#include <iostream>
#include "Number.h"

using namespace std;

// main function
int main()
{	// object variable named seven with the data type Number and the value of 7
	Number seven(7);

	// call isPrime member function
	if(seven.isPrime())
		cout << seven.getValue() << " is prime." << endl;
	else 
		cout << seven.getValue() << " is not prime." << endl;
	
	//call isLucky function
	if(seven.isLucky())
		cout << seven.getValue() << " is a lucky number." << endl;
	else
		cout << seven.getValue() << " is not a lucky number." << endl;
	
	// object variable named twentySeven with the data type Number
	Number twentySeven;
	//assign the value 27 to the object variable twentySeven
	twentySeven.setValue(27);

	//call getValue function and isPrime function
	cout << twentySeven.getValue() << " is";
	if(twentySeven.isPrime())
		cout << "  prime.";
	else 
		cout << "  not prime.";
	
	//call isLucky function
	if(twentySeven.isLucky())
		cout << " And it is a lucky number." << endl;
	else
		cout << " And it is not a lucky number." << endl;


	return 0;
}

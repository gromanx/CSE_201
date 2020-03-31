/*Gladys Roman
 * lab5ex1.cpp
 * February 18, 2019
 * This program will implement two functions that increase a value by 1.
 */

// libraries
#include <iostream>
#include <cassert>
using namespace std;

//forward declare functions for k + 1
int addOne(int k);
void addOne2(int & k);

// main function
int main()
{

	 	 
	int value;
	cout << "Enter any integer value: ";
	cin >> value;

	//cout statement that will implement pass by VALUE function	
	cout << value << " + 1 = " << addOne(value) << endl;

	//cout statement that will implement pass by REFERENCE function 
	cout << value << " + 1 = ";
        addOne2(value);
	cout << value  << endl;

	return 0;
}

//define forward-declared functions of k + 1
int addOne(int k){
	return k + 1;
}

void addOne2(int &k)
{	k += 1;
}


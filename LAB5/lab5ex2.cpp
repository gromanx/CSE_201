/*Gladys Roman
 * lab5ex2.cpp
 * February 18, 2019
 * This program will declare the prime numbers within a user-inputted interval using a function
 */

// libraries
#include <iostream>

using namespace std;

// isPrime  bool function will be checking if a value is prime or not, and return those that are prime
bool isPrime(int n)
{	bool Prime = true;
	for(int num = 2; num < n; num++)
	{	if(n % num == 0)
		{	Prime = false;
			break;
		}
	}
	return Prime;
}

int main()
{	
	// user-inputted interval
	int start, end;
	cout << "Please enter a starting value: ";
	cin >> start;
	cout << "Please enter an ending value: ";
	cin >> end;

	// display prime numbers
	cout<<"The prime numbers between "<<start<<" and "<<end<<" are: ";

	// for-loop will check every number within the interval for prime numbers, cout prime numbers
	for(start; start <= end; start++)
	{	if(isPrime(start) == true)
		cout << start <<" ";
	}

	cout << endl;

	return 0;
}

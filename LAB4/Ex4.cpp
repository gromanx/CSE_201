/*Gladys Roman
 * Ex4.cpp
 * February 8, 2019
 * This program will prompt a user for a positive integer greater than 1, and then will display the prime factors of that number
 */

// libraries
#include <iostream>
using namespace std;

int main()
{
	
	int input;
	cout << "Please enter any integer greater than 1: ";
	cin >> input;

	//cout statement for prime factors of user input
	cout << "The prime factorization of " << input << " is: ";
	// for-loop to check input condition
	for(input; input > 1;)
	{	// for-loop checks factors of input starting from the smallest prime number, 2
		for(int divisor = 2; divisor <= input; divisor++)
		{	if(input % divisor == 0)
		//cout factor and reduce remaining input by that factor, then break out of the loop to begin checking for next smallest factor
			{	cout << divisor <<" ";
				input /= divisor;
				break;
			}
		}
	}

	cout << endl;

	return 0;
}

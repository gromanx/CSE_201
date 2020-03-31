/*Gladys Roman
 * Ex3.cpp
 * February 7, 2019
 * This program will ask the user to enter a starting point and ending point, and then will display the prime numbers within that interval
 */

// libraries
#include <iostream>
using namespace std;

int main()
{
	// variables for user input
	int start, end;

	// prompt user for starting and ending point
	cout << "Please enter a starting value: ";
	cin >> start;
	cout << "Please enter an ending value: ";
	cin >> end;

	//cout message for prime #s within the given interval
	cout << "The prime numbers between " << start << " and " << end << " are: ";

	// nested for-loop identifies prime #s in given interval
	for(start; start <= end; start++)
	{	// first loop traverses through interval
		bool isPrime = true;
		// second loop checks each number in interval to see if they're prime, one at a time
		for(int num = 2; num < start; num++)
		{ 	if(start % num == 0) 
			{	isPrime = false;
				break;
			}
		}
		//cout prime numbers found in the loop
		if(isPrime) cout << start << " ";
	}

	cout << endl;

	return 0;
}


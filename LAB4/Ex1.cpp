/*Gladys Roman
 * Ex1.cpp
 * February 4, 2019
 * This program will ask the user to input a starting point and an ending point, and then display the even numbers within that interval
 */

// libraries
#include <iostream>
using namespace std;

int main()
{
	// variables for user input
	int end;
	int start;
	int sum = 0; // for sum of odd numbers within the interval

	// prompt user for start and end values
	cout << "Please enter a starting value: ";
	cin >> start;
	cout << "Please enter an ending value: ";
	cin >> end;

	
	cout << "The even numbers between " << start << " and " << end << " are: ";  
	int temp = start; // temp helps us conserve original value of start as we traverse the loop
	// for-loop that identifies even numbers in the given interval 
	for(temp; temp <= end; temp++)
	{
		if(temp % 2 == 0)
		{	
			cout << temp << " ";
			
		}
		else
			sum += temp; // sum of odd numbers
	}

	cout << endl << "The sum of odd numbers between " << start << " and " << end << " is: " << sum << endl;


	return 0;
}

/*Gladys Roman
 *Ex2.cpp
 *February 7, 2019
 *This program will ask the user to guess a number and then let the user know if their guess is too high or too low
 */

// libraries
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{	// variables
	int input = 0;
	int count = 1;
	srand(time(NULL));
	int randnum = rand() % 15 + 1;
	
	// prompt user for their guess 
	cout << " Guess the number!\n Enter a number between 1 and 15: ";
	cin >> input;

	// retreive randnum
	randnum;
	
	//while-loop identifies if the guess is too big or too small 
		// records number of attempts made by the user
	while(input != randnum)
	{	if(input > randnum) 
		{ cout << "Too big! Try again: ";
			cin >> input;
		}
		else if (input < randnum) 
		{ cout << "Too small! Try again: "; 
			cin >> input;
		}
	count++;
	}

	// user guessed right if they reached this point
	cout << "Congrats! You got it after " << count << " tries!\n";

	return 0;
}


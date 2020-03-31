/*Gladys Roman
 * Ex5.cpp
 * February 8, 2019
 * This program will read in a set of test scores data from the user, print out the number of
tests entered, the average of the tests, and the standard deviation. 
 */

// libraries
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
	// variables
	int count = 0;
        double sum = 0, average = 0, square = 0, sumsq = 0, stddev = 0, input;

	//prompt user to input test score data
	cout << "Please enter test score (enter -1 to end input): ";
	cin >> input;

	//while the user does not input -1, keep asking for more input
	while(input != -1)
	{
		//keep track of # inputs, the sum of inputs & the sum of squares
		sum += input;
		square = input * input;
		sumsq += square;

		cout << "Please enter test score (enter -1 to end input): ";
		cin >> input;
		count++;
	}
	
	//do average and std deviation calculations
	average = sum/count;
	
	double numerator = sumsq -((1.0 / count) * (pow(sum, 2)));
	double denominator = count - 1;	
	stddev = sqrt(numerator / denominator);
	
	//display number of scores, average, and std deviation
	cout << endl << endl << fixed << setprecision(2);
	cout << " Number of scores: " << count << "\n Average: " << average << "\n Std. Deviation: " << stddev << "\n\n";

	return 0;
}

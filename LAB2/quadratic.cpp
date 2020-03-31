/*
 * Gladys Roman
 * quadratic.cpp
 * This program will allow the user to input the variables for the quadratic formula and will then display the result of the calculation
 */

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	double a, b, c;
	cout << "Please enter 3 integers for a, b, c:\n";
	cin >> a >> b >> c;
	double x1 = (-b + sqrt(b * b - 4 * a * c))/(2 * a);
	double x2 = (-b - sqrt(b * b - 4 * a * c))/(2 * a);

	cout << "The two solutions are x1 = " << x1 << ", and x2 = " << x2 << "\n";

	return 0;
}

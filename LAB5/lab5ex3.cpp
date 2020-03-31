/*Gladys Roman
 * lab5ex3.cpp
 * February 20, 2019
 * This program will ask the user if they have a sphere or a cylinder, ask them for measurements and display calculations of those measurements accordingly. 
 */

// libraries
#include <iostream>
#include <string>

using namespace std;

//forward-declare functions that will do the calculations for volume and surface area for spheres and cylinders
double sphere_volume(const double &r);
double sphere_surface(const double &r);
double cylinder_volume(const double &r, const double &h);
double cylinder_surface(const double &r, const double &h);

// main function
int main()
{
	// variables
	string input;
	double radius = 0, height = 0;

	//prompt user to enter if they have a sphere or cylinder
	cout << "Please enter whether you have a sphere or a cylinder: ";
	cin >> input;	

	// if, else if, and else statements prompt for proper measurements, and/or print in valid entry if the user made an error
	// if  sphere
	if(input == "sphere")
	{	cout << "Please enter the radius of the sphere: ";
		cin >> radius;
		cout << "The volume of your sphere is: " << sphere_volume(radius) << endl;
	        cout << "The surface area of your sphere is: " << sphere_surface(radius) << endl;
	}

	// if cylinder
	else if(input == "cylinder")
	{	cout << "Please enter the radius of your cylinder: ";
		cin >> radius;
		cout << "Please enter the height of your cylinder: ";
		cin >> height;
		cout << "The volume of your cylinder is: " << cylinder_volume(radius, height) << endl;
		cout << "The surface area of your cylinder is: " << cylinder_surface(radius, height) << endl;
	}

	// if invalid entry
	else
		cout << "invalid entry\n";	

	return 0;
}

//define functions for calculations of measurments
double sphere_volume(const double &r)
{	double volume = (4.0 / 3) * 3.14159 * (r * r * r);
	return volume;
}

double sphere_surface(const double &r)
{	double surface = 4.0 * 3.14159 * (r * r);
	return surface;
}

double cylinder_volume(const double &r, const double &h)
{	double volume = 3.14159 * (r * r) * h;
	return volume;
}

double cylinder_surface(const double &r, const double &h)
{	double surface = (2.0 * 3.14159 * (r * r)) + (2 * 3.14159 * r * h);
	return surface;
}

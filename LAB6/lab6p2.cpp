/*Gladys Roman
 * lab6p2.cpp
 * March 6, 2019
 * This program will use several functions that take vectors as parameters and return information about the vectors
 */

// libraries
#include <iostream>
#include <vector>

using namespace std;

//forward declare functions
void printVector(const vector<int> & v);
int max(const vector<int> & v);
bool linearSearch(const vector<int> & v, int value);
void insertVector(vector<int> & v, int value);
void appendVector(vector<int> & v, const vector<int> & w);

// main function
int main()
{	// vectors that will test whether the declared functions are working properly
	vector <int> vector1 = {5, 2, 13, 6};
	vector <int> vector2 = {2, 4, 8, 10};
	int value = 0;

	//use printVector and max function
	cout << "The elements in vector1 are: ";
	printVector(vector1);
	cout << "The largest value in vector1 is: " << max(vector1) << endl;
	
	//use linearSearch function
	cout << "Please enter a value: ";
	cin >> value;
	if(linearSearch(vector1, value))
		cout << value << " is an element of vector1" << endl;
	else
		cout << value << " is not an element of vector1" << endl;

	//use insertVector function
	cout << "The elements in vector2 are: ";
	printVector(vector2);
	cout << "Enter the missing value of vector2: ";
	cin >> value;
	insertVector(vector2, value);
	cout << "vecor2 is now: ";
	printVector(vector2);

	//use appendVector function
	cout << "The combination of vector1 and vector2 is: ";
	appendVector(vector1, vector2);
	
	printVector(vector1);
	
	return 0;
}

//define functions
// print vector function will go through and print every element of the vector starting at index 0 and ending at the index # of vector size -1
void printVector(const vector<int> & v)
{	for(int i = 0; i < v.size(); i++)
	{	cout << v[i] << " ";
	}
	cout << endl;
}

// max function will set the variable max = to vector index 0 and then use a for-loop to compare the index # that the function is currently at to its adjacent index value and make max = to that if its greater than the current value of max. the function will do this until it reaches the end of the vector and then return the max value
int max(const vector<int> & v)
{	int max = v[0];
	for(int i = 1; i < v.size(); i++)
	{	if(v[i] > max)
			max = v[i];
	}
	return max;
}

// linear search will check if the user's inputted value is found within the vector by using a for-loop to check every element starting with index 0. if found, the function returns true. If not found, the function returns false.
bool linearSearch(const vector<int> & v, int value)
{	for(int i = 0; i < v.size(); i++)
	{	if(v[i] == value)
			return true;
	}
	return false;
}

// insertVector function will use a sorted vector as its first paramater and the second paramater value into the appropriate spot in the vector. it'll first check if the vector is empty and if the value is greater than the last value in the vector so that if it is, the function will just push the new value to the end of the vector. If it's not, the for loop will start at the beginning of the vector and compare elements of the vector to the user's value until it finds the right spot to insert.
void insertVector(vector<int> & v, int value)
{       if(v.empty() || value > v[v.size()-1])
                v.push_back(value);
        else
        {       for(vector<int>::iterator it = v.begin(); it != v.end(); ++it)
                {       if(value <= *it)
                        {       v.insert(it, value);
                                break;
                        }
                }
        }
}

// appendVector appends vector 2 to vector 1 by using a for loop to push back each element in vector2 to vector1, one by one
void appendVector(vector<int> & v, const vector<int> &  w)
{	for(int i = 0; i < w.size(); i++)
	{
		v.push_back(w[i]);
	}
}

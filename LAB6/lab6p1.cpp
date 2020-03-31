/*Gladys Roman
 * lab6p1.cpp
 * February 25, 2019
 * This program will display several functions that take arrays as parameters and return information about the arrays
 */

// libraries
#include <iostream>
using namespace std;

// global variable for array capacity
int maxcapacity = 10;

//forward declare functions
void printArray(const int a[], int aSize);
int max(const int a[], int aSize);
bool isStrictlyIncreasing(const int a[], int aSize);
void swap(int& x, int& y);
void bubbleSort(int a[], int aSize);
bool appendArray(int a[], int& aSize);

// main function
int main()
{
	// arrays that will be used to test functions
	int array1[] = {13, 4, 7, 19, 18};
	int array2[10] = {5, 8, 7, 2, 12};
	int array2size = 5;
	
	//use print function
	cout << "The elements in array1 are: ";
	printArray(array1, 5);
	
	//use max function
	cout << "The maximum value in array1 is: " << max(array1, 5) << endl;
	
	cout << "The elements in array2 are: ";
	printArray(array2, 5);
	
	//use appendArray function
	cout << "After appending array2: ";
	appendArray(array2, array2size);
	printArray(array2, array2size);
	
	//use bubbleSort function
	cout << "array2 in sorted format: ";
	bubbleSort(array2, 6);
	printArray(array2, 6);
	
	//use isStrictlyIncreasing function
	if(isStrictlyIncreasing(array2, 6))
		cout << "array2 is in increasing order." << endl;
	else
		cout << "array2 is not in increasing order." << endl;
	return 0;
}

// functions definitions
// print array function uses a for-loop to output each value in array
void printArray(const int a[], int aSize)
{	for(int i = 0; i < aSize; i++)
	{	cout << a[i] << " ";
	}
	cout << endl;
}

// max function returns largest integer in the array by using a for-loop that will compare the value at index 0 to the value at the adjacent index and make the variable max equal to the greater value within the comparison, until it reaches the end of the array 
int max(const int a[], int aSize)
{	int max = 0;
	for(int i = 0; i < aSize; i++)
	{	if(a[i] > max)
			max = a[i];
	}
	return max;
}

// isStrictlyIncreasing uses a for loop that to check if the value at index 0 is less than the value at the adjacent index, and so on until it reaches the end of the array 
bool isStrictlyIncreasing(const int a[], int aSize)
{
	for(int i = 0; i < aSize-1; i++)
	{	if(a[i] >= a[i+1])
			return false;
	}
	return true;
}

// swap function uses pass by reference and creates a temporary variable the will be used to swap 2 values
void swap(int& x, int& y)
{	int temp = x;
	x = y;
	y = temp;
}

// bubble sort function sorts an array in order. While a swap has been made, array is not done being sorted.
void bubbleSort(int a[], int aSize)
{	bool sorted = false;
	while(!sorted)
	{	sorted = true;
		for(int i = 0; i < aSize - 1; i++)
		{	if(a[i] > a[i+1])
			{	swap(a[i], a[i+1]);
				sorted = false;
			}
		}
	}
}	


// appendArray function will check 2 conditions: if there is room for a new value and if there are already 2 values in the array. Then, it will access the array at its new index number and assign it the value of the addition of the last 2 values in the array 
bool appendArray(int a[], int& aSize)
{
	if(aSize >= maxcapacity)
		return  false;
	if(aSize < 2)
		return false;
	else
	{	a[aSize] = a[aSize-1] + a[aSize-2];
		aSize++;
	}
		return true;
}

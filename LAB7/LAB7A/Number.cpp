//Gladys Roman
//number.cpp

#include "Number.h"

//default constructor. gives private variables default values
Number::Number(){
	num = 0;
}

//overload constructor
Number::Number(int n){
	num = n;
}

//setValue function will change the value of the private data 
void Number::setValue(int n){
	num = n;
}

//getValue function will return the value of num
int Number::getValue(){
	return num;
}

//isPrime function returns true if a num is prime by using a for loop to iterate through every number smaller than num and >= 2 and breaks as soon as it finds a factor
bool Number::isPrime(){
	for(int i = 2; i < num; i++)
	{	if(num % i == 0)
			return false;
	}
	return true;
}

//isLucky function returns true if num is divisible by 7
bool Number::isLucky(){
	if(num % 7 == 0)
		return true;
	else
		return false;
}

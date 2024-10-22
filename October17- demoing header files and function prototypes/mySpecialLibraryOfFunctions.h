#pragma once //let's not worry about what this means for now

#include<iostream>

using std::cout; 


int doSomethingElse(int inputNumber)
{
	std::cout << "Returning " << inputNumber << " times two.\n";
	return inputNumber * 2;
}

/*"overloading" a function*/
int doSomethingElse(int a, int b)
{
	cout << a << "\t" << b << "\n";

	return 1;
}


//function defintion 
void doSomething()
{
	cout << "Doing something ...\n"; //vaguely menacing ...
}

void printInputs(int a, int b)
{
	cout << a << "\t" << b << "\n";
}

void printInputs(int a, std::string b, int c)
{
	cout << a << "\t" << b << "\t" << c << "\n";
}
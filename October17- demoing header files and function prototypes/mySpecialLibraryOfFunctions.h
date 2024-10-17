#pragma once //let's not worry about what this means for now

#include<iostream>



int doSomethingElse(int inputNumber)
{
	std::cout << "Returning " << inputNumber << " times two.\n";
	return inputNumber * 2;
}


//function defintion 
void doSomething()
{
	std::cout << "Doing something ...\n"; //vaguely menacing ...
}
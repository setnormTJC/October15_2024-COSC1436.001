// October22-continuing function stuff.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using std::cout; 
using std::string; 


//int a = 123; //"a" has "global scope" 

void doSomething()
{
	int a; //again, "a" has "local scope" 
}

//camelCase
int main()
{
	//while (true)
	//{
	///*	int */a = 3423;  //local scope 
	//}

	//a = 12; 

	int originalInteger = 32; 
	//int SHALLOWcopyOfInteger = originalInteger; 

	int& DEEPcopyOfInteger = originalInteger; //"ampersand" 
	//cout << "The original integer is: " << originalInteger << "\n"
	//	<< "The SHALLOW copy is: " << SHALLOWcopyOfInteger << "\n";

	originalInteger = 847465;
	//SHALLOWcopyOfInteger = originalInteger; 
	//cout << "AFTER updating the original, the original integer is: " << originalInteger << "\n"
	//	<< "The SHALLOW copy is: " << SHALLOWcopyOfInteger << "\n";

	cout << "After updating the original, the original is: " << originalInteger << "\n"
		<< "and the DEEP copy is: " << DEEPcopyOfInteger << "\n";

	int a = 123; 
	cout << "What is &a? " << &a << "\n";

}

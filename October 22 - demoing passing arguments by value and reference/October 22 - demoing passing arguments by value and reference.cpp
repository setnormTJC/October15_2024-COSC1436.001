// October 22 - demoing passing arguments by value and reference.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using std::cout; 

void addOne(int& a)
{
	cout << "The MEMORY address of \"a\" in the \"addOne\" function is: " << &a << "\n";
	a = a + 1; 
}

int main()
{

	int a = 1;
	cout << "Size of an integer is: " << sizeof(int) << " BYTES\n";
	cout << "Size of reference to integer (memory address) is: " << sizeof(&a) << "\n";

	cout << "The MEMORY address of \"a\" in the MAIN function is: " << &a << "\n";
	addOne(a); 

	cout << "Is it two? " << a << "\n";

}

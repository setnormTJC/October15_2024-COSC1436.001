// October17- demoing header files and function prototypes.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

#include"mySpecialLibraryOfFunctions.h"

using std::cout; 
using std::string; 

/*Can be useful for organizing your code*/
namespace MySpace
{
	int a = 32; 
}

//using namespace std; 




int main()
{
	doSomething(); 

	cout << doSomethingElse(42) << "\n";

	using namespace MySpace; 

	//cout << MySpace::a << "\n";
	cout << a << "\n";
}


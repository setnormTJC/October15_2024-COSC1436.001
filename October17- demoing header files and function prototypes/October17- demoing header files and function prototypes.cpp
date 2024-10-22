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

	printInputs(1, 2); 

	int num = 4232; 
	printInputs(5, "stringy", num); //this is an example of an "overloaded function"

	//doSomething(); 

	//cout << doSomethingElse(42) << "\n";

	////doSomethingElse(1, 3);

	////using namespace MySpace; 

	////cout << MySpace::a << "\n";
	//cout << MySpace::a << "\n";
}


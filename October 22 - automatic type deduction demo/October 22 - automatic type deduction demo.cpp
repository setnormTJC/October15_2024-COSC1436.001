// October 22 - automatic type deduction demo.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using std::cout; 
using std::string; 

auto returnSomething()
{
	cout << "asfasdfas\n";

	return 1.23; 
}

int main()
{
	//cout << returnSomething() << "\n";
	auto result	 = returnSomething(); 
	cout << result << "\n";

	//"automatic type deduction" 

	auto someInt = 123; 

	cout << "What is the typid of someInt? : " << typeid(someInt).name() << "\n";

	auto letter = 'z'; 
	cout << "Typeid of letter variable: " << typeid(letter).name() << "\n";
}

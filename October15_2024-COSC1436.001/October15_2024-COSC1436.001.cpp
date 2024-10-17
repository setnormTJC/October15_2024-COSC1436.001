// October15_2024-COSC1436.001.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

#include<fstream> 

using std::cout; 


/*This function returns an integer!
@param the input is an INTEGER (tag-> similar to <html> <head> </head> 
@return the input plus two! (this is somewhat similar to JavaDoc and Doxygen)
*/
int addTwoToSomeInteger(int inputNumber)
{
	//return "adfasdfads" -> syntax error 
	
	int outputNumber = inputNumber + 2; 
	return outputNumber; 
}

void displayMenuOptions()
{
	cout << "This is the MAIN MENU of a social media app - select one of the options\n";
	cout << "1 - Display direct messages ...\n";
	cout << "2 - Go to followers feed thing...\n";
	cout << "3 - Upload photo of dog ...\n";
	cout << "4 - etc.\n";

	//return "nothing"; 

}

int main()
{

	//built-in (pre-defined) functions in the C++ standard library 
	//std::ifstream inputFile; 
	//inputFile.seekg(std::ios::beg)
	// "calling the function" 
	int resultOfFunctionCall = addTwoToSomeInteger(77); 

	//cout << addTwoToSomeInteger(5) << "\n";
	//cout << "Result is: " << resultOfFunctionCall << "\n";

	//cout << pow(5, 2) << "\n";
	//cout << sqrt(49) << "\n";

	//system("pause"); 

	displayMenuOptions(); //this is called "calling the function" (AKA: a "function call")

	int choice;
	std::cin >> choice;
	
	switch (choice)
	{
	case 1: 
		cout << "These are your DMs\n";
		break; 

	case 2: 
		cout << "This is a list of stuff your followers are saying...\n";
		break;

	case 3: 
		system("doris.jpg"); 
		break; 

	case 4: 
		cout << "The etc. stuff is being displayed .../n";
		break; 

	default: 
		cout << "Our social media app doesn't support that input...\n";
		break; 
	}
}

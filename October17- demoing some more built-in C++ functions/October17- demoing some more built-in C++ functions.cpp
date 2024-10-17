// October17- demoing some more built-in C++ functions.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<iomanip> //for setw, setprecision, std::left 
#include<algorithm> //for std::random_shuffle()
#include <vector>

using std::cout; 
using std::string; 

/*
@param firstNumber and secondNumber are both integers
*/
int addTwoNumbers(int firstNumber, int secondNumber)
{
    //suppose fN = 2 and sN = 3; 
    return firstNumber + secondNumber; 
}



int main()
{
    //std::transform(); //... note: this requires <algorithm> 
    //cout << "FLOOR when given the argument 1.23 yields: " << floor(1.23) << "\n";
    //cout << "FLOOR when given the argument NEGATIVE 1.23 yields: " << floor(-1.23) << "\n";
    //std::cout << "Hello World!\n";

    //cout << "Sin of zero (degrees maybe?): " << sin(3.14/2) << "\n"; //input in DEGREES? or RADIANS? 

    //cout << "Is alpha ('c') returns: " << isalpha('c') << "\n";
    //cout << "Is alpha ('1') returns: " << isalpha('1') << "\n";
    

    std::vector<string> cards
        =
    {
        "1 o' diamonds",
        "2 o' diamonds",
        "3 o' diamonds",
        "4 o' diamonds",
        "5 o' diamonds",
    };

    srand(time(0)); 

    std::random_shuffle(cards.begin(), cards.end()); 

    for (int i = 0; i < cards.size(); ++i)
    {
        //deque (double-ended queue) 
        cout << cards[i] << "\n";
    }

    system("pause"); 
        
        //this is a "dynamic array"  

    while (true)
    {
        cout << "Enter a character:\n";

        char inputCharacter; 
        
        std::cin >> inputCharacter; 

        cout << "That character in UPPER case is: " << (char)toupper(inputCharacter) << "\n";
        //if (isalpha(inputCharacter))
        //{
        //    cout << "That was an ALPHABETIC character!\n";
        //}

        //else
        //{
        //    cout << "That was NOT alphabetic\n";
        //}
    }


}

#include <iostream>

using namespace std;

int main()
{
    cout << "Enter the shape name: \n";

    string shapeName;

    cin >> shapeName;

    if (shapeName == "rectangle") {
        double width, length;

        cout << "Enter the width and the length:";
        cin >> width >> length;
        cout << "The area is:" << length * width;

        cout << "The perimeter is:" << 2 * (length + width); "\n";
    }

    else if (shapeName == "triangle")
    {
        double base, height;

        cout << "Enter the base and the height of your triangle:";
        cin >> base >> height;
        cout << "The area is:" << (base * height) / 2; "\n";
    }

    else// (shapeName != "rectangle" and shapeName != "triangle");
    {
        cout << "Some shape other than triangle or rectangle was entered\n ";
    
    }
    return 0;
}
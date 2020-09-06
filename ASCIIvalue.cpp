#include <iostream>

using namespace std;

int main()
{
    //variable declaration
    char asciichar;

    //take user input
    cout << "Enter a character : ";
    cin >> asciichar;

    //display ascii value of character
    cout << "\nIt's ascii  value is : " << (int) asciichar << endl;

    return 0;
}
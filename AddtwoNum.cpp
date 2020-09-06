#include <iostream>

using namespace std;

int main()
{
    //variable declaration
    int num1, num2, result;

    //take user input
    cout << "Enter first Number : ";
    cin >> num1;

    cout << "\nEnter second Number : ";
    cin >> num2;

    //to add two number
    result = num1 + num2;

    //display addition
    cout << "\n" <<num1<<"+"<<num2<<"="<< result;

    return 0;
}
#include <iostream>
#include <conio.h>
using namespace std;
long fact (int n)
{
    if (n==0)
    return 1;
    return (n*fact(n-1)); //recursive function call
}
int main()
{
    int num;
    cout << "Enter a positive integer:";
    cin >> num;
    
    cout <<"Factorial of "<<num<<" is "<<fact(num)<<".";
    getch ();
    return 0;
}

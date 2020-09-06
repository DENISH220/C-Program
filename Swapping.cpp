//program to show how call by value works

#include<iostream>
//include<Windows.h>
using namespace std;

//function definition
void swap(int x, int y)
{
    int z;
    z = x;
    x = y;
    y = z;
    cout<<"Swapped value of a is  : "<< x<<endl;
    cout<<"Swapped value of b is : "<<y<<endl;
}

int main (int argc, char *argv[])
{
    //variable declaration
    int a ,b;

    //take user input
    cout<<"Enter Two numbers : ";
    cin>>a>>b;

    cout<<"Original values of a  and b  are : "<<endl;
    cout<<"Value of a is : "<<a<<endl;
    cout<<"Value of b is : "<<b<<endl;

    //call to swap function
    swap(a, b);
}
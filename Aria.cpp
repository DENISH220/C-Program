#include <iostream>
using namespace std;
 
int main() 
{
    int height, base;
    float ans;    //ans may come in fractions
    cout<<"Enter height:: ";
    cin>>height;
    cout<<"Enter base::";
    cin>>base;
    ans= (0.5)*height*base;    //area of triangle formula
 
    cout<<"Area of triangle is:: "<<ans;
 return 0;
}
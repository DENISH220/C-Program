//Function area () is overloading three time
#include <iostream>
using namespace std;
 
//Declaration of funtion prototypes
int area(int);
int area(int, int);
float areas(float);
int main()
{
    cout<<"calling the area () funtion for computing the area of square(side=5):"<<area(5)<<"\n";

    cout<<"calling the area () funtion for computing the area of rectangle(length=5,breadth=10):"<<area(5,10)<<"\n";

    cout<<"calling the area () funtion for computing the area of circle (radius=5.5):"<<areas(5.5);
    return 0;

}
int area (int side)
{
    return(side*side);
}
int area (int length,int breadth)
{
    return(length*breadth);
}
float areas (float radius)
{
    return(3.14*radius*radius);
}
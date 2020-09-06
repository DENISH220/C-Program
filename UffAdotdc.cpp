#include <iostream>
using namespace std;

class ABC; //forword declaration
class XYZ
{
    int data;

public:
    void setvalue(int value)
    {
        data = value;
    }
    friend void add(XYZ, ABC); //Friend function declaration
};
class ABC
{
    int data;

public:
    void setvalue(int value)
    {
        data = value;
    }
    friend void add(XYZ, ABC); //Friend function declaration
};
void add(XYZ obj1, ABC obj2) //Friend function definition
{
    cout << "Sum of data value of XYZ and ABC =" << obj1.data + obj2.data;
    //objects using friend function
}
int main()
{
    XYZ X;
    ABC A;
    X.setvalue(5);
    A.setvalue(50);
    add(X, A); //calling friend function
    return 0;
}
#include <iostream>

using namespace std;

class A
{
public:
    int l;
    void len()
    {
        cout << "Lenght : ";
        cin >> l;
    }
};

class B : public A
{
public:
    int b, c;
    void l_into_b()
    {
        len();
        cout << "Breadth : ";
        cin >> b;
        c = b * l;
    }
};

class C
{
public:
    int h;
    void height()
    {
        cout << "Height : ";
        cin >> h;
    }
};

//Hybrid Inheritance Level
class D : public B, public C
{
public:
    int res;
    void result()
    {
        l_into_b();
        height();
        res = h * c;

        cout << "\n";
        cout << endl
             << "Result (l*b*h) : " << res;
    }
};

int main()
{
    D dObj;
    dObj.result();

    return 0;
}
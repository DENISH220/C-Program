#include <iostream>

using namespace std;

int area(int side)
{
    return side * side;
}

int area(int l, int b)
{
    return l * b;
}

int main()
{

    int (*p1)(int);
    int (*p2)(int, int);

    p1 = area;
    p2 = area;

    cout << "Address of area(int)=" << p1 << endl;
    cout << "Address of area(int,int)=" << p2 << endl;

    cout << "\n";

    cout << "Invoking area(int) via p1 " << p1(20) << endl;
    cout << "Invoking area(int,int) via p2 " << p2(10, 20);

    return 0;
}

#include <iostream>

using namespace std;

class Add
{
public:
    void add(int a, int b)
    {
        int c;
        c = (a + b);
        cout << a << " + " << b << " = " << c << endl;
    }

    void add(float a, float b)
    {
        float c;
        c = (a + b);
        cout << a << " + " << b << " = " << c << endl;
    }

    void add(int a, int b, int c)
    {
        int d;
        d = (a + b + c);
        cout << a << " + " << b << " + " << c << " = " << d << endl;
    }
};

int main()
{
    Add a;
    a.add(5, 6);
    a.add(7, 8, 9);
    a.add(8.0f, 9.0f);

    return 0;
}
#include <iostream>
#include <math.h>

using namespace std;

class point
{
    int x, y, z;

public:
    point()
    {
        x = y = z = 0;
    }

    point(int i, int j, int k)
    {
        x = i;
        y = j;
        z = k;
    }

    point(point &a)
    {
        x = a.x;
        y = a.y;
        z = a.z;
    }

    void negate()
    {
        x = -x;
        y = -y;
        z = -z;
    }

    void print()
    {
        cout << "(" << x << "," << y << "," << z << ")\n";
    }

    int norm()
    {
        return (sqrt(x * x + y * y + z * z));
    }
};

int main()
{
    point p(2, 3, 4), p1(p);

    cout << "The point has the coordinates\n";
    p.print();
    cout << "The point coordinates after negation\n";

    p.negate();
    p.print();

    cout << "Normal Distance of the point from (0,0,0) is \n"
         << p.norm() << "\n";
    cout << "The coordinates of the point p1 after copy constructor is \n";

    p1.print();

    return 0;
}
#include <iostream>
using namespace std;

class Point
{
private:
    int x, y;

public:
    Point(int x1, int y1)
    {
        x = x1;
        y = y1;
    }

    // Copy constructor
    Point(const Point &p2)
    {
        x = p2.x;
        y = p2.y;
    }

    int getX()
    {
        return x;
    }
    int getY()
    {
        return y;
    }
};

int main()
{
    // simple constructor is called
    Point objpoint1(53, 13); // Copy constructor is called

    Point objpoint2 = objpoint1;
    cout << "objpoint1.x : " << objpoint1.getX() << ", objpoint1.y : " << objpoint1.getY();
    cout << "\nobjpoint2.x : " << objpoint2.getX() << ", objpoint2.y : " << objpoint2.getY();

    return 0;
}
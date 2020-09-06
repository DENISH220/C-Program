#include <iostream>

using namespace std;

class Area
{
public:
    float area_calc(float l, float b)
    {
        return l * b;
    }
};

class Perimeter
{
public:
    float peri_calc(float l, float b)
    {
        return 2 * (l + b);
    }
};

//Rectangle class is derived from classes Area and Perimeter.
class Rectangle : private Area, private Perimeter
{
private:
    float length, breadth;

public:
    Rectangle() : length(0.0), breadth(0.0) {}

    void get_data()
    {
        cout << "Enter length: ";
        cin >> length;

        cout << "Enter breadth: ";
        cin >> breadth;
    }

    float area_calc()
    {
        //Calls area_calc() of class Area and returns it.
        return Area::area_calc(length, breadth);
    }

    float peri_calc()
    {
        //Calls peri_calc() function of class Perimeter and returns it.
        return Perimeter::peri_calc(length, breadth);
    }
};

int main()
{
    Rectangle r;
    r.get_data();

    cout << "\n\n";

    cout << "Area = " << r.area_calc();
    cout << "\nPerimeter = " << r.peri_calc();

    return 0;
}
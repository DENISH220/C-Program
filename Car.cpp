// Program
//Class Implementation
#include <iostream>
#include <conio.h>
using namespace std;

class Car
{
private:
    int CarNumber;        // a Car's serial number
    static int totalCars; // all Cars made so far
                          // NOTE: declaration only
public:
    void init() // initialize one Car
    {
        CarNumber = 10000 + totalCars++;
    }

    int getNumber() // get a Car's number
    {
        return CarNumber;
    }

    static int getTotal() // get total Cars
    {
        return totalCars;
    }
};

int Car::totalCars = 0; // NOTE: definition

//Program Implementation
int main()
{
    cout << "Total Cars = " << Car::getTotal() << endl;
    Car car1, car2, car3; // create Cars
    car1.init();          // initialize them
    car2.init();
    car3.init();

    cout << "car1=" << car1.getNumber() << endl;
    cout << "car2=" << car2.getNumber() << endl;
    cout << "car3=" << car3.getNumber() << endl;
    cout << "Total Cars = " << Car::getTotal() << endl;
    getch();
}
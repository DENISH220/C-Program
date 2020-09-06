#include <iostream>
using namespace std;
class item
{
    int number; //private by default
    float cost; //private by default
public:
    void getdata(int a, float b);
    void putdata(void)
    {
        cout << "Number :" << number << "\n";
        cout << "Number :" << number << "\n";
    }
};
void item ::getdata(int a, float b)
{
    number = a;
    cost = b;
}
int main()
{
    item x;
    cout << "\nObject X "
         << "\n";
    x.getdata(100, 299.95);
    x.putdata();

    item y;
    cout << "\nObject Y "
         << "\n";
    y.getdata(200, 175.50);
    y.putdata();
    return 0;
}
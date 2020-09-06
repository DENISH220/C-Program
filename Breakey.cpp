#include<iostream>

using namespace std;

int main()
{
    // Local variable declaration:
    int num = 10;

    // do loop execution
    do
    {
        cout << "value of number: " << num << endl;
        num = num + 1;
        if (num > 16)
        {
            // terminate the loop
            break;
        }
    } while (num < 20);

    return 0;
}
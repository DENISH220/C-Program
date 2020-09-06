#include <iostream>
#include <conio.h>
#include <string>
using namespace std;
class binary
{
    string s;

public:
    void read(void)
    {
        cout << "Enter a binary number : ";
        cin >> s;
    }
    void ones(void)
    {
        chk_bin(); //calling the member function
        for (int i = 0; i < s.length(); i++)
        {
            if (s.at(i) == '0')
                s.at(i) = '1';
            else
                s.at(i) = '0';
        }
    }
    void chk_bin(void)
    {
        for (int i = 0; i < s.length(); i++)
        {
            if (s.at(i) != '0' && s.at(i) != '1')
            {
                cout << "\nIncorrect binary number format...the program will quit";
                getch();
                exit(0);
            }
        }
    }

    void displayones(void)
    {
        ones(); //calling member funtion
        cout << "\nThe 1'S Complement of the above binary number is :" << s;
    }
};
int main()
{
    binary b;
    b.read();
    b.displayones();
    getch();
    return 0;
}

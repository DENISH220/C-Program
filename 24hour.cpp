#include <iostream>
#include <conio.h>

using namespace std;

int main()
{

    int hours, mins, seconds, x;

    cout << "Enter hours=";

    cin >> hours;

    cout << "\nEnter minutes=";

    cin >> mins;

    cout << "\nEnter seconds=";

    cin >> seconds;

    if (hours > 24)

    {

        cout << "Invalid Entery";
    }

    else

    {

        cout << "\n24 Hours Format\n";

        cout << "Hours  :  Mins  :  Seconds\n"
             << "  " << hours << "  :     " << mins << "   :     " << seconds << "\n";

        if (hours > 12)

        {

            hours = hours - 12;

            cout << "12 Hours Format\n";

            cout << "Hours  :  Mins  :  Seconds\n"
                 << "  " << hours << "  :     " << mins << "   :     " << seconds;
        }

        else

        {

            cout << "12 Hours Format\n";

            cout << "Hours  : Mins  :  Seconds\n"
                 << " " << hours << "     : " << mins << "     :    " << seconds;
        }
    }

} // end of main
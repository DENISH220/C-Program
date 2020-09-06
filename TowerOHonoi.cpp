#include <iostream>
#include <conio.h>
using namespace std;

void TOH(int d, char tower1,char tower2,char tower3)
{
    if (d==1)                       //base case
    {
        cout << "\nShift top disk from tower "<<tower1<<" to tower"<<tower2;
        return;
    }
    TOH (d-1,tower1,tower3,tower2);       //recursive funtion call
    cout << "\nShift top disk from tower "<<tower1<<" to tower"<<tower2;
    TOH(d-1,tower3,tower2,tower1);           //recursive funtion call
}
int main()
{
    int disk;
    cout << "Enter the number of disk:";
    cin >> disk;
    if (disk<1)
        cout << "\n There are no disk to shift";
    else
        cout << "\nThere are"<< disk <<"disk in tower 1\n";
    TOH(disk,'1','2','3');
    cout << "\n\n"<<disk<<"disk in tower1 are shifted to tower2";

    getch();
    return 0;
}

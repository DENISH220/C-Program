#include <iostream>
using namespace std;
int main()
{
   int num;
   {
      cout << "Enter a number:";
      cin >> num;
   }
   if (num < 100)
   {
      /* This cout statement will only execute,
      * if the above condition is true
      */
      cout << "number is less than 100";
   }

   if (num > 100)
   {
      /* This cout statement will only execute,
      * if the above condition is true
      */
      cout << "number is greater than 100";
   }
   return 0;
}
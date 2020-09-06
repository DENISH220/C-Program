#include <iostream>
#include <iomanip>   //for setw 

using namespace std;
int main()
{
	int Basic = 950, Allocation = 95, Total = 1045;
	
	cout << setw(10) << "Basic" << setw(10) << Basic <<endl;
	cout << setw(10) << "Alloc" << setw(10) << Allocation <<endl;
	cout << setw(10) << "Total" << setw(10) << Total <<endl;
	return 0; 
}

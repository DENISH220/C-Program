#include <iostream>
#include <conio.h>
using namespace std;
int main ()
{
	int intvar=25;
	float floatvar=35.87;
	
	cout << "intvar = "<<intvar;
	cout << "\nfloatvar"<<floatvar;
	cout << "\nfloatvar(intvar)"<<float(intvar);
	cout << "\nintvar(floatvar)"<<int(floatvar);
	getch();
}
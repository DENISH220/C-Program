#include <fstream>
#include <iostream>

using namespace std;

//main method declaration
int main()
{

    char data[1000];

    // open a file in read mode.
    ifstream infile;
    infile.open("file.cpp");

    cout << "Reading content from the file" << endl;
    infile >> data;

    // write the data
    cout << data << endl;

    //read the data from the file and display it.
    infile >> data;
    cout << data << endl;

    // close the opened file.
    infile.close();

    return 0;
}
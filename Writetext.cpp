#include <fstream>
#include <iostream>

using namespace std;

int main()
{

    char data[1000];

    //in write mode.
    ofstream outfile;
    outfile.open("file.txt");

    cout << "Writing content to the text file" << endl;
    cout << "Enter your name : ";
    cin.getline(data, 1000);

    // write data into the file.
    outfile << data << endl;

    cout << "Enter your age : ";
    cin >> data;
    cin.ignore();

    // again write inputted data into the file.
    outfile << data << endl;

    cout << "successfully inserted data into file";
    // close the opened file.
    outfile.close();
    return 0;
}
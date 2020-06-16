// Write a program to read file a file
// and display it on the STDOUT

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(void)
{

    string line;

    ifstream readFile("oneToHundred.txt");

    if (readFile.is_open())
    {
        while (getline(readFile, line))
        {
            cout << line << "\n";
        }
    }
}
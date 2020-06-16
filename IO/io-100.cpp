// Write a program to write 1 - 100 to a file

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(void)
{

    ofstream writeFile("oneToHundred.txt", ios::app);

    if (writeFile.is_open())
    {
        for (int i = 0; i < 100; i++)
        {
            writeFile << i << "\n";
        }

        writeFile.close();
    }
}
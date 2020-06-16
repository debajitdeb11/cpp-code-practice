// Program to demostrate the working of I/O

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{

    string text;

    // To write to the file.
    ofstream myfileI("write.txt", ios::app);
    if (myfileI.is_open())
    {
        myfileI << "Writing to the file!!!";
        myfileI.close();
    }

    // To read from the file.
    ifstream myfileO("input.txt");
    if (myfileO.is_open())
    {
        while (getline(myfileO, text))
        {
            cout << text << "\n";
        }

        myfileO.close();
    }

    return 0;
}
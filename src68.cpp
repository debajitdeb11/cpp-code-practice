// File Handling

#include <iostream>
#include <fstream>
using namespace std;

int main(int argc, char const *argv[])
{   
    // Creation of ofstream class object
    ofstream fout;

    string line;

    // by default ios::out mode, automatically deletes 
    // the content of file. To append the content, open in ios:app 
    // fout.open("sample.txt", ios::app) 

    fout.open("sample.txt");

    while(fout){
        getline(cin, line);
    }

    return 0;
}

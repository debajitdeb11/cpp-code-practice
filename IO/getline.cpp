// Program to demostrate the use of getline()

#include <iostream>
#include <string>
using namespace std;

int main()
{

    string fullName;

    // This getline function is used
    // to get spaces seperated string from the user
    getline(cin, fullName);

    cout << fullName << "\n";

    return 0;
}
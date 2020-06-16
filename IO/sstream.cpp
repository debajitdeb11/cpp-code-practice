// Program to convert string to numeric variable

#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main()
{

    string input;

    int value = 0;

    getline(cin, input);

    // stringstream(x) will convert
    // the string x to a numeric value.
    stringstream(input) >> value;

    cout << value << "\n";

    return 0;
}
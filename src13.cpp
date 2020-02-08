// Example of Type Implicit Conversion:
//  * Converting by assignment:
#include <iostream>
using namespace std;

int main(){
    float a = 67.5;
    int sum = (int)a + 1;
    cout << sum << endl;
    cout << (char)sum << endl;
    return 0;
}
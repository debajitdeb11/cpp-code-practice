// pointer
#include <iostream>
using namespace std;

int main(){
    int a = 500, b = 1000;
    int *ptrA = &a;
    int *ptrB = &b;
    int *ptrC = &*ptrB;
    cout << ptrC << "\n";
    cout << *ptrB << endl;

    return 0;
}
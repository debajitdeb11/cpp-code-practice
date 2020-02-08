// printing an array using ptr;
#include <iostream>
using namespace std;

int main(){
    int a[] = {1,2,3};
    int *ptr = a;
    int i = 0;
    while (i < 2)
    {
        cout << ptr << " = " << *ptr <<endl;
        ptr ++;
        i++;
    }
    
    cout << ptr << " = " << *ptr;

    return 0;
}
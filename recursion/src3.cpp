// Program to find the element on the i-th index (Using Recursive Method)
#include <iostream>
using namespace std;

int factorial(int n){
    if(n == 0 || n == 1)
        return n;
    
    return (factorial(n-1)+factorial(n-2));
}

int main(){
    int n;
    printf("Enter the value of n\n");
    cin >> n;
    cout << factorial(n)<<"\n";
    return 0;
}
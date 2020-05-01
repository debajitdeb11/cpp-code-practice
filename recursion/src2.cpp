// Program to find the i-th element in the fibonacci series (ITERATION METHOD)

#include <iostream>
using namespace std;

// function => returns the element at a particular index
int fibonacci(int n){
    int num1 = 0;
    int num2 = 1;
    int num;
    for(int i = 2; i <=n; i++){
        num = num1 + num2;
        num1 = num2;    
        num2 = num;
    }

    return num;
}

// driver code
int main(){
    int n;
    printf("Enter the index\n");
    cin >> n;
    cout << fibonacci(n);

    return 0;
}
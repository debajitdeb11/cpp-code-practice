// Reccursion with Memorization 
#include <iostream>
using namespace std;
#define MAX_INT 1000

long int F[MAX_INT];

long int Fibonacci(long int n){

    if(F[n] != -1){
        return F[n];
    }

    F[n] = Fibonacci(n-1)+Fibonacci(n-2);

    return F[n];
}


int main(){
    for (int i = 2; i < MAX_INT; i++)
    {
        F[i] = -1;
    }

    F[0] = 0, F[1] = 1;

    long int n;
    cin >> n;
    cout << Fibonacci(n)<<'\n';
    return 0;
}
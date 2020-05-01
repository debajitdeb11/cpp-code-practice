#include <iostream>
#include <cstdio>
using namespace std;

long long int factorial(int n){
    if(n < 0) 
        return 0;

    if(n == 0)
        return 1;

    double F = n*factorial(n-1);
    cout << "F("<<n<<") = " << F<<"\n";
    return F;
}

int main(){
    long long int n;
    cin >> n;
    cout << factorial(n) << "\n";
    return 0;
}
// Find the value of the x^y using reccursion method

// METHOD : 1

#include <iostream>
using namespace std;

long long int exponential(long long int x,long long int y){
    if(y == 0) 
        return 1;

    return x*exponential(x, y-1);
}


int main(){
    long long int x, y;
    cin >> x >> y;

    cout << exponential(x, y)<<'\n';

    return 0;
}
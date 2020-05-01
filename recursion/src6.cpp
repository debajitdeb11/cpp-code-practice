// To find the exponent of a number using Reccursion 
// Method : 2

#include <iostream>
using namespace std;

bool check(int y);

long int exponent(int x, int y){        // Time Complexitity of O(log n)

    if(y == 0)
        return 1;

    if(check(y)){
        int n = exponent(x, y/2);
        return n*n;
    }

    if(!check(y))
        return x*exponent(x, y-1);

}

bool check(int y){
    if(y%2 == 0) return true;
    return false;
}

int main(){
    int x, y;
    cin >> x >> y;

    cout << exponent(x, y) << "\n";

    return 0;
}
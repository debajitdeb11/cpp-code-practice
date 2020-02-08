//References in C++

#include <bits/stdc++.h>
using namespace std;

int main(){
    int x = 10;
    int &ref = x;
    cout << "x = " << x << "\n";
    ref = 1000;
    cout << "ref = " << x << "\n";

    return 0;
}
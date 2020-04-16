// Josephus Problem

#include <iostream>
using namespace std;

int Josephus(int n, int k){
    if (n == 1)
        return 0;
    else
        return ((Josephus(n-1, k)+k )% n);
}

int main(){
    int n, k;
    cin >> n >> k;
    cout << "The Josephus Position is" << Josephus(n, k) << endl;
    return 0;
}
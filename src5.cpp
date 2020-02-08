// 2-D array

#include <bits/stdc++.h>
using namespace std;

int main(){
    int a[100][100];
    int k = 0;
    for(int i = 0; i < 10; i++){
       for(int j = 0; j < 10; j++){
            
           a[i][j] = k;
            k++;
        }
    }


    for(int i = 0; i < 10; i++){
        for(int j = 0; j < 10; j++){
            cout << a[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
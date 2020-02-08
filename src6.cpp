// Vectors in C++
#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> v;
    for(int i = 0; i <= 5; i++){
        v.push_back(i);
    }

    cout << "initial vector :" << endl;

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }

    cout << endl;

    cout << "After updatation: ";

    v.push_back(100);
    
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    

    return 0;    
}
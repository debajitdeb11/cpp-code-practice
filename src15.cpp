#include <bits/stdc++.h>
using namespace std;

int main(){
    string str = "", words;
    cin >> str;
    int count = 0;
    stringstream s(str);
    while (s >> words)
    {
        count ++;
    }

    cout << count;

    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector <string>name;
    string a;
    name.push_back("Blue");
    name.push_back("Yellow");

    int k = 0;
    while( k<5 ){
        cin >> a;
        name.push_back(a);
        k++;
    }
    

    for (int i = 0; i < name.size(); i++)
    {
       cout <<  name[i] << "\n";
    }
    
    
    return 0;
}

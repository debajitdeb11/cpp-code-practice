#include<iostream>
using namespace std;

bool check(){
    int i;
    cout << "Enter the Number\n";
    cin >> i;

    try{
        if(i <= 0)
            throw i;
        
        if(i % 2 == 0)
            return true;
    }
    catch(...){
        cout << "Enter Again\n";
        check();
    }

    return false;
}


int main(){

    if(check()){
        cout << "Even\n";
    } else {
        cout << "Odd\n";
    }

    return 0;
}
// C++ Program to Demostrate Constructor

#include <bits/stdc++.h>
using namespace std;

class Event{
    public:
        int id;

        // Default Constructor
        Event(){
            cout << "Default Constructor is called!" << endl;
            id = -1;
        }

        // Parametrized Constructor
        Event(int x){
            cout << "Parametrized Constructor is Called!" << endl;
            id = x;
        }
};


int main(){

    // e is used to call default Constructor
    Event e;
    cout << e.id << endl;
    
    // E is used to call Parametrized Constructor
    Event E(10);
    cout << E.id << endl;
    return 0;
}
// Demostration of Constructor Overloading

#include <iostream>
using namespace std;

class AREA{
    public:
        int area;

        AREA(){
            area = 0;
        }

        AREA(int l, int b){
            area = l * b;
        }



        int display(){
           return area; 
        }
};

int main(){

    AREA a1;
    cout << "Initial Area: " << a1.display() << endl;

    AREA a2 (5,6);
    cout << "Final Area - 1: " << a2.display() << endl;

    AREA a3 (10, 10);
    cout << "Final Area - 2:" << a3.display() << endl;

    return 0;
}
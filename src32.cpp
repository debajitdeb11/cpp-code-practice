// Demostration of Access Modifier in C++
// Using Public method.

#include <iostream>
using namespace std;

// Class Definition
class AREA{
    public:
        double radius;

        double compute_area(){
            return 3.14 * radius * radius;
        }
};


int main(){
    AREA a;
    cin >> a.radius;
    cout << "AREA = " << a.compute_area() << endl;
    return 0;
}
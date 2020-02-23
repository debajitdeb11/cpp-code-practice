// Demostration of Class
// Using Protected Access Modifier

#include <iostream>
using namespace std;

class RADIUS{
    protected:
        // protected data member
        double radius;
};

// sub class or derived class
class AREA : protected RADIUS {

    public:

        double area(double radius){
            return 3.14 * radius * radius;
        }

};

int main(){

    double value_of_radius;

    cin >> value_of_radius;

    AREA a;
    cout << "AREA is Equals to = " << a.area(value_of_radius) << endl;
    
    return 0;
}
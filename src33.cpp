// Demostration of Access Modifiers in C++ 
// Using Private Method

#include <iostream>
using namespace std;

// Definiation of Class
class AREA{
    private:
        double radius;

    public:
        void compute_area(double r){
            radius = r;

            double area = 3.14 * radius * radius;

            cout << "Radius is equals to = " << radius << endl;
            cout << "Area is equals to = " << area << endl;
        }
};


int main(){
    int value;
    cin >> value;
    AREA a;
    a.compute_area( value );
    return 0;
}
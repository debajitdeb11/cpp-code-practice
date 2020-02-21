// Declaration outside the class

#include <iostream>
#include <string.h>
using namespace std;

class Student{
    public:

        string name;
        int roll;


        void set_data();
        void get_data();
};

void Student::set_data(){
   
    cout << "Enter your Name: ";
    cin >> name;
    cout << "Enter you Roll No: ";
    cin >> roll;
    cout <<endl;
}

void Student::get_data(){
    cout << "Name :" << name << endl;
    cout << "Roll No:" << roll << endl;
}

int main(){

    Student S;
    S.set_data();
    S.get_data();

    cout << "Thank You \n Bye!\n";
    return 0;
}
/*
Class Templates Like function templates, class templates are useful 
when a class defines something that is independent of the data type. 
Can be useful for classes like LinkedList, BinaryTree, Stack, Queue, Array, etc.
*/

#include <iostream>
using namespace std;

template <class T>

class Array{
    
    T *ptr;
    int size;

    public:
        Array(T arr[], int s);
        void print();
};

template <typename T>
Array <T> :: Array(T arr[], int s){
    ptr = new T[s];
    size = s;
    for(int i = 0 ; i < size ; i++)
        ptr[i] = arr[i];
}

template <typename T>
void Array<T> ::print(){
    for(int i = 0; i < size; i++)
        cout << " " << *(ptr+i);

    cout << endl;
}

int main(){
    int arr[5] = {1, 2, 3, 4, 5};
    Array <int> a(arr, 5);
    a.print();
    return 0;
}
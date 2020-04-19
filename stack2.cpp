// User implemention of Stack using Array

#include <iostream>
using namespace std;

#define MAX 100

class Stack{
    int top;

    public:
        int a[MAX];

    Stack(){ int top = -1; }
    bool push(int x);
    int pop();
    int peek();
    bool isEmpty();
    void display();
};

bool Stack::push(int x){
    if(top >= (MAX-1)){
        cout << "Stack is Overflow\n";
        return false;
    } else {
        a[++top] = x;
        cout << x << " : The element is pushed into the Stack\n";
        return true;
    }
}

int Stack::pop(){
    if(top < 0){
        cout << "Stack is Underflow\n";
        return 0;
    } else {
        int x = a[top--];
        return x;
    }
}

int Stack::peek(){
    if(top < 0){
        cout <<"Stack is Empty\n";
        return 0;
    } else {
        int x = a[top];
        return x;
    }
}

bool Stack::isEmpty(){
    return (top < 0);
}


int main(){
    Stack s;
    cout << "How many element is you want to push into the Stack\n";
    int t, data, p;
    cin >> t;

    while(t--){
        cin >> data;
        s.push(data);
    }
    
    cout << " Top Element in the stack is : "<<s.peek()<<"\n";

    cout << "How many elements you want to pop\n";
    cin >> p;
    while(p--){
        s.pop();
    }

    cout << "Top element in the Stack is : " <<s.peek()<<"\n";

    return 0;
}
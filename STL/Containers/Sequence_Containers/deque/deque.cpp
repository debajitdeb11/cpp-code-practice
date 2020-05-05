/*

Double ended queues are sequence containers with the feature of expansion and contraction on both the ends.
They are similar to vectors, but are more efficient in case of insertion and deletion of elements. 
Unlike vectors,contiguous storage allocation may not be guaranteed.
Double Ended Queues are basically an implementation of the data structure double ended queue. 
A queue data structure allows insertion only at the end and deletion from the front. 
This is like a queue in real life, wherein people are removed from the front and added at the back. 
Double ended queues are a special case of queues where insertion and deletion operations are 
possible at both the ends.

The functions for deque are same as vector, with an addition of push and pop operations for both front and back.

*/

#include <iostream>
#include <deque>
#include <iterator>
using namespace std;

// Display Deque
void display(deque<int> deq)
{
    deque<int>::iterator it;

    if (deq.empty())
        cout << "Deque is empty\n";

    for (it = deq.begin(); it != deq.end(); ++it)
        cout << *it << " ";
    cout << "\n";
}

int main()
{
    deque<int> deq;
    char z;
    int value;
    deq.push_front(9);
    deq.push_front(3);
    // Display the deque
    cout << "The Elements are:  ";
    display(deq);

    //to the display the maximum of the deque
    cout << "The maximum elements deque can hold: " << deq.max_size() << " \n";

    // to pop element from front
    cout << "After popping a element from front: ";
    deq.pop_front();
    display(deq);

    cout << "After Popping a element from back:  ";
    deq.pop_back();
    display(deq);

    return 0;
}
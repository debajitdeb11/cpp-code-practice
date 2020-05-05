#include <iostream>
#include <list>
#include <iterator>
using namespace std;

// To display list
void display(list<int> li)
{
    list<int>::iterator it;
    for (it = li.begin(); it != li.end(); ++it)
        cout << " " << *it;

    cout << "\n";
}

int main()
{
    // Initialized list
    list<int> gqlist1;
    list<int> gqlist2;

    for (int i = 0; i < 10; i++)
    {
        gqlist1.push_back(i * 2);
        gqlist2.push_front(i * 3);
    }

    // Display the Element of the List
    cout << "Display the Element of List: 1\n";
    display(gqlist1);

    cout << "Display the element of List: 2\n";
    display(gqlist2);

    // Display the front & back of the List
    cout << "List-1 front():  " << gqlist1.front() << "\n";

    cout << "List-2 back():  " << gqlist2.back() << "\n";

    // Pop the elements from the list
    cout << "Pop() Element from the back of the List-1:  "
         << "\n";
    gqlist1.pop_back();
    display(gqlist1);

    cout << "Pop() Element from the front of the List - 2:  "
         << "\n";
    gqlist2.pop_front();
    display(gqlist2);

    // Reverse the list
    cout << "Reverse List-1: ";
    gqlist1.reverse();
    display(gqlist1);

    cout << "Reverse List-2: ";
    gqlist2.reverse();
    display(gqlist2);

    // Sort the List
    cout << "Sort the List-1: ";
    gqlist1.sort();
    display(gqlist1);

    return 0;
}
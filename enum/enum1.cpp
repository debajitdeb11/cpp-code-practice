// Program to demostrate the use of enum

#include <iostream>
using namespace std;

int main()
{

    enum Months
    {
        Jan,
        Feb,
        Mar,
        Apr,
        May,
        Jun,
        July,
        Aug,
        Sep,
        Oct,
        Nov,
        Dec
    } months;

    cout << months;

    return 0;
}
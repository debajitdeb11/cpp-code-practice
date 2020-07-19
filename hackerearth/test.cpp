#include <bits/stdc++.h>
using namespace std;

#define ll long long

int arr[1];

unsigned ll int points(unsigned ll int card);

unsigned ll int solver();

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    unsigned int t;

    cin >> t;

    while (t--)
    {
        cout << solver() << " " << arr[0] << "\n";
    }

    return 0;
}

unsigned ll int solver()
{

    int n;
    ll int chefCard, mortyCard;
    int pointsChef = 0, pointsMorty = 0;

    cin >> n;

    while (n--)
    {
        cin >> chefCard >> mortyCard;

        if (points(chefCard) > points(mortyCard))
        {
            pointsChef++;
        }

        if (points(chefCard) < points(mortyCard))
        {
            pointsMorty++;
        }
    }

    if (pointsChef > pointsMorty)
    {
        arr[0] = pointsChef;
        return 0;
    }

    if (pointsChef < pointsMorty)
    {
        arr[0] = pointsMorty;
        return 1;
    }

    arr[0] = pointsChef;
    return 2;
}

unsigned ll int points(unsigned ll int card)
{

    unsigned ll int point = 0;

    while (card > 0)
    {

        unsigned ll int digit = card % 10;

        point += digit;

        card /= 10;
    }

    return point;
}
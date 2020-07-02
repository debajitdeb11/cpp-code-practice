#include <bits/stdc++.h>
using namespace std;

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;

    cin >> n;

    if (n >= 1 && n < 10)
    {
        if (n % 7 == 0 || n % 4 == 0)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    if (n >= 10 && n < 100)
    {
        int unit = n % 10;
        int tens = n / 10;

        if ((unit == 4 || unit == 7) && (tens == 4 || tens == 7))
            cout << "YES\n";

        else if (n % 4 == 0 || n % 7 == 0)
            cout << "YES\n";

        else
            cout << "NO\n";
    }

    if (n >= 100 && n < 1000)
    {
        int unit = n % 10;
        int tens = (n / 10) % 10;
        int hundred = (n / 10) / 10;

        if ((unit == 7 || unit == 4) && (tens == 7 || tens == 4) && (hundred == 7 || hundred == 4))
            cout << "YES\n";

        else if (n % 4 == 0 || n % 7 == 0)
            cout << "YES\n";

        else
            cout << "NO\n";
    }

    if (n == 1000)
        cout << "YES\n";

    return 0;
}
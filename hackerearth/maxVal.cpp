#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t, s, val;
    cin >> t;

    while (t--)
    {
        cin >> s;
        int A[s];

        for (int i = 0; i < s; i++)
        {
            cin >> val;
            A[i] = val;
        }

        int i;
        int j;
        int max = 0;
        int t_max = 0;

        for (i = 0; i < (s - 1) / 2; i++)
        {

            for (j = i + 1; j < s; j++)
            {
                t_max = abs(A[i] - A[j]) + abs(i - j);

                if (t_max > max)
                    max = t_max;
            }
        }

        cout << max << "\n";
    }

    return 0;
}
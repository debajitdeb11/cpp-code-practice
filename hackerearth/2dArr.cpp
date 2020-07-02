#include <bits/stdc++.h>
using namespace std;

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m, val;

    cin >> n >> m;

    int A[n][m];
    int B[n][m];

    // Insertion
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> val;
            A[i][j] = val;
        }
    }

    // Swapping
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {

            B[j][i] = A[i][j];
        }
    }

    // Printing
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << B[i][j] << " ";
        }
        cout << "\n";
    }

    return 0;
}
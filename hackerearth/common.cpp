#include <bits/stdc++.h>
using namespace std;

long long SimilarElementsPairs(vector<int> A, int N)
{
    // Write your code here
    sort(A[0], A[N - 1]);

    int i, j, k = 0;
    for (i = 0; i < N / 2; i++)
    {
        for (j = i + 1; j < N - 1; j++)
        {
            if (abs(A[i] - A[j]) == 1)
                k++;
        }
    }
    return 2 * k;
}

int main()
{

    ios::sync_with_stdio(0);
    cin.tie(0);
    int N;
    cin >> N;
    vector<int> A(N);
    for (int i_A = 0; i_A < N; i_A++)
    {
        cin >> A[i_A];
    }

    long long out_;
    out_ = SimilarElementsPairs(A, N);
    cout << out_;
}
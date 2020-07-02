#include <stdio.h>
#include <stdlib.h>

int main()
{
    // ios_base::sync_with_stdio(false);
    // cin.tie(NULL);

    int t, s, val;
    scanf("%d", &t);

    while (t--)
    {
        scanf("%d", &s);
        int A[s];

        for (int i = 0; i < s; i++)
        {
            scanf("%d", &val);
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

        printf("%d\n", max);
    }

    return 0;
}
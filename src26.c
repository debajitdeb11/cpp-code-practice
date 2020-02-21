// Implementation of Union

#include <stdio.h>

union src26
{
    int a;
    float b;
};


int main()
{

    union src26 u;
    u.a = 5;

    printf("Integer = %d\n Size = %ld \n \n ", u.a, sizeof(u.a));

    u.b = 5.012;

    
    printf("Integer = %0.2f\n Size = %ld \n", u.b, sizeof(u.b));


    return 0;
}

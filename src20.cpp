// DMA using realloc()

// ------------------------ ************************** ---------------------------

// I'm not sure about the program

// ------------------------ ************************** ---------------------------

#include <bits/stdc++.h>
using namespace std;

int main(){
    int *ptr, n, m;

    scanf("%d", &n);

    ptr = (int*)malloc(n * sizeof(int));

    printf("%d\n", ptr);

    scanf("%d", &m);

    ptr = (int *)realloc(ptr, m * sizeof(int));

    printf("%d\n", ptr);

    free(ptr);

    return 0;
}
// Dynamic Memory allocation 
// DMA using malloc()

#include <stdio.h>
#include <stdlib.h>

int main(){
    int n;
    int *ptr;

    scanf("%d", &n);

    // Dynamic Allocation of memory into the array
    ptr = (int *)malloc(n * sizeof(int));

    // For insertion into the Array
    for (int i = 0; i < n; i++)
    {
        
        ptr[i] = i+1;
    }
     
    // For printing the Array
    for (int i = 0; i < n; i++)
    {
        printf("%d \n", ptr[i]);
    }

    free(ptr);

    return 0;
}
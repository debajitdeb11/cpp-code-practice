// Dynamic Memory allocation.
// Program Using calloc()

#include <stdio.h>
#include <stdlib.h>         // header for using malloc, calloc, etc.

int main(){
    int *arr;
    
    arr = (int*)calloc(100, sizeof(int));

    int k = 0;
    while (true)
    {   scanf("%d", &arr[k]);

        if (arr[k] == 42)
        {
            break;
        }   else {
        printf("%d \n", arr[k]);
        k++;
        
        }

    free(arr);
        
    }
    

    

    

    return 0;
}
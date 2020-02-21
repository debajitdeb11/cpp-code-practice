// Program using header file #include <time.h>
#include <stdio.h>
#include <time.h>

int main(){

    time_t seconds;
    time(&seconds);
    printf("Second Since January 1 1970 = %ld\n", seconds);
    return 0;
}
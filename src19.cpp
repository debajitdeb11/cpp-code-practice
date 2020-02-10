// Dynamic Memory Allocation
// DMA using realloc()


// ****************************************** valgrind *******************************//
/*

    1. First compile the program using: 
    $ g++ src19.cpp

    2. Open the O/P of the program i.e., a.out using valgrind
    $ valgrind ./a.out.

    Output:

    ==4247== Memcheck, a memory error detector
==4247== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==4247== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==4247== Command: ./a.out
==4247== 
==4247== 
==4247== HEAP SUMMARY:
==4247==     in use at exit: 0 bytes in 0 blocks
==4247==   total heap usage: 1 allocs, 1 frees, 10 bytes allocated
==4247== 
==4247== All heap blocks were freed -- no leaks are possible
==4247== 
==4247== For counts of detected and suppressed errors, rerun with: -v
==4247== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)


*/


#include <stdio.h>
#include <stdlib.h>

int main(){
    int *ptr;
    ptr = (int*) malloc(10);
    free(ptr);
    return 0;
}
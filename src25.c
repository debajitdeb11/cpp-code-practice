// Implementation of 'enum'

#include<stdio.h> 
  
enum week
    {
        Mon, Tue, Wed, Thur, Fri, Sat, Sun
    }; 
  
int main() 
{ 
    enum week day;
    day = Sun;
    printf("Day %d\n", day);

    return 0;
}  

#include "./libraries/cs50.c"
#include <stdio.h>

int main(void) {
     printf("n:");
     int n = GetInt();
     int rest = n % 2;
     if(rest == 0) {
        printf("%i is EVEN \n", n);
     } else {
        printf("%i is ODD \n", n);
     }
}

/* 
Pseudocode:
1. Ge number for user
    a. if number if a even, print EVEN
    b. else, print ODD
*/
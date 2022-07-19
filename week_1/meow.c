#include "./libraries/cs50.c"
#include <stdio.h>

int meow(int number_to_meow) {
    int i = 0;
    while( i < number_to_meow ) {
       printf("%i. MEOW \n", i + 1);
       i++;
    }

    for(int i = 0; i < number_to_meow; i++) {
       printf("%i. MEOW \n", i + 1);
    }
}

int main(void) {
    printf("Enter the number of times to meow: ");
    int number_to_meow = GetInt();
    meow(number_to_meow);
}
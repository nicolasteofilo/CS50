#include "./libraries/cs50.c"
#include <stdio.h>

int main(void) {
    int n;
    do {
        printf("Size: ");
        n = GetInt();
    } while (n < 1);

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            printf("#");
        }
        printf("\n");
    }
    // for(int i = 0; i < n; i++) {
    //     printf("#");
    // }

    // for(int i; i < n; i++) {
    //     printf("?");
    // };
    printf("\n");
}
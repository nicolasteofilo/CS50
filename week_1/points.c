#include "./libraries/cs50.c"
#include <stdio.h>

int main(void) {
    const int MINE = 20;
    printf("How many points did you lose? ");
    int points = GetInt();

    if(points < MINE) {
        printf("You lost fewer points than me. \n");
    } else if(points > MINE) {
        printf("You lost more points than me. \n");
    } else {
        printf("You lost the same number points as me. \n");
    }
}
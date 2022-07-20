#include "./libraries/cs50.c"
#include <stdio.h>
#include <math.h>

int main(void) {
    printf("Dollar amount:  \n");
    float amount = GetFloat();
    int pennies = round(amount * 100);
    printf("Pennies: %i", pennies);
}
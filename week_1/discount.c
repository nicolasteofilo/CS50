#include "./libraries/cs50.c"
#include <stdio.h>

float discount(float price, int percentage);

int main(void) {
    printf("Regular price: "); float reguler = GetFloat();
    printf("Percent off: "); int  percent_off = GetFloat();
    printf("Sale price $%.2f\n", discount(reguler, percent_off));
}

float discount(float price, int percentage) {
    return price * (100 - percentage) / 100;
}
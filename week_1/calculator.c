#include "./libraries/cs50.c"
#include <stdio.h>

int main(void) {
    printf("x: ");
    long long x = GetLongLong(); // verybig interger -> 64 bits
    printf("y: ");
    long long y = GetLongLong();
    long long sum = x + y;
    printf("x + y = %lld \n", sum);
}
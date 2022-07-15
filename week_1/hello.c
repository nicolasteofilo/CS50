#include "./libraries/cs50.c"
#include <stdio.h>

int plusOne(int numberToIncrease, int plusNumber) {
    // return numberToIncrease += 1;
    return numberToIncrease + plusNumber;
}

int main(void) 
{
    int counter = 0;
    printf("What's your name? ");
    string input_name = GetString();
    counter = plusOne(counter, 1);
    string welcome = ", welcome!";
    printf("Hello %s%s, counter: %i \n", input_name, welcome, counter);
}
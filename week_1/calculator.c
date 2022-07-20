#include "./libraries/cs50.c"
#include <stdio.h>

void red () {
  printf("\033[1;31m");
}

int sum(int first_number, int second_number) {
    return first_number + second_number;
}

int sub(int first_number, int second_number) {
    return first_number - second_number;
}

float division(int first_number, int second_number) {
    return (float) first_number / (float) second_number;
}

int multiplication(int first_number, int second_number) {
    return first_number * second_number;
}

int main(void) {
    printf(" 1 - sum \n 2 - subtraction \n 3 - division \n 4 - multiplication \n");
    int option = GetLongLong(); // verybig interger -> 64 bits
    if (option == 1) {
        printf("first number: ");
        float first_number = GetFloat();

        printf("second number: ");
        float second_number = GetFloat();

        float operation = sum(first_number, second_number);
        red();
        printf("result of sum: %.2f \n ", operation);
        exit(0);
    } else if(option == 2) {
        printf("first number: ");
        float first_number = GetInt();

        printf("second number: ");
        float second_number = GetInt();

        float operation = sub(first_number, second_number);
        red();
        printf("result of subtraction: %f \n ", operation);
        exit(0);
    } else if(option == 3) {
        printf("first number: ");
        int first_number = GetInt();

        printf("second number: ");
        int second_number = GetInt();

        float operation = division(first_number, second_number);
        red();
        printf("result of division: %f \n ", operation);
        exit(0);
    } else if(option == 4) {
        printf("first number: ");
        float first_number = GetInt();

        printf("second number: ");
        float second_number = GetInt();

        float operation = multiplication(first_number, second_number);
        red();
        printf("result of multiplication: %f \n ", operation);
        exit(0);
    } else {
        red();
        printf("None of the available options is chosen! \n");
        exit(0);
    }
}
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

int division(int first_number, int second_number) {
    return first_number / second_number;
}

int multiplication(int first_number, int second_number) {
    return first_number * second_number;
}

int main(void) {
    printf(" 1 - sum \n 2 - subtraction \n 3 - division \n 4 - multiplication \n");
    int option = GetLongLong(); // verybig interger -> 64 bits
    if (option == 1) {
        printf("first number: ");
        int first_number = GetInt();

        printf("second number: ");
        int second_number = GetInt();

        int operation = sum(first_number, second_number);
        red();
        printf("result of sum: %i \n ", operation);
        exit(0);
    } else if(option == 2) {
        printf("first number: ");
        int first_number = GetInt();

        printf("second number: ");
        int second_number = GetInt();

        int operation = sub(first_number, second_number);
        red();
        printf("result of subtraction: %i \n ", operation);
        exit(0);
    } else if(option == 3) {
        printf("first number: ");
        int first_number = GetInt();

        printf("second number: ");
        int second_number = GetInt();

        int operation = division(first_number, second_number);
        red();
        printf("result of division: %i \n ", operation);
        exit(0);
    } else if(option == 4) {
        printf("first number: ");
        int first_number = GetInt();

        printf("second number: ");
        int second_number = GetInt();

        int operation = multiplication(first_number, second_number);
        red();
        printf("result of multiplication: %i \n ", operation);
        exit(0);
    } else {
        red();
        printf("None of the available options is chosen! \n");
        exit(0);
    }
}
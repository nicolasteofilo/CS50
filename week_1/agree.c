#include "./libraries/cs50.c"
#include <stdio.h>
#include <ctype.h>

int main(void) {
     printf("Do you agree? y[yes] n[no]: ");
     char answer = GetChar();

     if(toupper(answer)  == 'Y') {
        printf("Agreed \n");
     } else if(toupper(answer)  == 'N') {
        printf("Not agreed \n");
     } else {
        printf("Enter a valid number \n");
     }
}
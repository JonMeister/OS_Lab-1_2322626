//
// Created by jonat on 23/08/2024.
//
#include <stdio.h>
int main() {
    int number;
    printf("Enter a number: ");
    const int isValidNumber=scanf("%d", &number);
    if (isValidNumber!=1) {
        printf("Invalid Input");
        return 1;
    }
    if (number % 2 == 0) {
        printf("The number is even");
    } else { printf("The number is odd");}
    return 0;
}

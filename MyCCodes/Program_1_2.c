//
// Created by jonat on 23/08/2024.
//
#include <stdio.h>
int factorial(int number) {
    if (number==0 || number==1) {
        return 1;
    }
    else {
        return number*factorial(number-1);
    }
}
int main() {
    int number;
    printf("Enter a number: ");
    const int isValidInput=scanf("%d", &number);
    if (isValidInput!=1 || number < 0) {
        printf("Invalid Input");
        return 1;
    }
    printf("The factorial of %d is: %d\n", number, factorial(number));
    return 0;
}
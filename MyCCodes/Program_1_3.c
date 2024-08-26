//
// Created by jonat on 23/08/2024.
//
#include <stdio.h>
int power(int base, int exp) {
    if (exp == 0) {
        return 1;
    }
    else {
        return base * power(base, exp - 1);
    }
}
int main() {
    int base, exp;
    printf("Enter base number: ");
    const int isValidBase=scanf("%d", &base);
    if (isValidBase!=1) {
        printf("Invalid input");
        return 1;
    }
    printf("Enter exponent: ");
    const int isValidExp=scanf("%d", &exp);
    if (isValidExp!=1) {
        printf("Invalid input");
        return 1;
    }

    if (exp < 0) {
        printf("Invalid exponent");
        return 1;
    }
    printf("%d to the power of %d is: %d\n", base,exp, power(base, exp));
    return 0;
}
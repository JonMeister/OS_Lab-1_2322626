//
// Created by jonat on 25/08/2024.
//
#include <stdio.h>
int main() {
    printf("Octal numbers: \n");
    for (int i = 1; i <= 10; i++) {
        printf("%o \t", i);
    }
    printf("\n Decimal numbers: \n");
    for (int i = 1; i <= 10; i++) {
        printf("%d \t", i);
    }
    printf("\n Hexadecimal numbers: \n");
    for (int i = 1; i <= 10; i++) {
        printf("%x \t", i);
    }
    return 0;
}
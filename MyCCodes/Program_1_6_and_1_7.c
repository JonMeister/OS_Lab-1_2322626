//
// Created by jonat on 23/08/2024.
//
#include <stdio.h>
#include <ctype.h>
int main() {
    char letter;
    printf("Enter a letter: ");
    scanf("%c", &letter);
    if (isalpha(letter)) {
        if (isupper(letter)) {
            printf("%c is an uppercase letter\n", letter);
        } else {
            printf("%c is a lowercase letter\n", letter);
        }
    }
    else {
        printf("%c is not a letter\n", letter);
    }

    return 0;
}
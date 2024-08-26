//
// Created by jonat on 23/08/2024.
//
#include <stdio.h>
int fibonacci(int n) {
    if (n==0){return 0;}
    if (n==1){return 1;}
    return fibonacci(n-1) + fibonacci(n-2);
}
int main() {
    int n;
    printf("Enter a number: ");
    const int isValidN=scanf("%d", &n);
    if (isValidN!=1 || n<0) {
        printf("Invalid Input");
        return 1;
    }

    printf("Fibonacci series up to n= %d \n",n);
    for (int i = 0; i <= n; i++) {
        printf("%d\t", fibonacci(i));
    }
    return 0;
}
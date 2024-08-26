//
// Created by jonat on 25/08/2024.
//
#include <stdio.h>

int main() {
    int firstNumber;
    int secondNumber;
    int thirdNumber;

    printf("Enter three integers separated by spaces: ");
    const int areValidNumbers=scanf("%d %d %d", &firstNumber, &secondNumber, &thirdNumber);
    if (areValidNumbers!=3) {
        printf("Invalid Input");
        return 1;
    }
    int largestNumber=firstNumber;
    if (secondNumber>largestNumber) {
        largestNumber=secondNumber;
    }
    if (thirdNumber>largestNumber) {
        largestNumber=thirdNumber;
    }
    printf("The largest number is: %d", largestNumber);
    return 0;
}
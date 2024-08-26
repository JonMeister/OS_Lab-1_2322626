//
// Created by jonat on 23/08/2024.
//
#include <stdio.h>
int main(){
  int year;
  printf("Enter a year: ");
  const int isNumber = scanf("%d", &year);
  if(isNumber !=1 || year < 0) {
    printf("Invalid Input, please enter a number");
    return 1;
  }

  if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)){
    printf("This is a leap year");
  }
  else{
    printf("This is not a leap year");
  }
  return 0;
}

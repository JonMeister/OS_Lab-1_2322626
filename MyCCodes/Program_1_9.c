//
// Created by jonat on 25/08/2024.
//
#include <stdio.h>
int main() {
    int impInt = 24;
    float impFloat = impInt;  // Implicitly converts integer to float
    printf("this integer: %d was converted to float implicitly: %f \n",impInt,impFloat);

    float expFloat = 10.5;
    int expInt = (int)expFloat;  // Explicitly casts float to int
    printf("this float: %f was converted to integer explicitly: %d \n",expFloat,expInt);

    return 0;
}
#include <stdio.h>
#include <stdlib.h>
/*
Author:AngelSR
Date:9-12-18
Description: This program divides two integers and store result inside a float
*/



int main()
{
    //declaration:
    float N = 0.0;
    float D = 0.0;
    float Q = 0.0;   //can be coded: float N = 0.0, D = 0.0, Q = 0.0
    //input:

    printf("Enter N: ");
    scanf("%f", &N); //Enter: 12345679.789

    printf("Enter D: ");//enter:1
    scanf("%f", &D);

    //calculation:
    Q = N / D;
    //output:
    printf("The quotient of %2.2f and %2.2f is %1.2f", N, D, Q);
    return 0;
} //end main


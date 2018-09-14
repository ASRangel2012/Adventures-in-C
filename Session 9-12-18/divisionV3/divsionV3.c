#include <stdio.h>
#include <stdlib.h>
/*
Author:AngelSR
Date:9-12-18
Description: This program divides two double (2 times larger than a float)
*/



int main()
{
    //declaration:
    double N = 0.0;
    double D = 0.0;
    double Q = 0.0;   //can be coded: float N = 0.0, D = 0.0, Q = 0.0
    //input:

    printf("Enter N: ");
    scanf("%lf", &N); //if used to scan a long float value form the keyboard

    printf("Enter D: ");
    scanf("%lf", &D);

    //calculation:
    Q = N / D;
    //output:
    printf("The quotient of %2.2f and %2.2f is %1.2f", N, D, Q);
    return 0;
} //end main


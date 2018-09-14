#include <stdio.h>
#include <stdlib.h>
/*
Author:AngelSR
Date:9-12-18
Description: This program divides two double prevent division by zero
*/



int main()
{
    //declaration:
    double N = 0.0;
    double D = 0.0;
    double Q = 0.0;
//input:

    printf("Enter N: ");
    scanf("%lf", &N);

    printf("Enter D: ");
    scanf("%lf", &D);
    if( D = 0 ) //Think about allowing user to repeat input for a good D
        printf("WRONG! Cannot divide by zero!...\n");
    else
    {

     //calculation:
    Q = N / D;
    //output:
    printf("The quotient of %2.2f and %2.2f is %1.2f\n", N, D, Q);
    }//end else
    printf("value stored D is %2.2f",D);
    printf("goodbye\n");


    return 0;
} //end main


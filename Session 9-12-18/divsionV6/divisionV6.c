#include <stdio.h>
#include <stdlib.h>
/*
Author:AngelSR
Date:9-12-18
Description: This program divides two double prevent division by zero and allow for a new input in the denominator by 3 attempts
*/



int main()
{
    //declaration:
    double N = 0.0;
    double D = 0.0;
    double Q = 0.0;
    unsigned short int counter = 0;
//input:

    printf("Enter N: ");
    scanf("%lf", &N);

    printf("Enter D: ");
    scanf("%lf", &D);
    counter = counter + 1; //same as :counter++
    while( D == 0 && counter != 3) //Think about allowing user to repeat input for a good D
    {
        printf("WRONG! Cannot divide by zero!...\n");
        printf("Enter D: ");
        scanf("lf", &D);
        scanf("%lf", &D);
        counter++;
    }// end while D // think about limiting user attempts at a good to 3

    {
       if(D !=0);
    }

    Q = N / D;


    printf("The quotient of %2.2f and %2.2f is %1.2f\n", N, D, Q);
    printf("value stored D is %2.2f", D);
    printf("goodbye\n");


    return 0;
} //end main


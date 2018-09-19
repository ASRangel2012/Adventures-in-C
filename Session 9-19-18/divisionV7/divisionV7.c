#include <stdio.h>
#include <stdlib.h>
/*
Author:AngelSR
Date:9-12-18
Description: This program divides two double prevent division by zero and allow for a new input in the denominator by 3 attempts
*/

double divide(double N, double D);
int main()
{
    //declarations:
    double N = 0.0;
    double D = 0.0;
    double Q = 0.0;
    unsigned short int counter = 0;
    //input:
    printf("Enter N: ");
    scanf("%lf", &N);
    printf("Enter D: ");
    scanf("%lf", &D);
    counter = counter + 1; //same as : counter++
    while(D == 0 && counter != 3) //think about allowing user to repeat input for a good D
    {
        printf("Sorry! cannot divide by zero...\n");
        printf("Enter D: ");
        scanf("%lf", &D);
        counter++;
    }//end while D    //think about limiting user attempts at a good D to 3
    if(D !=0 )
    {
          //calculation:
        Q = divide( N, D);  // This  is a call by value
        //output:
        printf("The quotient of %2.2f and %2.2f is %1.2f\n", N, D, Q);
    }//end if

    printf("value stored inside D is %2.2f\n", D);
    printf("Goodbye!");
    return 0;
}//end main

//=============

double divide(double N, double D) //does not matter what you call these arguments
{
    /*double Q = 0.0;
    Q = N / D
    return Q;
    */

return (N / D);
}//end

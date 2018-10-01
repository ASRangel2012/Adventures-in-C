#include <stdio.h>
#include <stdlib.h>
/*
Author: Angel A. Selva-Rodriguez
Dare: 9-26-18
Description:  this program divides two doubles prevent division by zero and allow for a new input
for the denominator up to 3 attempts
    ======> this program implements a modular design using functions.
*/
//prototypes:
void getND(double* aN, double* aD); // void getND(double*, double*);
double divide(double N, double D); //can be coded as:   double divide(double, double);
void display(double, double, double);

//----------------------------------------------
int main()
{
    //declarations:
    double N = 0.0;
    double D = 0.0;
    double Q = 0.0;

    //input:
    getND(&N, &D);
    if(D !=0 )
    {
          //calculation:
       Q = divide(N, D); //this is a call by value
        //output:
        display(N, D, Q);
    }//end if

    printf("Goodbye!");
    return 0;
}//end main
//=====================================================================================
void getND(double* aN, double* aD) //aN = &N  and aD = &D
{
    int counter = 0;
    printf("Enter N: ");
    scanf("%lf", aN);
    printf("Enter D: ");
    scanf("%lf", aD);
    counter++;
    while(*aD == 0 && counter != 3)
    {
        printf("Wrong! ");
        printf("Enter D: ");
        scanf("%lf", aD);
        counter++;
    }//end while D    //think about limiting user attempts at a good D to 3
}//end getD
//=====================================================================================
double divide(double N, double D) //does not matter what you call these arguments
{   /*
    double Q = 0.0;
    Q = N / D
    return Q;
    */
    return (N / D);
}//end
//=======================================================================================
void display(double N, double D, double Q)
{

    printf("The quotient of %2.2f and %2.2f is %1.2f\n", N, D, Q);
}


#include <stdio.h>
#include <stdlib.h>
/*
Author: COP2220
Dare: 9-19-18
Description:  this program divides two double prevent division by zero and allow for a new input
for the denominator up to 3 attempts
    ======> this program must implement a modular design using functions.
*/
//TO DO : code the input, and the output as separate functions.

//prototypes:Just a header!
double getN();
double getD();
double divide(double N, double D); //can be coded as:   double divide(double, double);
void display(double, double, double);
int main()
{
    //declarations:
    double N = 0.0;
    double D = 0.0;
    double Q = 0.0;
    unsigned short int counter = 0;
    //input:
    N = getN();
    D = getD();
    counter = counter + 1; //same as : counter++
    while(D == 0 && counter != 3) //think about allowing user to repeat input for a good D
    {
        printf("Wrong! ");
        D = getD();
        counter++;
    }//end while D    //think about limiting user attempts at a good D to 3
    if(D !=0 )
    {
          //calculation:
       Q = divide(N, D); //this is a call by value
        //output:
        display(N , D, Q);
    }//end if

    printf("value stored inside D is %2.2f\n", D);
    printf("Goodbye!");
    return 0;
}//end main
//===================================================================================
double getN()
{
    double N = 0.0;
    printf("Enter N: ");
    scanf("%lf", &N);
    return N;

}//return getN

double getD()
{
    double D = 0.0;
    printf("Enter D: ");
    scanf("%lf", &D);
    return D;

}//return getD
//=====================================================================================
double divide(double N, double D) //does not matter what you call these arguments
{   /*
    double Q = 0.0;
    Q = N / D
    return Q;
    */
    return (N / D);
}//end

//========================================================================================4
void display(double N, double D, double Q)
{
    printf("The quotient of %2.2f and %2.2f is %1.2f\n", N, D, Q);

}

#include <stdio.h>
#include <stdlib.h>
/*
Author:AngelSR
Date:9-12-18
Description: This program divides two integers
*/



int main()
{
    //declaration:
    int N = 0;
    int D = 0;
    int Q = 0; //can Q can be an int always?

    //input:

    printf("Enter N: ");
    scanf("%d", &N);

    printf("Enter D: ");
    scanf("%d", &D);

    //calculation:
    Q = N / D;//Q may not be an int and if the real number is a decimal part will be truncated"
    //output:
    printf("The quotient of %d and % d is %d", N, D, Q);
    return 0;
} //end main


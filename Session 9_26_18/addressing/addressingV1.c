#include <stdio.h>
#include <stdlib.h>
/*
Author: COP2220
Dare: 9-26-18
Description: demonstrating the use of memory locations addresses
*/
int main()
{
    int x = 5;

    printf("the value stored at location x is %d\n", x);
    printf("the address of where %d is stored is %d\n", x, &x);
    printf("the address in pointer notation of where %d is stored is %p\n", x, &x);
    printf("the value stored in x is %d\n", *&x); //value (*) stored at address (&) x
    //difference between a pointer and a value pointed to
    double y = 2.5;
    double* py = &y;
    printf("value stored in y using y is %.2f\n", y);
    printf("address of y where %d is stored is %p\n", &y);
     printf("address of y where %d is stored is %p\n", py);
     printf("the value stored in y using py is %.2f\n", *py );

    return 0;
}

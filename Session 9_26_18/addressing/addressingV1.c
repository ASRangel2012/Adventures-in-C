#include <stdio.h>
#include <stdlib.h>
/*
Author: COP2220
Dare: 9-26-18
Description:  Demonstrating the use of memory locations addresses
*/

int main()
{
    int x = 5;

    printf("The value stored at location x is %d \n", x);
    printf("the address of where %d is stored is %d \n", x, &x);
    printf("the address in pointer notation of where %d is stored is %p \n", x, &x);
    return 0;
}

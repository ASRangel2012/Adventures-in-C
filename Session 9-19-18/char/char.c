#include <stdio.h>
#include <stdlib.h>

/*
Author: Angel A. Selva-Rodriguez
Date: 09/19/18
description: This program processes char input
*/

int main()
{

    //declarations
    char x = ' ';
    //process

    printf("Enter a char: ");
    scanf("%c", &x);

    //output
    printf("The char you entered is %c\n", x);
    return 0;
}

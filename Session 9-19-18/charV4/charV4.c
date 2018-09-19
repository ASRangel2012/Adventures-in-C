#include <stdio.h>
#include <stdlib.h>
#include <conio.h>


/*
Author: Angel A. Selva-Rodriguez
Date: 09/19/18
description: This program
*/


int main()
{

    //declarations
    char x = ' ';

    while (x != EOF)
    {
        x = getch();
        printf("You enter %c \n and enter its ASCII Code is %d\n", x, (int) (x));

    }


}


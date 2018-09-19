#include <stdio.h>
#include <stdlib.h>
#include <conio.h>


/*
Author: Angel A. Selva-Rodriguez
Date: 09/19/18
description: This program processes ASCII code and render their related char
*/

int main()
{

    //declarations
    int code = 0;

    //processing
    while ( code < 255)
    {

        printf("The char corresponding to the code %d is %c \n",code, (char)(code));
        code++;
    }


       return 0;
}


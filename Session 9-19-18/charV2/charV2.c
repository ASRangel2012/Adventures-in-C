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

    while (x != EOF)
    {
        x = getchar();
        putchar(x);
    }

    //processing


    return 0;
}//end main

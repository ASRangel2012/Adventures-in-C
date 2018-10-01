#include <stdio.h>
#include <stdlib.h>
/*
Author: Angel A. Selva-Rodriguez
Dare: 9-30-2018
Description:  This program verifies if applicant is eligible for a loan and keeps track of denied and approved users.
*/

// Prototypes declared outside of main!

void getHomeVeri(double*, double*, double*);



int main()
{
        double homeOwner, homeDebt, homeIncome = 0.0; //declarations

        getHomeVeri(&homeOwner,&homeDebt,&homeIncome);// verify incoming from void values(dereferencing)

        if(homeOwner && homeDebt && homeIncome ==0)//if statement to verify 1 or 0 for response.
        {
        printf("\n You are not eligible for this loan!");
        }else
        printf(" \n You are eligible for this loan!");
        //end if

return 0;
}//end main

void getHomeVeri(double* ahomeOwner, double* ahomeDebt, double* ahomeIncome)//pointers
{


    printf("\n  Use 1 for yes and 0 for no for the following questions! \n Are you a home owner?");// sets pointers for main to use
    scanf("%d", ahomeOwner);
    printf("\n  Do you own your home?");
    scanf("%d",ahomeDebt);
    printf("\n Is your household income equal to or greater than 45k?");
    scanf("%d", ahomeIncome);

//not sure if I am doing this correctly!

}


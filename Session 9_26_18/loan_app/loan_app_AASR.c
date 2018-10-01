#include <stdio.h>
#include <stdlib.h>
/*
Author: Angel A. Selva-Rodriguez
Dare: 9-30-2018
Description:  This program verifies if applicant is eligible for a loan and keeps track of denied and approved users.
*/

int main()
{
    int choice_made;
//This is basically a very simple user input for the specified conditions.

    printf("1 - If you do not own a house... (%d)\n", &choice_made);
    printf("2 - If you own a house but are still making payments on it... (%d)\n", &choice_made);
    printf("3 - If you own a house completely but make less than 45k a year... (%d)\n", &choice_made);
    printf("4 - If you own a house completely and make more or equal to 45k a year... (%d)\n", &choice_made);
    printf("5 - If you would like to quit program... (%d)\n", &choice_made);

    printf("Please enter a number that best describes your current situation:");
    scanf ("%d",&choice_made);

//This verifies what best option applies to the user and prints the eligibility message.
    if(choice_made == 1){
        printf("You are not eligible for this loan... %2.2d = 1 ",choice_made);
    }else if(choice_made == 2){
        printf("You are not eligible for this loan...%2.2d = 2", choice_made);
    }else if(choice_made == 3){
        printf("You are not eligible for this loan....%2.2d = 3", choice_made);
    }else if(choice_made == 4){
        printf("You are eligible for this loan...%2.2d = 4", choice_made);
    }else
        printf("Quitting now %2.2d = 5", choice_made);

        return 0;
}

/*
I am aware this not meet the full specs that you requested, however my aim was to provide the simplest solution I could come up with.
I will be visiting you during tutoring hours to go over this assignment, if possible.
However, on the days that you are available I am usually not able to make it campus.
Would it be possible to do a virtual lesson for tutoring using WEBX?
I will send this in the comments sections as well.
*/




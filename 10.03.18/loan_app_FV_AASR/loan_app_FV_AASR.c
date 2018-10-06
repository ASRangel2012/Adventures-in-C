#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
/*
Author: Angel
Date: 10-03
Description:
*/

//prototypes:
void getInfo(bool*, bool*, bool*);
bool evaluate(bool, bool, bool);
void report(bool);
void stats(int, int);
//-----------------------------------
int main()
{
    //declarations:
    bool own = false;
    bool mortgage = true;
    bool income = 0;
    bool eligible = 0;
    int answer = 1;
    int eCount = 0;
    int neCount = 0;
    bool more = true;
    while(more) //while (more == true)
    {

        //input:
        getInfo(&own, &mortgage, &income);
        //evaluation:
        eligible = evaluate(own, mortgage, income);
        //report
        report(eligible);
        //=============================================================
        //another application?
        printf("\n\nAnother application? 1 for yes or 0 for no: ");
        scanf("%d", &answer);
        if(answer == 1)
            more = true;
        else
            if (answer == 0)
                more = false;
        while(answer != 1 && answer != 0)
        {
              printf("\n\nWrong answer! Another application? 1 for yes or 0 for no: ");
              scanf("%d", &answer);
              if(answer == 1)
                 more = true;
              else
                 if (answer == 0)
                    more = false;

        }//end while answer ...
    }//end while answer

    stats(eCount, neCount);
    printf("\n\nGoodbye!!!\n\n\n");
    return 0;
}//end main
//------------------------
 void getInfo(bool* own, bool* mortgage, bool* income)
 {
     int answer = 0;
     printf("Own your house?");
     scanf("%d", &answer);
     if(answer == 1)
        *own = true;
     else
        *own = false;
      printf("Mortgage?");
     scanf("%d", &answer);
     if(answer == 1)
        *mortgage = true;
     else
        *mortgage = false;
         printf("Income?");
     scanf("%d", &answer);
     if(answer == 1)
        *income = true;
     else
        *income = false;
 }
//-------------------------
bool evaluate(bool own, bool mortgage, bool income)
{
    if(own && !mortgage  && income )
        return true;
    //else ...not needed as the only statement left is a return when condition is not met
    return false;
}//end evaluate
//-------------------------
void report(bool eligible)
{
    if(eligible)
        printf("\n\nCongratulations! your application is eligible.\n");
    else //if(!eligible)
        printf("\n\nUnfortunately! your application is NOT eligible.\n");
}//end report
//-------------------------
void stats(int eCount, int neCount)
{
    printf("Out of %d applications, %d was/were eligible and %d was/were not eligible\n", (eCount + neCount), eCount, neCount);
}//end stats

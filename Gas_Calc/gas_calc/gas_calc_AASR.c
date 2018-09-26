#include <stdio.h>
#include <stdlib.h>

/* Author: Angel A. Selva-Rodriguez
   Submission Date:09/23/2018
   Description: This is a gas cost calculator that prompts user to enter MPG,
   miles traveled(One Way) and must calculate the total cost of said trip.
   */


int main()
{
    //declarations
   double MPGCar = 0.0;
   double PriceGallon = 0.0;
   double TravelMiles = 0.0;
   double OneWay = 0.0;
   double TotalCost = 0.0;


   //input

   printf("Enter the Miles Per Gallon(MPG) for your vehicle \n ");
   scanf("%lf", &MPGCar);


   printf("Enter the cost of gasoline per gallon. \n  ", PriceGallon);
   scanf("%lf", &PriceGallon);

   printf("Enter the distance traveled. \n", TravelMiles);
   scanf("%lf", &TravelMiles);


    //calculation

    OneWay = MPGCar * PriceGallon;
    TotalCost = OneWay * 2;
    //output



printf("Your vehicles MPG is %2.2lf \n", MPGCar);
printf("The cost per gallon is %2.2lf \n", PriceGallon);
printf("The distance traveled is %2.2lf \n", TravelMiles);
printf("One way the cost is : %2.2lf \n", OneWay);
printf("The total cost is : %2.2lf \n ", TotalCost);

   return 0;
}









#include<stdio.h>
#include<math.h>
int main()
{
   float p,t,r,si,ci;
   printf("Enter the values of p,t,r");
   scanf("%f %f %f",&p,&t,&r);

   //Simple interest

   si=(p*t*r)/100 ;
   printf("simple interest is %f",si);

   //Compound interest

   ci=(p*pow(1+r/100,t))-p ;
   printf("\ncompound interest is %f",ci);
   }

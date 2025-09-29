#include<stdio.h>
#include<math.h>
int main()
{float prin,rate,time;
 float si,ci;
 printf("Enter the principal amount:");
 scanf("%f",&prin);
 printf("Enter the annual interest rate:");
 scanf("%f",&rate);
 printf("Enter the time period(in years): ");
 scanf("%f",&time);
 si=(prin*rate*time)/100;
 ci=prin*pow(1+rate,time);
 printf("Simle Interest is-%.2f\n",si);
 printf("Compond Interest is-%.2f",ci);
}

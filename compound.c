#include <stdio.h>

#include <math.h>

int main()
{
    float a,p,r,t;
    printf("Enter the principal, interest rate, time period: ");

    scanf("%f%f%f",&p,&r,&t);

    a = p*pow((1+r/100),t);

     printf("\nThe compund interest is %0.2lf", a);

}
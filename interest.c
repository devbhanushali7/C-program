#include <stdio.h>
#include <math.h>

int main()
{
    float si,a,p,r,t;
    printf("Enter the principal, interest rate, time period: ");

    scanf("%f%f%f",&p,&r,&t);

    si = p*r*t;
  

    printf("\nThe simple interest is %0.2lf", si);



}
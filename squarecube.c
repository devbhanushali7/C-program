#include <stdio.h>

int main()
{
    int num,sqr,c;
    printf("Enter any number: ");
    scanf("%d", &num);

    sqr = num*num;
    c = sqr*num;

    printf("The square of the number is %d\n", sqr);
     printf("The cube of the number is %d", c);


}
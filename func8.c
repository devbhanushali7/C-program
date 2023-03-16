#include <stdio.h>
#include <stdbool.h>

int menu();

int menu()
{
    int add,sub,mul,div,choice,num1,num2,i;

    for(i=0;i=true;i++)
    {

    printf("\n\n----------MENU----------\n");
    printf("\n1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n");

    printf("\nEnter your choice: ");
    scanf("%d",&choice);
    
    switch(choice)
    {
        case 1:
       
        printf("Enter any two numbers: ");
        scanf("%d%d",&num1,&num2);

        add = num1 + num2;
        printf("\n\nAddition = %d",add);
        break;

        case 2:
       
       printf("Enter any two numbers: ");
        scanf("%d%d",&num1,&num2);

        sub = num1 - num2;
        printf("\n\nSubtraction = %d",sub);
        break;

        case 3:
       
       printf("Enter any two numbers: ");
        scanf("%d%d",&num1,&num2);

        mul = num1 * num2;
        printf("\n\nMultiplication = %d",mul);
        break;

        case 4:
      
      printf("Enter any two numbers: ");
        scanf("%d%d",&num1,&num2);

        div = num1 / num2;
        printf("\n\nDivision = %d",div);
        break;

        default:
        printf("Invalid input!!!");
        break;

    }
    }
   

}

int main()
{
    menu();
    return 0;
}
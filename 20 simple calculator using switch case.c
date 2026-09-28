/*PROGRAM WHICH WILL WORK LIKE A SIMPLE CALCULATOR USING SWITCH-CASE*/
#include<stdio.h>
int main()
{
    int a,b,num;
    printf("Enter the value of a = ");
    scanf("%d",&a);
    printf("Enter the value of b = ");
    scanf("%d",&b);
    printf("Enter '1' for sum\n");
    printf("Enter '2' for difference\n");
    printf("Enter '3' for product\n");
    printf("Enter '4' for division\n");
    printf("Enter '5' for remainder\n");
    scanf("%d",&num);
    switch(num)
    {
        case 1 : printf("Sum=%d",a+b);break;
        case 2 : printf("Difference = %d",a-b);break;
        case 3 : printf("Product = %d",a*b);break;
        case 4 : printf("Division = %d",a/b);break;
        case 5 : printf("Remainder = %d",a%b);break;
        default : printf("Invalid number");
    }
    return 0;
}

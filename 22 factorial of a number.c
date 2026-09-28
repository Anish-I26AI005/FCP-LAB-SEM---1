/*program to calculate factorial of number*/
#include<stdio.h>
int main()
{
    int a,fact=1,x;
    printf("The value of a is ");
    scanf("%d",&a);
    if(a<0)
    {
        printf("The factorial is invalid for the given number");
    }
    else
    {
        for(x=1;x<=a;x++)
        {
            fact=fact*x;
        }
        printf("The factorial of the number is %d",fact);
    }
    return 0;
}

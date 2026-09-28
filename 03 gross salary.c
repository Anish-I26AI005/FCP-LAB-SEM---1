/*program to calculate gross salary*/
#include<stdio.h>
int main()
{
    float a,b;
    printf("Enter the amount of salary got per month = ");
    scanf("%f",&a);
    b=a/25;
    printf("The amount of tax payed = %f\n",b);
    printf("The gross salary of the person = %f",a*12-b);
    return 0;
}

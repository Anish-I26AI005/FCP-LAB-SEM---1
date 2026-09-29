/*Electric distribution company charges*/
#include<stdio.h>
int main() 
{
    float units,amount;
    printf("Enter total electricity units consumed: ");
    if (scanf("%f", &units)!=1 || units<0) 
	{
        printf("Invalid input. Please enter a valid non-negative number of units.\n");
        return 0;
    }
    if(units<=200) 
	{
        amount=units*0.50;
    } 
    else
	if(units<=400)
	{
        amount=100+(units-200)*0.65;
    } 
    else 
	if(units<=600)
	{
        amount=230+(units-400)*0.80;
    } 
    else 
	{
        amount=425+(units-600)*1.25;
    }
    printf("Total amount to be paid:%f\n",amount);
    return 0;
}

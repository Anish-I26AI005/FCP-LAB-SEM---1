/*program to find commission*/
#include<stdio.h>
int main() 
{
    float sales,commission;
    printf("Enter the sales amount: ");
    if (scanf("%f", &sales)!=1 || sales<0) 
	{
        printf("Invalid sales amount.\n");
        return 0;
    }
    if(sales<=500) 
	{
        commission=sales*0.05;
    } 
    else 
	if(sales<=2000) 
	{
        commission=35+(sales-500)*0.10;
    } 
    else 
	if(sales<=5000) 
	{
        commission=185+(sales-2000)*0.12;
    } 
    else 
	{
        commission=sales*0.125;
    }
    printf("Commission:%f\n",commission);
    return 0;
}

```

/*PROGRAM TO READ TWO NOS. AND CALCULATE POWER WITHOUT USING HEADER FILE(<MATH.H>)*/
#include<stdio.h>
int main()
{
	int a,b,i,pow=1;
	printf("Enter any two numbers : ");
	scanf("%d%d",&a,&b);
	for(i=1;i<=b;i++)
	{
		pow=pow*a;
	}
	printf("a to the power of b = %d",pow);
}

/*PROGRAM TO PRINT 1,4,9,16,25,………N*/
#include<stdio.h>
int main()
{
	int num,x;
	printf("Enter the number = ");
	scanf("%d",&num);
	for(x=1;x<=num;x++)
	{
	    printf("%d\n",x*x);
	}
}

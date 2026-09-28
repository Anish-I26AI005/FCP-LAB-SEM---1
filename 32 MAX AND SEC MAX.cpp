/*PROGRAM TO FIND MAX AND SECOND MAX OF N NUMBERS*/
#include<stdio.h>
int main()
{
	int N,i,max,sec_max,a,b;
	printf("Enter total number of numbers : ");
	scanf("%d",&N);
	if(N<1)
	{
		printf("Enter any valid number for N");
		return 0;
	}
	int num[N];
	printf("Enter %d numbers : ",N);
	max=a;
	sec_max=b;
	for(i=0;i<=N-1;i++)
	{
		scanf("%d",&num[i]);
	}
	for(i=0;i<N;i++)
	{
		if(num[i]>max)
		{
			sec_max=max;
			max=num[i];
		}
		else
		if(num[i]>sec_max && num[i]!=max)
		{
			sec_max=num[i];
		}
	}
	if(sec_max==a)
	{
		printf("There is no second maximum");
	}
	else
	printf("The maximum of %d numbers = %d",N,max);
	printf("\nThe second maximum of %d numbers = %d",N,sec_max);
	
	
}

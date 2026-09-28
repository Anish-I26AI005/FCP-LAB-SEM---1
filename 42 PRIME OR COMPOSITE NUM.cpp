/*program to read a number and find it is prime or composite*/
#include<stdio.h>
int main()
{
	int num,x,sum,y;
	printf("Enter the number = ");
	scanf("%d",&num);
	y=num+1;
	sum=0;
	for(x=1;x<=num;x++)
	{
		if(num%x==0)
		{
	       sum=sum+x;	
		}
		
	}
	if(sum==y)
	{
		printf("The given number is a prime number ");
	}
	else
	{
		printf("The given number is a composite number ");
	}
}

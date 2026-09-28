/*PROGRAM TO FIND A ARMSTRONG NUMBER*/
#include<stdio.h>
#include<math.h>
int main()
{
	int num,dig=0,rem,result=0;
	printf("Enter the number = ");
	scanf("%d",&num);
	while(num!=0)
	{
	  num=num/10;
	  dig=dig+1;	
	}
	printf("Digits of the number are %d",dig);
	while(num!=0)
	{
		rem=num%10;
		result=result+pow(rem,dig);
		num=num/10;
	}
	if(result==num)
	{
		printf("\nThe given number is an armstrong number");
		
	}
	else
	if(result!=num)
	{
	printf("The number is not an armstrong number");
    }
}

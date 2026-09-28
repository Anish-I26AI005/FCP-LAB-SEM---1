/* PROGRAM TO READ THE NUMBERS AND FIND THIER SUM UNTIL A NEGATIVE NUMBER IS ENTERED*/
#include<stdio.h>
int main()
{
	int num,sum=0,i;
	printf("Enter numbers:\n");
	while(1)
    {	
        scanf("%d",&num);
		if(num<0)
		{
			break;
		}
	    sum=sum+num;
    }
	printf("The sum of all the positive numbers = %d",sum);
}

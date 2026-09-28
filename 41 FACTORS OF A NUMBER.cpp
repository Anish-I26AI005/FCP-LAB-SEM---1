/*READ A NUMBER N AND PRINT FACTOR OF A NUMBER*/
#include<stdio.h>
int main()
{
	int num,x;
	printf("Enter the value of the number = ");
	scanf("%d",&num);
	printf("The factors of %d are :   ",num);
	for(x=1;x<=num;x++)
	{
		if(num%x==0)
		{
			printf("%d\t\t",x);
		}
	}
}

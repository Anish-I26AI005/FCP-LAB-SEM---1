/*program to print 1/1!+2/2!+......+N*/
#include<stdio.h>
int main()
{
	int N,x;
	printf("Enter the value of N = ");
	scanf("%d",&N);
	for(x=1;x<N;x++)
	{
		printf("%d/%d!+",x,x);
	}
	if(x=N)
	{
		printf("%d/%d!",N,N);
	}
}

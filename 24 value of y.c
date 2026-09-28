/*program to print the value of y*/
#include<stdio.h>
#include<math.h>
int main()
{
    int y,n,x;
    printf("the value of n = ");
    scanf("%d",&n);
    printf("the value of x = ");
    scanf("%d",&x);
    if(n==1)
    {
        printf("The value of y = %d",1+x);
    }
    else if(n==2)
    {
        printf("The value of y = %d",1+(x/n));
    }
    else if(n==3)
    {
        printf("The value of y = %d",1+pow(x,n));
    }
    else if(n>3 || n<1)
    {
        printf("The value of y = %d",1+n*x);
    }
    return 0;
}

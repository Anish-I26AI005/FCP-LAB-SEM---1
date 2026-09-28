/*programe to convert fahrenheit to centigrade scale*/
#include<stdio.h>
int main()
{
    int centigrade,fahrenheit;
    printf("enter the value in fahrenheit scale = ");
    scanf("%d",&fahrenheit);
    centigrade=(fahrenheit-32)*5/9;
    printf("The value in centigrade = %d",centigrade);
    return 0;
}

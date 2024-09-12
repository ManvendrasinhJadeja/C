// to find summation of numbers from 1 to the given number
#include<stdio.h>
int main()
{
    int sum=0,n,i;
    printf("enter the number : ");
    scanf("%d",&n);

    for ( i = 0; i <= n; i++)
    {
        sum = sum+i;


    }
    printf("%d",sum);
}
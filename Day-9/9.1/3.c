// to print the table of any number
#include<stdio.h>
int main()
{
    int n ,i;
    printf("enter the number : ");
    scanf("%d",&n);

    for ( i = 1; i <= 10; i++)
    {
        printf("%d X %d = %d\n",n,i,n*i);


    }
}
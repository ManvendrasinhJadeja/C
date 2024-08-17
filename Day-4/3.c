#include<stdio.h>
// program for finding the third angle of a triangle
int main()
{
    printf("Program for finding the third angle of triangle\n");
    printf("\n");
    int x,y,formula;
    printf("add the value of x\n");
    scanf("%d",&x);
    printf("add the value of y\n");
    scanf("%d",&y);
    formula = 180-x-y;
    printf("the answer of the third angle is\n %d",formula);
    
    }

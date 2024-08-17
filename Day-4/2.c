#include<stdio.h>
// program for gross salary calculator
int main()
{
    printf("Program for finding the gross salary\n");
    printf("\n");
    float x,y,z,a,formula;
    printf("add the value of Base salary\n");
    scanf("%f",&a);
    printf("add the value of HRA\n");
    scanf("%f",&x);
    printf("add the value of DA\n");
    scanf("%f",&y);
    printf("add the value of TA\n");
    scanf("%f",&z);
    formula = a + a*x*.01 + a*y*.01 + a*z*.01;
    printf("Gross salary is\n %f",formula);
    
    }

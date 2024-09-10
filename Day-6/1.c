#include <stdio.h>
int main()
{
    int a,b,c;
    printf("Enter a value of the first number ");
    scanf("%d",&a);
    printf("Enter a value of the second number ");
    scanf("%d",&b);
    printf("Enter a value of the third number ");
    scanf("%d",&c);
    (a < b) ?
        (a < c)  ?
          printf("a is min")
        
         : printf("c is min") 
        
   :
         (b < c)  ?
         printf("b is min") 
        
        : printf("c is min") ;


}
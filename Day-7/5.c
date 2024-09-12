#include <stdio.h>

int main(){
    int start,end;

    printf("please enter the value of first number");
    scanf("%d",&start);
    printf("please enter the value of second number");
    scanf("%d",&end);
    while (start<=end)
    {
        if (start%4 == 0)
        {
        printf("%d ",start);
        }
         
        
        start++;
    }
    
}
#include <stdio.h>

int main(){
    int n ,start=1;

    printf("please enter the value of n");
    scanf("%d",&n);
    while (n >=start)
    {
        if (n%2 != 0)
        {
        printf("%d ",n);
        }
        
        
        n--;
    }
    
}
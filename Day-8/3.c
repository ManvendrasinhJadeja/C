// to print even number of terms
#include <stdio.h>

int main(){
    int start = 1,n;
    printf("please enter the value of n: ");
    scanf("%d",&n);

    do  
    {
       if (start%2 == 0)
       {
        printf("%d",start);
       }
       else{printf(" ");}
       start++;}
    while ( start<=n);
  
 
    
    
    
}
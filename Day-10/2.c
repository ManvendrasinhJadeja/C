#include<stdio.h>

int main()
{   

    int i=1;
    int user;

    printf("add the number:");
    scanf("%d",&user);
   
   
    while (user>=9)
    {
         user = user/10;
                i++;
    }
    
    
    printf("%d",i);
  
    
}
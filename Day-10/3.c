#include<stdio.h>

int main()
{   

    int user;
    int lastdigit,sum;

    printf("add the number:");
    scanf("%d",&user);

   
    lastdigit=user % 10 ;
   
    while (user>=9)
    {
         user = user/10;
                
    }
    
   
    
    printf("%d", user +lastdigit);
  
    
}
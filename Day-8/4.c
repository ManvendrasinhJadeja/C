// to find the fibonacci series till the given number
#include <stdio.h>
     //first method 

int main(){
    int a,b,c,end;
    a=-1;
    b=1;
    // 0 1 1 2 3 5 8 13 21 34 55....
    printf("Please enter the value of n : ");
    scanf("%d",&end);
   for ( c=a+b; c <= end; )
   {    
     
        printf("%d ",c);
        a=b;
        b=c;
        c=a+b;
   }
   } 


///////////////////////////////////////////
     //    second method





//     int a,b,c,end;
//     a=1;
//     b=1;
    
    
//     // 0 1 1 2 3 5 8 13 21 34 55....
//     printf("Please enter the value of n : ");
//     scanf("%d",&end);
//      printf("0 ");
//      printf("%d ",a);
//      printf("%d ",b);

   
//    for ( c=a+b; c <= end; )
//    {    
     
//         printf("%d ",c);
//         a=b;
//         b=c;
//         c=a+b;
        

        
    
//    }
   
    



  
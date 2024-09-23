// Pyramid pattern

// Q-1
// 1
// 2 1
// 3 2 1
// 4 3 2 1
// 5 4 3 2 1




// #include<stdio.h>

// int main()
// {
//   for (int row  = 1; row <= 5 ; row++)
//   {
//     for (int col = row; col >=1 ; col--)
//     {
//         printf("%d",col);
//     }
//         printf("\n");
    
//   }
 
// }


// Q-2

// 5
// 4 5
// 3 4 5
// 2 3 4 5
// 1 2 3 4 5

// #include<stdio.h>

// int main()
// {
//   for (int row  = 5; row >= 1; row--)
//   {
//     for (int col = row; col <=5 ; col++)
//     {
//         printf("%d",col);
//     }
//         printf("\n");
    
//   }
   
// }

// Q-3

// 5
// 4 4
// 3 3 3
// 2 2 2 2
// 1 1 1 1 1

// #include<stdio.h>

// int main()
// {
//   for (int row  = 5; row >= 1; row--)
//   {
//     for (int col = row; col<=5 ; col++ )
//     {
//         printf("%d",row);
//     }
//         printf("\n");
    
//   }
   
// }

// Q-4

// 1 2 3 4 5
// 2 3 4 5
// 3 4 5
// 4 5
// 5


// #include<stdio.h>

// int main()
// {
//   for (int row  =1; row <= 5; row++)
//   {
//     for (int col = row; col <=5 ; col++)
//     {
//         printf("%d",col);
//     }
//         printf("\n");
    
//   }
   
// }


// Q-5

// 1 1 1 1 1
// 2 2 2 2
// 3 3 3
// 4 4
// 5


// #include<stdio.h>

// int main()
// {
//   for (int row  = 1; row <= 5; row++)
//   {
//     for (int col = row; col <=5 ; col++)
//     {
//         printf("%d",row);
//     }
//         printf("\n");
    
//   }
   
// }


// Q-6

// 1 0 1 0 1
// 1 0 1 0
// 1 0 1
// 1 0
// 1

// #include <stdio.h>

// int main()
// {
//   for (int row = 1; row <=5; row++)
//   {
//     for (int col = 5; col >= row; col--)
//     {
//       if (col %2 == 0)
//       {
//         printf("0 ");
//       }
//       else{
//         printf("1 ");
//       }
//     }
//       printf("\n");
//   }
  
// }



// Q-7
// A
// B A
// C B A
// D C B A
// E D C B A

// #include <stdio.h>

// int main()
// {
//   for (int row = 65; row <= 69; row++)
//   {
//     for (int col = row  ; col >= 65; col--)
//     {
//       printf("%c ",col);
//     }
//       printf("\n");
//   }
  
// }


// Q-8

// 1
// 2 3
// 4 5 6
// 7 8 9 10
// 11 12 13 14 15

// 



// P-1

// 1 2 3 4 5
// 2 3 4 5
// 3 4 5
// 4 5
// 5


// #include<stdio.h>

// int main()
// {
//   for (int row  = 1; row <= 5 ; row++)
//   {
//     for (int col = row; col <= 5 ; col++)
//     {
//         printf("%d",col);
        
//     }
//         printf("\n");
    
//   }
  
   
    
// }



// P-2

// 1 2 3 4 5
// 1 2 3 4 
// 1 2 3  
// 1 2  
// 1


// #include<stdio.h>

// int main()
// {
//   for (int row  = 5; row >= 1; row--)
//   {
//     for (int col = 1; col <= row ; col++)
//     {
//         printf("%d",col);
        
//     }
//         printf("\n");
    
//   }
  
   
    
// }


// p-3

// 5 4 3 2 1
// 5 4 3 2
// 5 4 3 
// 5 4  
// 5  

// #include<stdio.h>

// int main()
// {
//   for (int row  = 1; row <= 5; row++)
//   {
//     for (int col = 5; col >= row ; col--)
//     {
//         printf("%d",col);
        
//     }
//         printf("\n");
    
//   }
  
// }


// P-4


// 1  
// 1 2  
// 1 2 3  
// 1 2 3 4  
// 1 2 3 4 5 

// #include<stdio.h>

// int main()
// {
//   for (int row  = 1; row <= 5; row++)
//   {
//     for (int col = 1; col <= row ; col++)
//     {
//         printf("%d",col);
        
//     }
//         printf("\n");
    
//   }
  
// }



// P-5

// 1
// 2 2 
// 3 3 3 
// 4 4 4 4
// 5 5 5 5 5


// #include<stdio.h>

// int main()
// {
//   for (int row  = 1; row <= 5; row++)
//   {
//     for (int col = 1; col <= row ; col++)
//     {
//         printf("%d",row);
//     }
//         printf("\n");
//   }
  
// }


// P - 6

// 5
// 4 4
// 3 3 3 
// 2 2 2 2 
// 1 1 1 1 1


// #include<stdio.h>

// int main()
// {
//   for (int row  = 5; row >= 1; row--)
//   {
//     for (int col = 5; col >= row ; col--)
//     {
//         printf("%d",row);
//     }
//         printf("\n");
//   }
  
// }


// P-7

// 1
// 2 2 
// 3 3 3 
// 4 4 4 4
// 5 5 5 5 5

// #include<stdio.h>

// int main()
// {
//   for (int row  = 1; row <= 5; row++)
//   {
//     for (int col = 1; col <= row ; col++)
//     {
//         printf("%d",row);
//     }
//         printf("\n");
//   }
  
// }

// P-8

// 1 2 3 4 5
// 2 3 4 5
// 3 4 5
// 4 5
// 5


// #include<stdio.h>

// int main()
// {
//   for (int row  = 1; row <= 5; row++)
//   {
//     for (int col = row; col <= 5 ; col++)
//     {
//         printf("%d",col);
//     }
//         printf("\n");
//   }
  
// }

//  P-9

// 5
// 5 4
// 5 4 3
// 5 4 3 2
// 5 4 3 2 1



// #include<stdio.h>

// int main()
// {
//   for (int row  = 5; row >= 1; row--)
//   {
//     for (int col = 5; col >= row ; col--)
//     {
//         printf("%d",col);
//     }
//         printf("\n");
//   }
  
// }

// P-10

// 1 1 1 1 1
// 2 2 2 2
// 3 3 3
// 4 4
// 5


// #include<stdio.h>

// int main()
// {
//   for (int row  = 1; row <= 5; row++)
//   {
//     for (int col = 5; col >= row ; col--)
//     {
//         printf("%d",row);
//     }
//         printf("\n");
//   }
  
// }


// P-11

//  5 5 5 5 5
//  4 4 4 4 
//  3 3 3
//  2 2
//  1


// #include<stdio.h>

// int main()
// {
//   for (int row  = 5; row >= 1; row--)
//   {
//     for (int col = 1; col <= row ; col++)
//     {
//         printf("%d",row);
//     }
//         printf("\n");
//   }
  
// }



// P-12

// 5 4 3 2 1
// 5 4 3 2
// 5 4 3
// 5 4
// 5

// #include<stdio.h>

// int main()
// {
//   for (int row  = 1; row <= 5; row++)
//   {
//     for (int col = 5; col >= row ; col--)
//     {
//         printf("%d",col);
//     }
//         printf("\n");
//   }
  
// }


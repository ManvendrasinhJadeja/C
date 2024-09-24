#include <stdio.h>

int main()
{

    // - - - - 1
    // - - - 2 1
    // - - 3 2 1
    // - 4 3 2 1
    // 5 4 3 2 1

    // for (int row = 1; row <= 5; row++)
    // {
    //     for (int  space = 4; space >= row; space--)
    //     {
    // printf("  ");

    //     }
    //        for (int col = row; col >= 1; col--)
    //         {
    //             printf("%d ",col);
    //         }
    //             printf("\n");

    // }

    // - - - - 5
    // - - - 4 5
    // - - 3 4 5
    // - 2 3 4 5
    // 1 2 3 4 5

    // for (int row = 5; row >= 1; row--)
    // {
    //     for (int space = row-1; space >=1; space--)
    //     {
    //             printf("  ");

    //     }

    //         for (int col = row; col <= 5; col++)
    //         {
    //             printf(" %d",col);
    //         }
    //             printf("\n");
    //     }

    // - - - - 5
    // - - - 4 4
    // - - 3 3 3
    // - 2 2 2 2
    // 1 1 1 1 1

    // for (int row = 5; row >= 1; row--)
    // {
    //     for (int space = row-1; space >=1; space--)
    //     {
    //             printf("  ");

    //     }

    //         for (int col = row; col <= 5; col++)
    //         {
    //             printf(" %d",row);
    //         }
    //             printf("\n");
    //     }

    // 1 0 1 0 1
    // - 0 1 0 1
    // - - 1 0 1
    // - - - 0 1
    // - - - - 1

    // for (int row = 1; row <=5 ; row++)
    // {
    //     for (int space = 1; space <=row-1; space++)
    //     {

    //         printf(" -");
    //     }
    //     for (int col = row; col <=5 ; col++)
    //     {
    //         if (col %2==0)
    //         {
    //             printf("0 ");
    //         }
    //         else{

    //             printf("1 ");
    //         }

    //     }
    //         printf("\n");

    // }

    // 5 4 3 2 1
    // - 4 3 2 1
    // - - 3 2 1
    // - - - 2 1
    // - - - - 1

    // for (int row = 5; row >=1 ; row--)
    // {
    //     for (int space = 4; space >=row; space--)
    //     {

    //         printf(" -");
    //     }
    //         for (int col = row; col >= 1; col--)
    //         {
    //             printf("%d ",col);
    //         }

    //         printf("\n");

    // }

    // 5 4 3 2 1
    // - 5 4 3 2
    // - - 5 4 3
    // - - - 5 4
    // - - - - 5

    // for (int row = 1; row <=5 ; row++)
    // {
    //     for (int space = row-1; space >=1  ; space--)
    //     {

    //         printf("  ");
    //     }
    //         for (int col =5; col >= row; col--)
    //         {
    //             printf("%d ",col);
    //         }

    //         printf("\n");

    // }

    // 1 2 3 4 5 5 4 3 2 1
    // 1 2 3 4     4 3 2 1
    // 1 2 3         3 2 1
    // 1 2             2 1
    // 1                 1

    // for (int row = 5; row >=1; row--)
    // {
    
    //     for (int col1 = 1; col1 <=row; col1++)
    //     {
    //         printf("%d ",col1);
    //     }
    //     for (int space = 5; space >= row+1; space--)
    //     {
    //         printf("    ");
    //     } 
        
    //     for (int col2 = row; col2 >=1; col2--)
    //     {
    //         printf("%d ",col2);
    //     }
        
    //     printf("\n");
    // }
  
    
//        1 2 3 4 5 5 4 3 2 1 
//        1 2 3 4     4 3 2 1 
//        1 2 3         3 2 1 
//        1 2             2 1 
//        1                 1 
//        1                 1 
//        1 2             2 1 
//        1 2 3         3 2 1 
//        1 2 3 4     4 3 2 1 
//        1 2 3 4 5 5 4 3 2 1 




//   for (int row = 5; row >=1; row--)
//     {
    
//         for (int col1 = 1; col1 <=row; col1++)
//         {
//             printf("%d ",col1);
//         }
//         for (int space = 5; space >= row+1; space--)
//         {
//             printf("    ");
//         } 
        
//         for (int col2 = row; col2 >=1; col2--)
//         {
//             printf("%d ",col2);
//         }
        
//         printf("\n");
//     }
//     for (int row2 = 1; row2 <= 5; row2++)
//     {
//           for (int col1 = 1; col1 <=row2; col1++)
//         {
//             printf("%d ",col1);
//         }
//         for (int space = 5; space >= row2+1; space--)
//         {
//             printf("    ");
//         } 
        
//         for (int col2 = row2; col2 >=1; col2--)
//         {
//             printf("%d ",col2);
//         }
        
//         printf("\n");
//     }
    
//        1 2 3 4 5  
//        1 2 3 4      
//        1 2 3          
//        1 2            
//        1                
//        1               
//        1 2           
//        1 2 3      
//        1 2 3 4  
//        1 2 3 4 5




//   for (int row = 5; row >=1; row--)
//     {
    
//         for (int col1 = 1; col1 <=row; col1++)
//         {
//             printf("%d ",col1);
//         }
      
        
//         printf("\n");
//     }
//     for (int row2 = 1; row2 <= 5; row2++)
//     {
//           for (int col1 = 1; col1 <=row2; col1++)
//         {
//             printf("%d ",col1);
//         }
      
        
//         printf("\n");
//     }




//         1
//       2 1 2 
//     3 2 1 2 3  
//   4 3 2 1 2 3 4 
// 5 4 3 2 1 2 3 4 5
        
     
   
    // for (int row = 1; row <= 5; row++)
    // {
    //     for (int  space = 4; space >= row; space--)
    //     {
    // printf("  ");

    //     }
    //        for (int col = 1; col <= row; col++)
    //         {
    //             printf("%d ",col);
    //         }
    //         for (int col2 = row-1; col2 >=1; col2--)
    //         {
    //             printf("%d ",col2);

    //         }
            
    //             printf("\n");

    // }
 


//          * 
//        * * * 
//      * * * * * 
//    * * * * * * * 
//  * * * * * * * * * 
 
    // for (int row = 1; row <= 5; row++)
    // {
    //     for (int  space = 4; space >= row; space--)
    //     {
    // printf("  ");

    //     }
    //        for (int col = 1; col <= row; col++)
    //         {
    //             printf("* ");
    //         }
    //         for (int col2 = row-1; col2 >=1; col2--)
    //         {
    //             printf("* ");

    //         }
            
    //             printf("\n");

    // }
 
 

}
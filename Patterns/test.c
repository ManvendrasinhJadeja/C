#include <stdio.h>

    int main()
    {

    // 5
    // 4 5
    // 3 4 5
    // 2 3 4 5
    // 1 2 3 4 5



    // for (int row = 5; row >=1; row--)
    // {
       
    //   for (int col = row; col <=5; col++)
    //   {
    //     printf("%d",col);
    //   }
      
        
    //         printf("\n");
        
    // }

// 1
// 2 3
// 4 5 6
// 7 8 9 10
// 11 12 13 14 15
        // int temp=0;
        // for (int row = 1; row <= 5; row++)
        // {

        //     for (int col = 1; col <=row; col++)
        //     {
        //         temp++;
        //         printf("%d ",temp);
        //     }
            
        //         printf("\n");
        //     }
        
// A
// B A
// C B A
// D C B A
// E D C B A

    // for (int row = 65; row <= 69; row++)
    // {
    //     for (int col = row; col >=65; col--)
    //     {
    //         printf("%c ",col);
    //     }
    //         printf("\n");
        
    // }


// 1 0 1 0 1
// 1 0 1 0
// 1 0 1
// 1 0
// 1

//     for (int row = 5; row >=1; row--)
//     {
//         for (int col = 1; col <=row; col++)
//         {
//             if (col%2==0)
//             {
//             printf("0 ");
// }
//             else{

//             printf("1 ");
//             }
            
//         }
//             printf("\n");
        
//     }
    
// 1 1 1 1 1
// 2 2 2 2
// 3 3 3
// 4 4
// 5

    // for (int row = 1; row <=5; row++)
    // {
    //     for (int col = 5; col >=row; col--)
    //     {
    //         printf("%d ",row);
    //     }
    //         printf("\n");
        
    // }
    

    // 7.2


    // - - - - 5
    // - - - 4 5
    // - - 3 4 5
    // - 2 3 4 5
    // 1 2 3 4 5

    //   for (int row = 5; row >=1; row--)
    // {
    //    for (int space = 1; space <= row; space++)
    //    {
    //     printf("  ");
    //    }
       
    //   for (int col = row; col <=5; col++)
    //   {
    //     printf("%d ",col);
    //   }
      
        
    //         printf("\n");
        
    // }
    // 5 4 3 2 1
    // - 5 4 3 2
    // - - 5 4 3
    // - - - 5 4
    // - - - - 5
   
    
    //   for (int row = 1; row <=5; row++)
    // {
    //    for (int space = 1; space <= row; space++)
    //    {
    //     printf("  ");
    //    }
       
    //   for (int col = 5; col >=row; col--)
    //   {
    //     printf("%d ",col);
    //   }
      
        
    //         printf("\n");
        
    // }



    // 1 2 3 4 5 5 4 3 2 1
    // 1 2 3 4     4 3 2 1
    // 1 2 3         3 2 1
    // 1 2             2 1
    // 1                 1

    for (int row = 5; row >=1; row--)
    {
        for (int col =1; col <=row; col++)
        {
            printf("%d ",col);
        }
        for (int col = 4; col>=row; col--)
        {
            printf("    ");
        }
      
        for (int col1 =row; col1 >=1; col1--)
        {
            printf("%d ",col1);
        }
            printf("\n");
    }
    
    }
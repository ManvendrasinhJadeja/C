#include <stdio.h>

int main()

{
    int a, b, c, d;

    printf("Enter value of a,b,c,d:");
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    scanf("%d", &d);

    if (a > b)
    {
        // JO HA A > B TO PUCHO KE

        if (a > c)

            // JO HA A > C TO PUCHO KE

        {
              if (a > d)
                    // JO HA A > D TO PUCHO KE

            {
                printf("a is max");
            }

             else
                    // JO NAA A > D NATHI TO PRINT

            {
                printf("d is max");
            }
        }

         else
         

             // JO NAA A > C NATHI TO PUCHO KE

        {
            if (c > d)
                    // JO HAA C > D CHE TO PRINT

            {
                printf("c is max");
            }
                    // JO NAA C > D NATHI TO PRINT


            else
            {
                printf("d is max");
            }
        }
    }
    
    
    
    
    else
 // JO NAA A > B NATHI TO PUCHO KE

    {
        if (b > c)
              // JO HAA B > C CHE TO PUCHO KE

        {
            if (b > d)
                 // JO HAA B > D NATHI TO PRINT

            {
                printf("b is max");
            }

            
            else
                  // JO NAA B > D NATHI TO PRINT

            {
                printf("d is max");
            }
        }

        else
              // JO NAA B > C NATHI TO PUCHO KE

        {
            // if (b > a)
            // {
            //     printf("b is max");
            // }

            // else
            // {
            //     printf("a is max");
            // }
            if (b > c)
            // JO HAA B > C  TO PUCHO KE

            {
                if (b > d)
                // JO HAA B > C  TO PRINT KE

                {
                    printf("b is max");
                }
                else
                  // JO NAA B > D NATHI TO PRINT 
{
                    printf("d is max");
                }

                
            }

            else{
                        // JO NAA B > C NATHI TO PUCHO KE
                if (c > d)
                        // JO HAA C > D  TO PRINT KE
                {
                    printf("c is max");
                }
                else{
                        // JO NAA C> D NATHI   TO PRINT

                    printf("d is max");
                }
            }

        }
    }
}
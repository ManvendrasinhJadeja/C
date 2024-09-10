#include <stdio.h>

int main()
{
        int user,userHindi,userEnglish,userGujarati;
    printf("Welcome \n");
    printf("------------------\n");

    printf("Press 1 for English\n");
    printf("Press 2 for Hindi\n");
    printf("Press 3 for Gujarati\n");
    printf("Enter your choice : \n");
    scanf("%d",&user);
    switch (user)
    {
    case 1:
    
        printf("Press 1 for Internet Recharge\n");
        printf("Press 2 for Top-up Recharge \n");
        printf("Press 3 for Special Recharge \n");
        printf("Enter your choice : \n");
            scanf("%d",&userEnglish);
            switch (userEnglish)
            {
            case 1:
                printf("You have successfully done a Internet Recharge.\n");
                printf("______________________________________________\n");
                break;
            case 2:
                printf("You have successfully done a Top-up Recharge.\n");
                printf("______________________________________________\n");
                break;
            case 3:
                printf("You have successfully done a Special Recharge.\n");
                printf("______________________________________________\n");
                break;
            
            default:
                break;
            }

        break;
    case 2:
        printf("Internet Recharge ke liye 1 dabaiye\n");
        printf("Top-up Recharge ke liye 2 dabaiye\n");
        printf("Special Recharge ke liye 3 dabaiye\n");
        printf("Enter your choice : \n");
            scanf("%d",&userHindi);

                  switch (userHindi)
            {
            case 1:
                printf("Aapne safaltapurvak Internet Recharge kar liya he.\n");
                printf("______________________________________________\n");
                break;
            case 2:
                printf("Aapne safaltapurvak Top-Up Recharge kar liya he.\n");
                printf("______________________________________________\n");
                break;
            case 3:
                printf("Aapne safaltapurvak Special Recharge kar liya he.\n");
                printf("______________________________________________\n");
                break;
            
            default:
                break;
            }



        break;
    case 3:
        printf("Internet Recharge mate 1 dabavo\n");
        printf("Top-up Recharge mate 2 dabavo\n");
        printf("Special Recharge mate 3 dabavo   \n");
        printf("Enter your choice : \n");
            scanf("%d",&userGujarati);
                   switch (userGujarati)
            {
            case 1:
                printf("Tame safaltapurvak Internet Recharge karyu chhe.\n");
                printf("______________________________________________\n");
                break;
            case 2:
                printf("Tame safaltapurvak Top-Up Recharge karyu chhe.\n");
                printf("______________________________________________\n");
                break;
            case 3:
                printf("Tame safaltapurvak Special Recharge karyu chhe.\n");
                printf("______________________________________________\n");
                break;
            
            default:
                break;
            }

        break;
    
    default:
        break;
    }

    
}
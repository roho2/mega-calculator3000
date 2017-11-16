#include "userInput.h"

int getUserInput()
{
    int choice;
    printf("Please enter the number of what you would like to calculate.\n");
    printf("1. Addition \n2. Subtraction \n3. Multiplication \n4. Division\n");
    printf("5. Power \n6. Raise to X power \n7. square root \n8. X root\n");
    printf("Please enter your choice: ");
    scanf("%d", &choice);
    return choice;
}

int runAgain()
{
    char answer[10];
    printf("Would you like to run this program again?\n(\"yes\" runs again anything else quits)");
    scanf("%s", answer);
    if(strcasecmp(answer, "yes")==0)
    {
        printf("\n \n \n");
        return 1;
    }
    else
    {
        printf("Thank you for using my program \nHave a nice day!");
        return 0;
    }

}

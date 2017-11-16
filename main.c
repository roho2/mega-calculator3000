#include <stdio.h>
#include <stdlib.h>
#include "userInput.h"
#include "doMath.h"

int title = 0;
int main()
{
    int choice, answer, again;
    if(title==0)
    {
        printf("***************************************************************\n");
        printf("*                                                             *\n");
        printf("*          Welcome to the super-mega calculator 3000          *\n");
        printf("*          -----------------------------------------          *\n");
        printf("*             created by Robert Hollinger : roho2             *\n");
        printf("*                                                             *\n");
        printf("*                                                             *\n");
        printf("***************************************************************\n");
    }
    title++;
    choice = getUserInput();
    answer = solveMath(choice); //uses choice and solves
    printf("Your answer is %d\n", answer);
    again = runAgain();
    if(again==1)
        main();


    return 0;
}

#include "askForNumbers.h"

int askUserForNumbers()
{
    printf("Input the first number: ");
    scanf("%d", &num.firstNum);
    printf("Input the second number: ");
    scanf("%d", &num.secondNum);
    return 0;
}

int askUserForANumber()
{
    printf("Input one number: ");
    scanf("%d", &num.firstNum);
    return 0;
}

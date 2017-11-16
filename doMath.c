#include "doMath.h"
#include "askForNumbers.h"

int solveMath(int choice)
{
    int answer;
    switch(choice)
    {
        case 1:
            answer = addNumbers();
            break;
        case 2:
            answer = subtractNumbers();
            break;
        case 3:
            answer = multiplyNumbers();
            break;
        case 4:
            answer = divideNumbers();
            break;
        case 5:
            answer = power();
            break;
        case 6:
            answer = raiseToX();
            break;
        case 7:
            answer = squareRoot();
            break;
        case 8:
            answer = xRoot();
            break;
    }
    return answer;
}

int addNumbers()
{
    int answer;
    askUserForNumbers();
    answer = num.firstNum + num.secondNum;
    return answer;
}

int subtractNumbers()
{
    int answer;
    askUserForNumbers();
    answer = num.firstNum - num.secondNum;
    return answer;
}

int multiplyNumbers()
{
    int answer;
    askUserForNumbers();
    answer = num.firstNum * num.secondNum;
    return answer;
}

int divideNumbers()
{
    int answer;
    askUserForNumbers();
    answer = num.firstNum / num.secondNum;
    return answer;
}

int power()
{
    int answer;
    askUserForANumber();
    answer = round(pow(num.firstNum, 2));
    return answer;
}

int raiseToX()
{
    int answer;
    askUserForNumbers();
    answer = round(pow(num.firstNum, num.secondNum));
    return answer;
}

int squareRoot()
{
    int answer;
    askUserForANumber();
    answer = sqrt(num.firstNum);
    return answer;
}

int xRoot()
{
    int answer;
    askUserForNumbers();
    answer = pow(num.firstNum, 1/num.secondNum); //provides the fraction version of a root x^1/2 instead of sqrt(x)
    return answer;
}

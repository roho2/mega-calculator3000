#ifndef DOMATH_H_INCLUDED
#define DOMATH_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int solveMath(int choice);
int addNumbers();
int subtractNumbers();
int multiplyNumbers();
int divideNumbers();
int power();
int raiseToX();
int squareRoot();
int xRoot();

struct twoNumbers
{
    int firstNum;
    int secondNum;
}num;

#endif // DOMATH_H_INCLUDED

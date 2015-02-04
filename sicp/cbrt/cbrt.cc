#include "cbrt.h"

#define ERROR_MARGIN 0.0001

double cbrtIter(double guess, double radicand);
bool cbrtGoodEnough(double oldGuess, double newGuess, double radicand);
double improveGuess(double guess, double radicand);
double avg(double x, double y);
double abs(double x);
double square(double x);

double cbrt(double radicand)
{
    return cbrtIter(1, radicand);
}

double cbrtIter(double guess, double radicand)
{
    double betterGuess = improveGuess(guess, radicand);

    if (cbrtGoodEnough(guess, betterGuess, radicand))
        return guess;
    else
        return cbrtIter(betterGuess, radicand);
}

bool cbrtGoodEnough(double oldGuess, double newGuess, double radicand)
{
    return abs(oldGuess - newGuess) <= ERROR_MARGIN;
}

double improveGuess(double guess, double radicand)
{
    return ((radicand / square(guess)) + (2 * guess)) / 3;
}

double avg(double x, double y)
{
    return (x + y) / 2.0;
}

double abs(double x)
{
    if (x < 0)
        return -x;
    else
        return x;
}

double square(double x)
{
    return x * x;
}

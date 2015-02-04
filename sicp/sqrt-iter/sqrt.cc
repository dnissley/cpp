#include "sqrt.h"

#define ERROR_MARGIN 0.001

double sqrtIter(double guess, double radicand);
bool sqrtGoodEnough(double guess, double radicand);
double improveGuess(double guess, double radicand);
double avg(double x, double y);
double abs(double x);
double square(double x);

double sqrt(double radicand)
{
    return sqrtIter(1, radicand);
}

double sqrtIter(double guess, double radicand)
{
    if (sqrtGoodEnough(guess, radicand))
        return guess;
    else
    {
        double betterGuess = improveGuess(guess, radicand);
        return sqrtIter(betterGuess, radicand);
    }
}

bool sqrtGoodEnough(double guess, double radicand)
{
    return abs(radicand - square(guess)) <= ERROR_MARGIN;
}

double improveGuess(double guess, double radicand)
{
    return avg(guess, radicand / guess);
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

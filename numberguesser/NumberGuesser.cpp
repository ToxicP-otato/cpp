#include "NumberGuesser.h"

NumberGuesser::NumberGuesser()
{
    low = 1;
    high = 100;
    originalLow = 1;
    originalHigh = 100;
}

NumberGuesser::NumberGuesser(int lowerBound, int upperBound)
{
    low = lowerBound;
    high = upperBound;
    originalLow = lowerBound;
    originalHigh = upperBound;
}

void NumberGuesser::higher()
{
    low = getCurrentGuess() + 1;
}

void NumberGuesser::lower()
{
    high = getCurrentGuess() - 1;
}

int NumberGuesser::getCurrentGuess()
{
    return (low + high) / 2;
}

void NumberGuesser::reset()
{
    low = originalLow;
    high = originalHigh;
}

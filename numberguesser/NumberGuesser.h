#ifndef NUMBERGUESSER_H
#define NUMBERGUESSER_H

class NumberGuesser
{
private:
    int low;
    int high;
    int originalLow;
    int originalHigh;

public:
    NumberGuesser();
    NumberGuesser(int lowerBound, int upperBound);
    void higher();
    void lower();
    int getCurrentGuess();
    void reset();
};

#endif

//This program will guess a number between 1 and 100,
//CS 110B Assignment 11, Zihao Yang


#include <iostream>
#include "NumberGuesser.h"
using namespace std;

bool PlayAgain()
{
    char answer;
    cout << "Do you want to play again? (y/n): ";
    cin >> answer;

    if (answer == 'y')
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    NumberGuesser guesser(1, 100);
    char answer;
    bool playAgain = true;

    while(playAgain)
    {
        guesser.reset();
        cout << "Think of a number between 1 and 100.\n";

        do
        {
            cout << "Is the number " << guesser.getCurrentGuess() << "? (h/l/c): ";
            cin >> answer;

            if (answer == 'h')
            {
                guesser.higher();
            }
            else if (answer == 'l')
            {
                guesser.lower();
            }
        } while (answer != 'c');

        cout << "You picked " << guesser.getCurrentGuess() << "? Great pick.\n";
        playAgain = PlayAgain();
    }
    cout << "Goodbye.\n";
    return 0;
}


/* 
Think of a number between 1 and 100.
Is the number 50? (h/l/c): h
Is the number 75? (h/l/c): l
Is the number 62? (h/l/c): c
You picked 62? Great pick.
Do you want to play again? (y/n): y
Think of a number between 1 and 100.
Is the number 50? (h/l/c): h
Is the number 75? (h/l/c): h
Is the number 88? (h/l/c): l
Is the number 81? (h/l/c): c
You picked 81? Great pick.
Do you want to play again? (y/n): y
Think of a number between 1 and 100.
Is the number 50? (h/l/c): l
Is the number 25? (h/l/c): h
Is the number 37? (h/l/c): c
You picked 37? Great pick.
Do you want to play again? (y/n): n
Goodbye.
*/

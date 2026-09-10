//This program will guess a number between 1 and 100,


#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void guessMidNumber(int min, int max)
{
    char answer;
    cout << "Is it " << (min + max) / 2 << "? (h/l/c):";
    cin>> answer;

    if (answer == 'h')
    {
        guessMidNumber((min+max)/2, max);
    }
    else if (answer == 'l')
    {
        guessMidNumber(min, (min+max)/2);
    }
    else;
}

bool PlayAgain()
{
    char answer;
    cout << "Great!Do you want to play again? (y/n):";
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

void guessNumber(int min, int max)
{
    char answer;
    int mid = rand() %(max-min+1) + min;
    srand(time(0));

    cout << "Is it " << mid << "? (h/l/c):";
    cin >> answer;

    if (answer =='h')
    {
        guessNumber(mid+1,max);
    }
    else if (answer =='l')
    {
        guessNumber(min,mid-1);
    }

}

int main()
{
    bool playAgain = true;
    while(playAgain)
    {
        cout << "Think of a number between 1 and 100.\n";
        guessMidNumber(1,100);
        playAgain = PlayAgain();

    }
    return 0;
}


/* Testing for guessMidNumber:
Think of a number between 1 and 100.
Is it 50? (h/l/c):h
Is it 75? (h/l/c):l
Is it 62? (h/l/c):c
Great!Do you want to play again? (y/n):y
Think of a number between 1 and 100.
Is it 50? (h/l/c):h
Is it 75? (h/l/c):h
Is it 87? (h/l/c):l
Is it 81? (h/l/c):c
Great!Do you want to play again? (y/n):y
Think of a number between 1 and 100.
Is it 50? (h/l/c):l
Is it 25? (h/l/c):h
Is it 37? (h/l/c):c
Great!Do you want to play again? (y/n):n

Testing for guessNumber(Random):
[zyang66@hills ~]$ ./a.out
Think of a number between 1 and 100.
Is it 84? (h/l/c):l
Is it 49? (h/l/c):h
Is it 53? (h/l/c):h
Is it 61? (h/l/c):l
Is it 54? (h/l/c):h
Is it 58? (h/l/c):l
Is it 55? (h/l/c):h
Is it 56? (h/l/c):h
Is it 57? (h/l/c):c
Great!Do you want to play again? (y/n):y
Think of a number between 1 and 100.
Is it 20? (h/l/c):l
Is it 5? (h/l/c):h
Is it 7? (h/l/c):h
Is it 9? (h/l/c):h
Is it 18? (h/l/c):c
Great!Do you want to play again? (y/n):n
*/
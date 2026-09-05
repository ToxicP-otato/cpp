// Assignment 2: Zihao Yang
//This program is black jack game.

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
        char playAgain ='y';
        srand(time(0));
        while(playAgain != 'n')
        {
                int total = 0;
                int card1,card2;
                char drawAgain = 'y';
                card1 = rand() % 13 + 1;
                card2 = rand() % 13 + 1;
                total = card1 + card2;
                cout << "First cards :" << card1 << "," << card2 << endl;
                cout << "Total:" << total << endl;

                while(drawAgain == 'y')
                {
                        if (total > 21)
                        {
                                cout << "Bust!\n";
                                break;
                        }

                        cout << "Do you want to draw another card?(y/n):\n";
                        cin >> drawAgain;

                        if (drawAgain == 'y')
                        {
                                card1 = rand() % 13 + 1;
                                total = total + card1;
                                cout << "Card:" << card1 << endl;
                                cout << "Total:" << total << endl;
                        }

                }

        cout << " Would you like to play again? (y/n):" ;
        cin >> playAgain;
        }
        return 0;

}

/*

[zyang66@hills ~]$ nano blackjack.cpp
[zyang66@hills ~]$ g++ blackjack.cpp
[zyang66@hills ~]$ ./a.out
First cards :13,12
Total:25
Bust!
 Would you likde to play again? (y/n)y
First cards :1,4
Total:5
Do you want to draw another card?
n
 Would you likde to play again? (y/n)y
First cards :6,2
Total:8
Do you want to draw another card?
y
Card:8
Total:16
Do you want to draw another card?
n
 Would you likde to play again? (y/n)n
[zyang66@hills ~]$ nano blackjack.cpp
[zyang66@hills ~]$ g++ blackjack.cpp
[zyang66@hills ~]$ ./a.out
First cards :13,5
Total:18
Do you want to draw another card?(y/n):
n
 Would you like to play again? (y/n):y
First cards :8,4
Total:12
Do you want to draw another card?(y/n):
y
Card:11
Total:23
Bust!
 Would you like to play again? (y/n):n

*/
//This program will pull file card.txt which have 20 last 6 of creditcard number and scan for card number and match with provide number.

#include<iostream>
#include<fstream>
using namespace std;

bool stolenCredit(int list[20])
{
        int card;
        cout << "Please provide last 6 credit card number:";
        cin >> card;
        for(int i=0;i<20;i++)
        {
                if(list[i] == card)
                {
                        return true;
                }
        }

        return false;
}

int main()
{
        ifstream inputFile;
        inputFile.open("cards.txt");

        if(!inputFile)
        {
                cout << "Error: file could not detected.\n";
                return 1;
        }

        int list[20];
        for(int i=0;i<20;i++)
        {
                inputFile >> list[i];
        }

        inputFile.close();

        if(stolenCredit(list))
        {
                cout << " Suspicious Creditcard detected!\n";
        }
        else
        {
                cout << " No suspicious activity detected.\n";
        }

        return 0;
}
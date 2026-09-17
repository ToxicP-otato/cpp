//This program will ask for 5 cards and determine what kind.
//CS 110B, Assignment 4, Zihao Yang
#include <iostream>
using namespace std;

bool containsFourOfaKind(int hand[])
{
    int count[10] = {0};//do 10 just to make things easier.
    for(int i=0; i<5; i++)
    {
        for(int k=0; k<10; k++)
        {
            if(hand[i] == k)
            {
                count[k]++;
            }
        }
    }//count cards.
    for(int i=0; i<10; i++)
    {
        if(count[i] == 4)
        {
            return true;
        }
    }
    return false;
}

bool containsFullHouse(int hand[])
{
    int count[10] = {0};
    for(int i=0; i<5; i++)
    {
        for(int k=0; k<10; k++)
        {
            if(hand[i] == k)
            {
                count[k]++;
            }
        }
    }

    bool three = false;
    bool two = false;
    for(int i=0; i<10; i++)
    {
        if(count[i] ==3)
        {
            three = true;
        }
        if(count[i] == 2)
        {
            two = true;
        }
    }

    if(three && two)
    {
        return true;
    }
    else
    {
        return false;
    }
    
}

bool containsThreeOfaKind(int hand[])
{
    int count[10] = {0};
    for(int i=0; i<5; i++)
    {
        for(int k=0; k<10; k++)
        {
            if(hand[i] == k)
            {
                count[k]++;
            }
        }
    }

    for(int i=0;i<10;i++)
    {
        if(count[i] == 3)
        {
            return true;
        }
    }
    return false;
}

bool containsTwoPair(int hand[])
{
    int count[10] = {0};
    for(int i=0; i<5; i++)
    {
        for(int k=0; k<10; k++)
        {
            if(hand[i] == k)
            {
                count[k]++;
            }
        }
    }

    int pairs =0;
    for(int i=0; i<10;i++)
    {
        if(count[i] ==2)
        {
            pairs++;
        }
    }

    if(pairs == 2)
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool  containsPair(int hand[])
{
    int count[10] = {0};
    for(int i=0; i<5; i++)
    {
        for(int k=0; k<10; k++)
        {
            if(hand[i] == k)
            {
                count[k]++;
            }
        }
    }

    int pairs =0;
    for(int i=0; i<10;i++)
    {
        if(count[i] ==2)
        {
            pairs++;
        }
    }

    if(pairs == 1)
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool containsStraight(int hand[])//I understand that it will still be fine to have it follow after Full house, but I just want to make sure.
{
    int sorted[5];
    for(int i=0; i<5; i++)
    {
        sorted[i] = hand[i];
    }

    for(int i=0;i<5;i++)
    {
        for(int j=0;j<4-i;j++)
        {
            if(sorted[j] < sorted[j+1])
            {
                int temp = sorted[j];
                sorted[j] = sorted[j+1];
                sorted[j+1] = temp;
            }
        }
    }//sorted card from small to big.

    for(int i=0;i<4;i++)
    {
        if(sorted[i+1] != sorted[i] -1)
        {
            return false;
        }
    }
    return true;//checking for straight.
}

int main()
{
    cout << "Enter five numeric cards, no face cards. Use 2 - 9." << endl;
    int hand[5];
    for(int i=0; i<5; i++)
    {
        cout <<"Card " << i+1 << ": ";
        cin >> hand[i];
    }

    if(containsFourOfaKind(hand))
    {
        cout << "Four of a kind!" << endl;
    }
    else if(containsFullHouse(hand))
    {
        cout << "Full house!" << endl;
    }
    else if(containsThreeOfaKind(hand))
    {
        cout << "Three of a kind!" << endl;
    }
    else if(containsTwoPair(hand))
    {
        cout << "Two pair!" << endl;
    }
    else if(containsPair(hand))
    {
        cout << "Pair!" << endl;
    }
    else if(containsStraight(hand))
    {
        cout << "Straight!" << endl;
    }
    else
    {
        cout << "High card!" << endl;
    }

    return 0;
}

/*
[zyang66@hills ~]$ ./a.out
Enter five numeric cards, no face cards. Use 2 - 9.
Card 1: 2
Card 2: 2
Card 3: 5
Card 4: 2
Card 5: 2
Four of a kind!
[zyang66@hills ~]$ ./a.out
Enter five numeric cards, no face cards. Use 2 - 9.
Card 1: 5
Card 2: 4
Card 3: 5
Card 4: 5
Card 5: 4
Full house!
[zyang66@hills ~]$ ./a.out
Enter five numeric cards, no face cards. Use 2 - 9.
Card 1: 3
Card 2: 3
Card 3: 3
Card 4: 2
Card 5: 5
Three of a kind!
[zyang66@hills ~]$ ./a.out
Enter five numeric cards, no face cards. Use 2 - 9.
Card 1: 2
Card 2: 2
Card 3: 5
Card 4: 5
Card 5: 4
Two pair!
[zyang66@hills ~]$ ./a.out
Enter five numeric cards, no face cards. Use 2 - 9.
Card 1: 2
Card 2: 2
Card 3: 7
Card 4: 5
Card 5: 6
Pair!
[zyang66@hills ~]$ ./a.out
Enter five numeric cards, no face cards. Use 2 - 9.
Card 1: 3
Card 2: 4
Card 3: 5
Card 4: 6
Card 5: 7
Straight!
*/
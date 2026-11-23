//This code will take score from user and display winner.
//CS 110B, Assignment 9, Zihao Yang
#include<iostream>
using namespace std;

struct WinRecord
{
    char* name;
    int wins;
};

void initializeData(WinRecord* standings, int size)
{
    for(int i=0; i<size; i++)
    {
        cout << " Enter Team #" << i+1 << ": ";
        standings[i].name = new char[100];
        cin.ignore();
        cin.getline(standings[i].name, 100);
        cout << " Enter the wins for team #" << i+1 << ": ";
        cin >> standings[i].wins;
    }
}

void sortData(WinRecord* standings, int size)
{
    int temp;
    char* store;
    for(int i=0; i<size-1;i++)
    {
        for(int k=0;k<size-1-i;k++)
        {
            if(standings[k].wins < standings[k+1].wins)
            {
                temp = standings[k].wins;
                store = standings[k].name;
                standings[k].wins = standings[k+1].wins;
                standings[k].name = standings[k+1].name;
                standings[k+1].wins = temp;
                standings[k+1].name = store;
            }
        }
    }
}

void displayData(WinRecord* standings, int size)
{
    cout << "League Standings:\n";
    for (int i=0; i<size; i++)
    {
        cout << standings[i].name << ": " << standings[i].wins << endl;
    }
}

int main()
{
    int size;
    cout << "Enter the amount of teams: ";
    cin >> size;
    WinRecord* standings = new WinRecord[size];
    initializeData(standings, size);
    sortData(standings, size);
    displayData(standings, size);
    for (int i=0; i<size; i++)
    {
        delete [] standings[i].name;
    }
    delete[] standings;
    return 0;
}

/* ./a.out
Enter the amount of teams: 5
 Enter Team #1:Padres
 Enter the wins for team #1:75
 Enter Team #2:Dodgers
 Enter the wins for team #2:91
 Enter Team #3:Gaints
 Enter the wins for team #3:92
 Enter Team #4:Rockies
 Enter the wins for team #4:65
 Enter Team #5:Diamondbacks
 Enter the wins for team #5:70
League Standings:
Gaints: 92
Dodgers: 91
Padres: 75
Diamondbacks: 70
Rockies: 65
*/
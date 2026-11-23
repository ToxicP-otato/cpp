//This program will ask for league score and rank them.
#include <iostream>
#include <string>
using namespace std;

void initializeArrays(string names[],int wins[], int size)
{
        for(int i=0; i<size; i++)
        {
            cout << "Enter team #" << i+1 << ": ";
            cin >> names[i];
            cout << "Enter the wins for team #" << i+1 << ": ";
            cin >> wins[i];
        }
}

void sortData(string names[], int wins[], int size)
{
    int temp;
    string store;
    for(int i=0; i<size-1; i++)
    {
        for(int k=0; k<size-1-i; k++)//make sure we are not wasting.
        {
            if(wins[k]<wins[k+1])
            {
               temp = wins[k];
               wins[k] = wins[k+1];
               wins[k+1] = temp;
               store = names[k];
               names[k] = names[k+1];
               names[k+1] = store;
            }
        }
    }
}

void displayData(string names[], int wins[], int size)
{
    cout << endl << "League Standings:\n";
    for(int i=0; i<size; i++)
    {
        cout << names[i] << ": " << wins[i] << endl;
    }
}

int main()
{
    const int size = 5;
    string names[size];
    int wins[size];

    initializeArrays(names, wins, size);
    sortData(names, wins, size);
    displayData( names, wins, size);

    return 0;

}

/* ./a.out
Enter team #1: Padres
Enter the wins for team #1: 75
Enter team #2: Dodgers
Enter the wins for team #2: 91
Enter team #3: Giants
Enter the wins for team #3: 92
Enter team #4: Rockies
Enter the wins for team #4: 65
Enter team #5: Diamondbacks
Enter the wins for team #5: 70

League Standings:
Giants: 92
Dodgers: 91
Padres: 75
Diamondbacks: 70
Rockies: 65
*/
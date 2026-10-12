//Pointer version of league.cpp.

#include <iostream>
#include <string>
using namespace std;

void initializeData(string *names,int *wins, int size)
{
        for(int i=0; i<size; i++)
        {
            cout << "Enter team #" << i+1 << ": ";
            cin >> names[i];
            cout << "Enter the wins for team #" << i+1 << ": ";
            cin >> wins[i];
        }
}

void sortData(string *names, int *wins, int size)
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

void displayData(string *names, int *wins, int size)
{
    cout << endl << "League Standings:\n";
    for(int i=0; i<size; i++)
    {
        cout << names[i] << ": " << wins[i] << endl;
    }
}

int main()
{
    string *namePtr = NULL;
    int *winsPtr = NULL;
    int size;
    cout << "How many teams are in the league?: ";// input here since we need size for other void also.
    cin >> size;

    namePtr = new string[size];
    winsPtr = new int[size];

    initializeData(namePtr, winsPtr, size);
    sortData(namePtr, winsPtr, size);
    displayData(namePtr, winsPtr, size);

    delete [] namePtr;
    delete [] winsPtr;
    namePtr = NULL;
    winsPtr = NULL;

    return 0;

}

/*[zyang66@hills ~]$ ./a.out
How many teams are in the league?: 4
Enter team #1: Padres
Enter the wins for team #1: 75
Enter team #2: Dodgers
Enter the wins for team #2: 91
Enter team #3: Giants
Enter the wins for team #3: 92
Enter team #4: Cubs
Enter the wins for team #4: 65

League Standings:
Giants: 92
Dodgers: 91
Padres: 75
Cubs: 65
[zyang66@hills ~]$*/
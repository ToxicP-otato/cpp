//This program will ask for type of burritos sold and provide a total and most sold.


#include<iostream>
using namespace std;

int main()
{
        const int NUM_T=4;
        string burritoT[NUM_T] = {"carnitas", "beef", "shrimp", "veggie"};
        int numS[NUM_T];//setting up array.

        cout << "Enter number of carnitas sold: ";
        cin >> numS[0];
        cout << "Enter number of beef sold: ";
        cin >> numS[1];
        cout << "Enter number of shrimp sold: ";
        cin >> numS[2];
        cout << "Enter number of veggie sold: ";
        cin >> numS[3];// inputing all numbers.

        int most=0;
        int type=0;
        int total=0;
        for(int i=0; i<NUM_T; i++)
        {
            total += numS[i];//calculate total.
            if(numS[i] > most)
            {
                most = numS[i];
                type = i;//determin the most and type.
            }    
        }

        cout << "You sold " << total << " burritos today. The most sold was " << burritoT[type] << "."<< endl;

        return 0;

}

/*[zyang66@hills ~]$ ./a.out
Enter number of carnitas sold: 3
Enter number of beef sold: 5
Enter number of shrimp sold: 2
Enter number of veggie sold: 4
You sold 14 burritos today. The most sold was beef.
[zyang66@hills ~]$ ./a.out
Enter number of carnitas sold: 5
Enter number of beef sold: 7
Enter number of shrimp sold: 8
Enter number of veggie sold: 1
You sold 21 burritos today. The most sold was shrimp.*/
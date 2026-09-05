//This program will ask user to input their age, and tell they if they are a child ,
//a teen , an adult or a retiree.
//Zihao Yang Math110B

#include <iostream>
using namespace std;

int main()
{
        int age;
        char error ='y';
        while(error == 'y')
        {
                cout << "Please input your age: ";
                cin >> age;

                if (age > 0 && age <= 12)
                {
                        cout << "You are a child.";
                        error ='n';
                }

                else if (age > 12 && age <=17)
                {
                        cout << "You are a teen.";
                        error ='n';
                }

                else if (age > 17 && age <= 64)
                {
                        cout << "You are an adult.";
                        error ='n';
                }

                else if (age>=65)
                {
                        cout <<"You are a retiree.";
                        error ='n';
                }

                else
                {
                        cout <<"Error, Age must be a number and at least 0!";
                        error ='y';
                }

                cout << endl; //add it so answer won't be at the same line with the next code.
        }

        return 0;
}





/*

[zyang66@hills ~]$ ./a.out
Please input your age: -1
Error, Age must be a number and at least 0!
Please input your age: 5
You are a child.
[zyang66@hills ~]$ ./a.out
Please input your age: 14
You are a teen.
[zyang66@hills ~]$ ./a.out
Please input your age: 20
You are an adult.
[zyang66@hills ~]$ ./a.out
Please input your age: 65
You are a retiree.

*/
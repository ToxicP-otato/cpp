//This program will check password in mmmDDYY.fl format.
#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char password[50];
    cout << "Enter password in mmmDDYY.fl format: ";
    cin.getline(password,50);

    bool valid = true;

    if(strlen(password)!=10)
    {
        valid = false;
    }
    else
    {
        for(int i=0; i<3; i++)
        {
            if(password[i]<'a' || password[i]>'z')
            {
                valid = false;
                break;
            }
        }
        for(int i=3; i<7;i++)
        {
            if(password[i]<'0' || password[i]>'9')
            {
                valid = false;
                break;
            }
        }
        if(password[7]!='.')
        {
            valid = false;
        }
        for(int i=8; i<10;i++)
        {
            if(password[i]<'a' || password[i]>'z')
            {
                valid = false;
                break;
            }
        }
    }

        if(valid)
        {
            cout << "Password is valid." << endl;
        }
        else
        {
            cout << "Password is invalid." << endl;
        }

    return 0;
}
// This program will ask user to input the temperature in Fahrenheit, and convert it to Celsius.


#include <iostream>
#include <iomanip>
using namespace std;

bool toCelsiusByReference(float &temperature)
{
    cout << fixed << setprecision(1);
    cout << "The equivalent Celsius temperature is: " << (temperature - 32) * 5 / 9 << endl;
    if (temperature > 32)
    {
            return true;
    }
    else 
    {
            return false;
     }
}

int main()
{
    float temperature;
    cout << "Welcome to the temperature converter!" << endl;
    cout << "Please input the temperature in Fahrenheit: ";
    cin >> temperature;

    if (toCelsiusByReference(temperature))
    {
        cout<< "This temperature is above freezing." << endl;
    }
    else
    {
        cout<< "This temperature is below freezing." << endl;
    }

    return 0;
}


/* [zyang66@hills ~]$ ./a.out
Welcome to the temperature converter!
Please input the temperature in Fahrenheit: 15
The equivalent Celsius temperature is: -9.4
This temperature is below freezing.*/

#include <iostream>
#include <string>
using namespace std;

int main() 
{
    string names[] = {"Carnitas", "Pollo", "Veggie"};
    float prices[] = {6.95, 6.25, 5.95};

`   string *namePtr = NULL;
    float *pricePtr = NULL;

    namePtr = names;
    pricePtr = prices;

    for (int i = 0; i < 3; i++)
     {
        *(namePtr + i) = *(namePtr + i) + " Especial";
        *(pricePtr + i) = *(pricePtr + i) + 10.00;
    }

    for (int i = 0; i < 3; i++) 
    {
        cout << *(namePtr + i) << " " << *(pricePtr + i) << endl;
    }

    return 0;
}
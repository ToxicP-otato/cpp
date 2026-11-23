//This program will identify if the point is within the circle and also calculate the circle's area. 
#include <iostream>
#include "Circle.h"
using namespace std;

int main()
{
    Circle myCircle;
    myCircle.setX(2.0);
    myCircle.setY(3.0);
    myCircle.setRadius(2.0);
    cout << "Area of myCircle: " << myCircle.getArea() << endl;

    Circle* ptr = &myCircle;
    ptr->setX(0.0);
    ptr->setY(0.0);
    ptr->setRadius(5.0);

    double point1X = 3.0;
    double point1Y = 4.0;
    double point2X = 10.0;
    double point2Y = 10.0;

    if (ptr->containsPoint(point1X, point1Y))
        cout << "The first point is contained in the circle." << endl;
    else
        cout << "The first point is not contained in the circle." << endl;

    if (ptr->containsPoint(point2X, point2Y))
        cout << "The second point is contained in the circle." << endl;
    else
        cout << "The second point is not contained in the circle." << endl;

    return 0;
}

/*

./a.out
Area of myCircle: 12.56
The first point is contained in the circle.
The second point is not contained in the circle.

*/

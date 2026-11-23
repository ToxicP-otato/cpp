#include <cmath>
#include "Circle.h"

void Circle::setRadius(double r)
{
    radius = r;
}

void Circle::setX(double value)
{
    x = value;
}

void Circle::setY(double value)
{
    y = value;
}

double Circle::getRadius()
{
    return radius;
}

double Circle::getX()
{
    return x;
}

double Circle::getY()
{
    return y;
}

double Circle::getArea()
{
    return radius * radius * 3.14;
}

bool Circle::containsPoint(double xValue, double yValue)
{
    double distance = sqrt((xValue - x) * (xValue - x) + (yValue - y) * (yValue - y));
    return distance <= radius;
}

// This program defines a Rectangle or square
#include <iostream>
using namespace std;

class Rectangle
{
    private:
        double width;
        double length;
    public:
        void setWidth(double w);
        void setLength(double len);
        double getWidth() const;
        double getLength() const;
        double getPerimeter() const;
        bool isSquare() const;
};

void Rectangle::setWidth(double w)
{
    width = w;
}

void Rectangle::setLength(double len)
{
    length = len;
}

double Rectangle::getWidth() const
{
    return width;
}

double Rectangle::getLength() const
{
    return length;
}

double Rectangle::getPerimeter() const
{
    return 2 * width + 2 * length;
}

bool Rectangle::isSquare() const
{
    return length == width;
}

int main()
{
    Rectangle box;
    double w, len;

    cout << "Enter the width: ";
    cin >> w;
    cout << "Enter the length: ";
    cin >> len;

    box.setWidth(w);
    box.setLength(len);

    cout << "Perimeter: " << box.getPerimeter() << endl;
    if (box.isSquare())
        cout << "It is a square." << endl;
    else
        cout << "It is a rectangle." << endl;

    return 0;
}

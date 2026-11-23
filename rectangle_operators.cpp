#include <iostream>
using namespace std;

class Rectangle
{
    private:
        int width;
        int length;
    public:
        Rectangle(int w, int l)
        {
            width = w;
            length = l;
        }

        Rectangle operator=(const Rectangle &right)
        {
            width = right.width;
            length = right.length;
            return *this;
        }

        bool operator>(const Rectangle &right)
        {
            return (width * length) > (right.width * right.length);
        }

        bool operator<(const Rectangle &right)
        {
            return (width * length) < (right.width * right.length);
        }
};

int main()
{
    Rectangle a(3, 7), b(6, 9), c(8, 8);

    cout << "Comparing A and B" << endl;
    if (a > b)
    {
        cout << "A is larger" << endl;
    }
    else
    {
        cout << "B is larger" << endl;
    }

    cout << "Comparing B and C" << endl;
    if (b > c)
    {
        cout << "B is larger" << endl;
    }
    else
    {
        cout << "C is larger" << endl;
    }

    a = b = c;

    cout << "Comparing A and B" << endl;
    if (a > b)
    {
        cout << "A is bigger than B" << endl;
    }
    else
    {
        cout << "A is not bigger than B" << endl;
    }
    if (b > a)
    {
        cout << "B is bigger than A" << endl;
    }
    else
    {
        cout << "B is not bigger than A" << endl;
    }

    cout << "Comparing B and C" << endl;
    if (b > c)
    {
        cout << "B is bigger than C" << endl;
    }
    else
    {
        cout << "B is not bigger than C" << endl;
    }
    if (c > b)
    {
        cout << "C is bigger than B" << endl;
    }
    else
    {
        cout << "C is not bigger than B" << endl;
    }

    return 0;
}

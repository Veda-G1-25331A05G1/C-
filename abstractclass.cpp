#include <iostream>
using namespace std;

// Abstract class
class Shape
{
public:
    // Pure virtual function
    virtual void area() = 0;
};

// Derived class
class Rectangle : public Shape
{
private:
    int length, breadth;

public:
    Rectangle(int l, int b)
    {
        length = l;
        breadth = b;
    }

    void area()
    {
        cout << "Area of Rectangle = "
             << length * breadth << endl;
    }
};

int main()
{
    Rectangle obj(10, 5);

    obj.area();

    return 0;
}

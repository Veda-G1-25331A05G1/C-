#include <iostream>
using namespace std;

// Base class
class Shape
{
public:
    // Pure virtual functions
    virtual void area() = 0;
    virtual void display() = 0;
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

    // Implementing pure virtual function
    void area()
    {
        cout << "Area of Rectangle = "
             << length * breadth << endl;
    }

    // Implementing pure virtual function
    void display()
    {
        cout << "This is a Rectangle." << endl;
    }
};

int main()
{
    Rectangle obj(10, 5);

    obj.display();
    obj.area();

    return 0;
}

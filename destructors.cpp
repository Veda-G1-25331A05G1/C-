#include <iostream>
using namespace std;

// Creating a class
class Student
{
public:
    // Constructor
    Student()
    {
        cout << "Constructor is called." << endl;
    }

    // Destructor
    ~Student()
    {
        cout << "Destructor is called." << endl;
    }

    // Member function
    void display()
    {
        cout << "Student object is working." << endl;
    }
};

int main()
{
    // Creating an object
    Student s1;

    // Calling member function
    s1.display();

    return 0;
}

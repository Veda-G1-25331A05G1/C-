#include <iostream>
using namespace std;

// Creating a class
class Student
{
public:
    string name;
    int age;
    float marks;

    // Member function to display student details
    void display()
    {
        cout << "Student Name : " << name << endl;
        cout << "Age          : " << age << endl;
        cout << "Marks        : " << marks << endl;
    }
};

int main()
{
    // Creating an object of the class
    Student s1;

    // Assigning values to the object
    s1.name = "Veda";
    s1.age = 20;
    s1.marks = 85.5;

    // Calling the member function
    s1.display();

    return 0;
}

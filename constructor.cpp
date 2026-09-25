#include <iostream>
using namespace std;

// Creating a class
class Student
{
private:
    string name;
    int age;

public:
    // Default constructor
    Student()
    {
        name = "Veda";
        age = 20;
    }

    // Member function to display details
    void display()
    {
        cout << "Student Name : " << name << endl;
        cout << "Age          : " << age << endl;
    }
};

int main()
{
    // Creating an object
    // Constructor is called automatically
    Student s1;

    // Display student details
    s1.display();

    return 0;
}

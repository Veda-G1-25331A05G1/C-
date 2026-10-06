#include <iostream>
using namespace std;

// Base class
class Student
{
public:
    int rollNo;

    Student(int r)
    {
        rollNo = r;
    }
};

// Virtual inheritance
class Test : virtual public Student
{
public:
    int marks;

    Test(int r, int m) : Student(r)
    {
        marks = m;
    }
};

// Virtual inheritance
class Sports : virtual public Student
{
public:
    int score;

    Sports(int r, int s) : Student(r)
    {
        score = s;
    }
};

// Derived class
class Result : public Test, public Sports
{
public:
    Result(int r, int m, int s)
        : Student(r), Test(r, m), Sports(r, s)
    {
    }

    void display()
    {
        cout << "Roll Number: " << rollNo << endl;
        cout << "Test Marks: " << marks << endl;
        cout << "Sports Score: " << score << endl;
        cout << "Total Score: " << marks + score << endl;
    }
};

int main()
{
    Result obj(101, 85, 90);

    cout << "Student Result" << endl;
    obj.display();

    return 0;
}

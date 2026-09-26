#include <iostream>
using namespace std;

class Student
{
private:
    int rollNo;
    static int count;

public:
    Student(int r)
    {
        rollNo = r;
        count++;
    }

    void display()
    {
        cout << "Roll Number: " << rollNo << endl;
    }

    static void showCount()
    {
        cout << "Number of Students: " << count << endl;
    }
};

// Definition of static data member
int Student::count = 0;

int main()
{
    Student s1(101);
    Student s2(102);
    Student s3(103);

    s1.display();
    s2.display();
    s3.display();

    Student::showCount();

    return 0;
}

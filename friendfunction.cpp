#include <iostream>
using namespace std;
class Student
{
Private:
 int marks;
Public:
Student(int m)
 {
 marks = m;
 }
 friend void display(Student s);
};
void display(Student s)
{
 cout << "Marks = " << s.marks << endl;
}
int main()
{
 Student s(85);
 display(s);
 return 0;
}

#include <iostream>
using namespace std;

int main()
{
    int marks[5];
    int sum = 0;

    // Reading array elements
    cout << "Enter marks of 5 students:" << endl;

    for (int i = 0; i < 5; i++)
    {
        cin >> marks[i];
    }

    // Displaying array elements and calculating sum
    cout << "\nMarks are:" << endl;

    for (int i = 0; i < 5; i++)
    {
        cout << marks[i] << " ";
        sum = sum + marks[i];
    }

    cout << "\nTotal Marks = " << sum << endl;

    return 0;
}

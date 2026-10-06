#include <iostream>
#include <list>
using namespace std;

int main()
{
    list<int> numbers;

    // Adding elements to the list
    numbers.push_back(10);
    numbers.push_back(20);
    numbers.push_back(30);
    numbers.push_front(5);

    cout << "Elements in the list:" << endl;

    // Displaying list elements
    for (int num : numbers)
    {
        cout << num << " ";
    }

    // Removing an element from the front
    numbers.pop_front();

    cout << "\n\nAfter removing the first element:" << endl;

    for (int num : numbers)
    {
        cout << num << " ";
    }

    // Removing an element from the back
    numbers.pop_back();

    cout << "\n\nAfter removing the last element:" << endl;

    for (int num : numbers)
    {
        cout << num << " ";
    }

    return 0;
}

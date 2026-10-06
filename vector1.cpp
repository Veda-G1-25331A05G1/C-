#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> numbers;

    // Adding elements to the vector
    numbers.push_back(10);
    numbers.push_back(20);
    numbers.push_back(30);
    numbers.push_back(40);
    numbers.push_back(50);

    cout << "Elements in the vector:" << endl;

    // Displaying vector elements
    for (int i = 0; i < numbers.size(); i++)
    {
        cout << numbers[i] << " ";
    }

    // Adding another element
    numbers.push_back(60);

    cout << "\n\nAfter adding an element:" << endl;

    for (int num : numbers)
    {
        cout << num << " ";
    }

    // Removing the last element
    numbers.pop_back();

    cout << "\n\nAfter removing the last element:" << endl;

    for (int num : numbers)
    {
        cout << num << " ";
    }

    return 0;
}

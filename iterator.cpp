#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> numbers = {10, 20, 30, 40, 50};

    cout << "Elements of the vector using iterator:" << endl;

    // Creating an iterator
    vector<int>::iterator it;

    // Traversing the vector using iterator
    for (it = numbers.begin(); it != numbers.end(); ++it)
    {
        cout << *it << " ";
    }

    return 0;
}

#include <iostream>
using namespace std;

// Inline function
inline int square(int n)
{
    return n * n;
}

int main()
{
    int num = 5;

    cout << "Number = " << num << endl;
    cout << "Square = " << square(num) << endl;

    return 0;
}

#include <iostream>
using namespace std;

int main()
{
    int a = 10;
    double b = 5.5;

    // Implicit type casting
    double result = a + b;

    cout << "Implicit Type Casting:" << endl;
    cout << "Integer value = " << a << endl;
    cout << "Double value = " << b << endl;
    cout << "Result = " << result << endl;

    // Explicit type casting
    double x = 10.75;
    int y = (int)x;

    cout << "\nExplicit Type Casting:" << endl;
    cout << "Original double value = " << x << endl;
    cout << "Converted integer value = " << y << endl;

    return 0;
}

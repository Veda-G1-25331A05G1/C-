#include <iostream>
using namespace std;

// Template class
template <class T>
class Calculator
{
    T a, b;

public:
    Calculator(T x, T y)
    {
        a = x;
        b = y;
    }

    T add()
    {
        return a + b;
    }

    T multiply()
    {
        return a * b;
    }
};

int main()
{
    // Object for integer values
    Calculator<int> intCalc(10, 20);

    cout << "Integer Addition: " << intCalc.add() << endl;
    cout << "Integer Multiplication: " << intCalc.multiply() << endl;

    // Object for floating-point values
    Calculator<float> floatCalc(5.5, 2.5);

    cout << "Float Addition: " << floatCalc.add() << endl;
    cout << "Float Multiplication: " << floatCalc.multiply() << endl;

    return 0;
}

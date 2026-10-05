#include <iostream>
using namespace std;
class Demo{
public:
int add(int a, int b)
{
    return a + b;
}

// Function with three integer parameters
int add(int a, int b, int c)
{
    return a + b + c;
}

double add(double a, double b)
{
    return a + b;
}
};
int main()
{
Demo d;
    cout << "Sum of two integers: " <<d. add(10, 20) << endl;
    cout << "Sum of three integers: " <<d. add(10, 20, 30) << endl;
    cout << "Sum of two decimal numbers: " <<d. add(10.5, 20.5) << endl;

    return 0;
}

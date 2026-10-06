#include <iostream>
#include <exception>
using namespace std;

// User-defined exception class
class InvalidAgeException : public exception
{
public:
    const char* what() const noexcept override
    {
        return "Invalid age! Age must be 18 or above.";
    }
};

int main()
{
    int age;

    cout << "Enter your age: ";
    cin >> age;

    try
    {
        if (age < 18)
        {
            throw InvalidAgeException();
        }

        cout << "You are eligible to vote." << endl;
    }
    catch (const InvalidAgeException& e)
    {
        cout << "Exception caught: " << e.what() << endl;
    }

    return 0;
}

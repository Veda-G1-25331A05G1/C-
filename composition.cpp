#include <iostream>
using namespace std;

// Component class
class Engine
{
public:
    void start()
    {
        cout << "Engine started." << endl;
    }
};

// Composition class
class Car
{
private:
    Engine engine;

public:
    void startCar()
    {
        cout << "Car is starting..." << endl;
        engine.start();
    }
};

int main()
{
    Car car;

    car.startCar();

    return 0;
}

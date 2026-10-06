#include <iostream>
using namespace std;

// Template function for Bubble Sort
template <class T>
void bubbleSort(T arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                T temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

template <class T>
void display(T arr[], int n)
{
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";

    cout << endl;
}

int main()
{
    int intArr[] = {50, 20, 40, 10, 30};
    int n = 5;

    cout << "Before sorting: ";
    display(intArr, n);

    bubbleSort(intArr, n);

    cout << "After sorting: ";
    display(intArr, n);

    return 0;
}

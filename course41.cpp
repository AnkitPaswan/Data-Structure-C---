// write a program to swap alternate array element;

#include <iostream>
using namespace std;

void swapAltern(int arr[], int size)
{
    for (int i = 0; i < size; i += 2)
    {
        if (i + 1 < size)
        {
            swap(arr[i], arr[i + 1]);
        }
    }
}

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int arr[] = {0, 1, 2, 3, 4, 5};

    swapAltern(arr, 6);
    printArray(arr, 6);

    return 0;
}
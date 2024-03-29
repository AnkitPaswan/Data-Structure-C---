// write a program to implement the Bubble sort;

#include <iostream>
using namespace std;

void BubbleSort(int arr[], int n)
{
    bool swapped;
    // for round 1 to n-1;
    for (int i = 0; i < n - 1; ++i)
    {
        swapped = false;
        // Last i elements are already sorted
        for (int j = 0; j < n - i - 1; ++j)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }
        if (swapped == false)
            break;
    }
}

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; ++i)
    {
        cout << arr[i] << " ";
    }
}

int main()
{

    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(arr) / sizeof(arr[0]);
    BubbleSort(arr, n);
    printf("Sorted array: \n");
    printArray(arr, n);

    return 0;
}
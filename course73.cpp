// Quick sort implementation using recursion;

#include <iostream>
using namespace std;

// creating partition sort func
int partition(int *arr, int s, int e)
{

    int pivot = arr[s];

    int count = 0;
    for (int i = s + 1; i <= e; i++)
    {
        if (arr[i] <= pivot)
        {
            count++;
        }
    }

    // place pivot at right positoin
    int pivotIndex = s + count;
    swap(arr[pivotIndex], arr[s]);

    // left and right wala part smbhal lete h
    int i = s, j = e;

    while (i < pivotIndex && j > pivotIndex)
    {
        while (arr[i] <= pivot)
        {
            i++;
        }
        while (arr[j] > pivot)
        {
            j--;
        }
        if (i < pivotIndex && j > pivotIndex)
        {
            swap(arr[i++], arr[j--]);
        }
    }

    return pivotIndex;
}

// creating quick sort func
void QuickSort(int *arr, int s, int e)
{
    // base case

    if (s >= e)
        return;

    // partition karenge

    int p = partition(arr, s, e);

    // left part sort krenge
    QuickSort(arr, s, p - 1);

    // right part sort krenge
    QuickSort(arr, p + 1, e);
}

// printing array function

void printArray(int *arr, int size)
{
    cout << "Sorted array is : " << endl;

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{

    int arr[5] = {12, 40, 13, 26, 29};

    int size = 5;

    QuickSort(arr, 0, size - 1);

    printArray(arr, size);

    return 0;
}
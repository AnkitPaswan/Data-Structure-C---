// Binary search;

#include <iostream>
using namespace std;

int binarySearch(int arr[], int size, int key)
{
    int start = 0;
    int end = size - 1;
    // int mid = (start + end) / 2;

    int mid = start + (end - start) / 2;

    while (start <= end)
    {
        if (arr[mid] == key)
        {
            return mid;
        }
        // goto right wala part
        if (key > arr[mid])
        {
            start = mid + 1;
        }
        // goto left wala part
        else
        {
            end = mid - 1;
        }
        // mid = (start + end) / 2;
        mid = start + (end - start) / 2;
    }
    return -1;
}

int main()
{

    int arr[] = {12, 24, 36, 48, 60};
    cout << "Enter the element to be searched: " << endl;

    int key;
    cin >> key;

    int size = sizeof(arr) / sizeof(arr[0]);
    int found = binarySearch(arr, size, key);

    if (found == -1)
        cout << "Element is absent." << endl;
    else
        cout << "Element is present at index " << found << endl;

    return 0;
}
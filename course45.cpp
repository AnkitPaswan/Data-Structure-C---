// write a program for selection sort based on user input array element;

#include <iostream>
using namespace std;

void select_sort(int arr[], int n)
{

    for (int i = 0; i < n - 1; i++)
    {
        int minIndex = i;
        for (int j = i + 1; j < n; j++)
        {

            if (arr[j] < arr[minIndex])
            {
                minIndex = j;
            }
        }

        swap(arr[minIndex], arr[i]);
    }
}

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i];
        cout << "\t";
    }
}

int main()
{
    int n;
    cout << "Enter the size of arrays: " << endl;
    cin >> n;

    int arr[100];

    cout << "Enter the element of array:" << endl;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // Function Call
    select_sort(arr, n);

    cout << "Sorted array: \n";

    printArray(arr, n);

    return 0;
}
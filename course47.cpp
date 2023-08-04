
// write a program to implement insertion sort;

#include <iostream>
using namespace std;

void insertion_sort(int arr[], int n)
{

    for (int i = 1; i < n; i++)
    {
        int j;
        int temp = arr[i];
        //..................... using for loop.........................
        // for (j = i - 1; j >= 0; j--)
        // {
        //     if (arr[j] > temp)
        //     {
        //         arr[j + 1] = arr[j];
        //     }
        //     else
        //     {
        //         break;
        //     }
        // }

        // ------------------using while loop;-----------------------------
        j = i - 1;
        while (j >= 0 && arr[j] > temp)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        //----------------------------------------------------------------------------
        arr[j + 1] = temp;
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

    int arr[] = {12, 11, 13, 5, 6};
    // int arr[] = {20, 17, 90, 26, 36};
    int n = sizeof(arr) / sizeof(arr[0]);
    insertion_sort(arr, n);
    printf("Sorted array: \n");
    printArray(arr, n);

    return 0;
}
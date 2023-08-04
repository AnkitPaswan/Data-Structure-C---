// write a program to print reverse of array;

#include <iostream>
using namespace std;

void reverseArray(int array[], int size)
{
    int start = 0;
    int end = size - 1;
    // int temp;
    while (start <= end)
    {

        // temp = array[start];
        // array[start] = array[end];
        // array[end] = temp;
        // other way
        swap(array[start], array[end]);
        start++;
        end--;
    }
    for (int i = 0; i < size; i++)
    {
        cout << array[i] << " ";
    }
}

void printArray(int array[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << array[i] << " ";
    }
}

int main()
{
    int array[5] = {12, 24, 36, 48, 60};

    cout << "Original array:" << endl;
    printArray(array, 5);
    cout << endl;

    cout << "Reverse of array:" << endl;
    reverseArray(array, 5);

    return 0;
}
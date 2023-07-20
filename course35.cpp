// write a program to print array using function;

#include <iostream>
using namespace std;

void print_array(int arr[], int size)
{

    cout << "Printing the array: " << endl;

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    // int arr[] = {12, 24, 36, 48, 60};

    // take input array element from user;
    int arr[5];
    cout << "Enter arrays element: " << endl;
    for (int i = 0; i < 5; i++)
    {
        cin >> arr[i];
    }
    // update 5th arrays element;
    arr[4] = 12;
    print_array(arr, 5);

    return 0;
}
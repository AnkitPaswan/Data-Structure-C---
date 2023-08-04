// linear search implementation;

#include <iostream>
using namespace std;

int linearSearch(int arr[], int size, int key)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == key)
        {
            return i;
        }
    }
    return -1;
}

int main()
{

    cout << "Enter the element to be searched: " << endl;
    int arr[5] = {10, 20, 30, 40, 50};
    int key;
    cin >> key;
    int size = sizeof(arr) / sizeof(arr[0]);

    int found = linearSearch(arr, size, key);

    if (found == -1)
    {
        cout << "Element is absent." << endl;
    }
    else
    {
        cout << "Element is present at index " << found << endl;
    }
    return 0;
}
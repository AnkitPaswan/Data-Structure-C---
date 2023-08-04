// Linear search implementation using Recursion;

#include <iostream>
using namespace std;

bool linearSearch(int *arr, int size, int key)
{

    // Base case
    if (size == 0)
        return false;
    if (arr[0] == key)
    {
        return true;
    }
    else
    {
        bool remainingPart = linearSearch(arr + 1, size - 1, key);
        return remainingPart;
    }
}

int main()
{

    int arr[5] = {19, 25, 13, 44, 15};

    cout << "Enter the key to be searched: " << endl;
    int key;
    cin >> key;
    int size = sizeof(arr) / sizeof(arr[0]);

    int ans = linearSearch(arr, size, key);
    if (ans)
    {
        cout << "Key is present." << endl;
    }
    else
        cout << "Key is absent." << endl;
    return 0;
}
// Binary search implementation using Recursion;

#include <iostream>
using namespace std;

bool binarySearch(int *arr, int s, int e, int k)
{

    // base case
    //(element not found)
    if (s > e)
    {
        return false;
    }

    int mid = s + (e - s) / 2;

    //(element found)
    if (arr[mid] == k)
        return true;

    if (arr[mid] < k)
        return binarySearch(arr, mid + 1, e, k);

    else
        return binarySearch(arr, s, mid - 1, k);
}
int main()
{
    int arr[6] = {15, 20, 32, 45, 50, 66};

    int size = 6;
    int key = 66;

    bool found = binarySearch(arr, 0, size - 1, key);

    cout << "present or not: " << found;

    return 0;
}
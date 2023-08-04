
// searching arrays elements from 2D array using fuction;

#include <iostream>
using namespace std;

// creating function to check target value with array elements.
bool isPresent(int arr[][4], int target, int row, int col)
{
    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 4; col++)
        {
            if (arr[row][col] == target)
            {
                return 1;
            }
        }
    }
    return 0;
}

// main function
int main()
{

    // Taking input from user
    int arr[3][4];
    cout << "Enter the element:" << endl;
    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 4; col++)
        {
            cin >> arr[row][col];
        }
        cout << endl;
    }

    // printing entered element
    cout << "Printing arr: " << endl;
    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 4; col++)
        {
            cout << arr[row][col] << " ";
        }
        cout << endl;
    }

    // input target value
    cout << "Enter the element to search for..." << endl;

    int target;
    cin >> target;

    // calling func
    bool result = isPresent(arr, target, 3, 4);

    if (result == 1)
    {
        cout << "element found. " << endl;
    }
    else
    {
        cout << "element not found." << endl;
    }

    return 0;
}
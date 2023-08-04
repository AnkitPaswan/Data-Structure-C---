// Demonstrate working with 2D Arrays;

#include <iostream>
using namespace std;
int main()
{

    // 1st method to initilize element in arr
    int arr[3][4] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
    cout << "Printing arr: " << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    //---------------------------------------
    // 2st method to initilize element in arr
    int arr2[3][4] = {{1, 2, 3, 4}, {4, 3, 2, 1}, {0, 5, 6, 7}};

    cout << "Printing arr2: " << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << arr2[i][j] << " ";
        }
        cout << endl;
    }

    // Take input from user

    int arr3[3][4];

    // take input
    cout << "Enter the element:" << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cin >> arr3[i][j];
        }
        cout << endl;
    }

    // printing input element from user;
    cout << "printing the element:" << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << arr3[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
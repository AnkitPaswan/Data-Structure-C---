// write a program to take the input(array) from user and print it;

#include <iostream>
using namespace std;
int main()
{

    cout << "Enter the array element: " << endl;
    int arr[5];
    for (int i = 0; i < 5; i++)
    {
        cin >> arr[i];
    }

    cout << "Array element entered by user: " << endl;

    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << ", ";
    }

    return 0;
}
// write a program to print the arrays;

#include <iostream>
using namespace std;
int main()
{

    int arr[5] = {1, 2, 3, 4, 5};

    cout << "Given Arrays is: " << endl;

    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " , ";
    }

    return 0;
}
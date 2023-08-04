// write a program to find unique element from array;

#include <iostream>
using namespace std;

int findUnique(int array[], int size)
{

    int ans = 0;

    for (int i = 0; i < size; i++)
    {
        ans = ans ^ array[i];
    }
    return ans;
}

int main()
{

    int array[] = {10, 20, 10, 40, 20, 40, 50};
    // int n = 7;
    int uniqueNumber = findUnique(array, 7);
    cout << uniqueNumber << " Is the unique element of given array.";

    return 0;
}

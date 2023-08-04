// array implementation using STL in C++;

#include <iostream>
#include <array>
using namespace std;
int main()
{

    array<int, 5> arr = {10, 20, 30, 40, 50};

    array<int, 4> arr1;

    array<int, 5> arr2 = {1, 2, 3, 4, 5};

    // for find size of array;
    int size = arr.size();

    // basic method of accesssing array element;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    // accessing array element using C++ STL;
    for (int i = 0; i < size; i++)
    {
        cout << arr.at(i) << " ";
    }
    cout << endl;

    // accessing single element of array using C++ STL;
    // (Method 1)
    cout << "Element of Array at index 2 is : " << arr.at(2) << endl;

    //(Method 2)
    cout << "Element of Array at index 3 is : " << get<3>(arr) << endl;

    // check array is empty or not(0 = false, 1= true);
    cout << "Array empty or not: " << arr.empty() << endl;

    // fill the entire array with a particular value
    arr1.fill(0);
    cout << "Array after filling operation is : ";
    for (int i = 0; i < 4; i++)
        cout << arr1[i] << " ";
    cout << endl;

    // print 1st element of array;
    cout << "First element of array is: " << arr.front() << endl;

    // print last element of array;
    cout << "Last element of array is: " << arr.back() << endl;

    // array swapping using STL(swap arr element with arr2 element);

    arr.swap(arr2);
    cout << "The first array elements after swapping are : ";
    for (int i = 0; i < 5; i++)
        cout << arr[i] << " ";
    cout << endl;
    cout << "The second array elements after swapping are : ";
    for (int i = 0; i < 5; i++)
        cout << arr2[i] << " ";
    cout << endl;

    return 0;
}
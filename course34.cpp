// write a program to update the array element;

#include <iostream>
using namespace std;
int main()
{

    int array[] = {12, 24, 36, 48, 60};
    cout << "Old array element at 5th index:" << endl;
    cout << array[4] << endl;
    array[4] = 72;
    cout << "After updation array new element at 5th index :" << endl;
    cout << array[4] << endl;

    return 0;
}
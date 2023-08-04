// write a program to get size of array and elements as an input from users and print these;

// #include <iostream>
// using namespace std;
// int main()
// {

//     int size;
//     cout << "Enter the size of array :" << endl;
//     cin >> size;
//     cout << "Enter the element of array :" << endl;

//     int array[100];

//     for (int i = 0; i < size; ++i)
//     {
//         cin >> array[i];
//     }

//     cout << "Printing array: " << endl;
//     for (int i = 0; i < size; ++i)
//     {
//         cout << array[i] << " ";
//     }

//     return 0;
// }

// using function;

#include <iostream>
using namespace std;

void print_array(int array[], int size)
{

    for (int i = 0; i < size; ++i)
    {
        cout << array[i] << " ";
    }
}

int main()
{
    int size;
    cout << "Enter the size of the array:" << endl;
    cin >> size;
    int array[100];
    cout << "Enter the element of array:" << endl;
    for (int i = 0; i < size; ++i)
    {
        cin >> array[i];
    }
    cout << "Printing array:" << endl;
    print_array(array, size);

    return 0;
}
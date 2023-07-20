// write a program to access the characters element from array;

// #include <iostream>
// using namespace std;
// int main()
// {

//     char ch[5] = {'a', 'b', 'c', 'd', 'e'};
//     cout << ch[3] << endl;

//     for (int i = 0; i < 5; i++)
//     {
//         cout << ch[i] << " ";
//     }

//     return 0;
// }

// using function;

#include <iostream>
using namespace std;

void Print_array(char arr[], int size)
{

    cout << "Printing the array:" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    char arr[] = {'a', 'b', 'c', 'd', 'e'};
    Print_array(arr, 5);
    return 0;
}

// Demonestrate working with pointers;

// C++ program to illustrate Pointers

#include <iostream>
using namespace std;

int main()
{
    int var = 20;

    // declare pointer variable
    int *ptr;

    // note that data type of ptr and var must be same
    ptr = &var;

    // assign the address of a variable to a pointer
    cout << "Value at ptr = " << ptr << "\n";
    cout << "Value at var = " << var << "\n";
    cout << "Value at *ptr = " << *ptr << "\n";

    // address value of var
    cout << "Address value of var = " << &var << "\n";

    // size of variable
    cout << "Size of integer is = " << sizeof(var) << "\n";
    // size of pointer
    cout << "Size of pointer is = " << sizeof(ptr) << "\n";

    // increment pointer value
    (*ptr)++;
    cout << "increment pointer value = " << var << endl;
    // decrement pointer value
    (*ptr)--;
    cout << "deccrement pointer value = " << var << endl;

    return 0;
}

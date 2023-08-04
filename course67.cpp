// understanding reference variable using function;

#include <iostream>
using namespace std;

// create pass by value func
void update(int n) // pass by value
{
    n++;
}

// create pass by reference fun
void update2(int &n) // pass by ref
{
    n++;
}

int main()
{

    int n = 20;

    cout << "Before update value: " << n << endl;

    // call fun
    update(n);
    cout << "After update value: " << n << endl; // no increment in n value bcz function uses pass by value parameters;

    cout << "Before update value: " << n << endl;

    // calling fun
    update2(n);
    cout << "After update value: " << n << endl; // increment in n value bcz function uses reference parameters;

    return 0;
}
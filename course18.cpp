// program to add two numbers using function.

#include <iostream>
using namespace std;

// user defined function

int add_number(int a, int b)
{
    return (a + b);
}

int main()
{

    // int sum = add_number(12, 12);
    int a, b, sum;
    cin >> a >> b;

    sum = add_number(a, b);

    cout << "Sum of " << a << "+" << b << " = " << sum << endl;

    return 0;
}
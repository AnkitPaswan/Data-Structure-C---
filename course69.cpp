// print fibonacci series of a given number using Recursion.

#include <iostream>
using namespace std;

int fibonacci(int num)
{

    // base case
    if (num == 0)
        return 0;
    if (num == 1)
        return 1;

    int fib = fibonacci(num - 1) + fibonacci(num - 2);
    return fib;
}

int main()
{

    int num;
    cin >> num;

    cout << " Fibonacci sequence of given no. is: " << fibonacci(num) << endl;

    return 0;
}
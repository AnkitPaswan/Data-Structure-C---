// write a program to find the factorial of a number using function.

#include <iostream>
using namespace std;

int factorial(int num)
{
    // int fact = 1;
    // for (int i = 1; i <= num; i++)
    // {
    //     fact = fact * i;
    // }

    // return fact;

    // -----------using recusion-------------
    //(Base case)
    if (num == 0)
    {
        return 1;
    }

    return num * factorial(num - 1);
}

int main()
{

    int num;
    cin >> num;
    int sum = factorial(num);

    cout << "The factorial of " << num << " is " << sum;

    return 0;
}

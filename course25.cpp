// write a progrm to check whether the given number is prime or not.

#include <iostream>
using namespace std;

bool isPrime(int number)
{

    for (int i = 2; i < number; i++)
    {
        if (number % i == 0)
        {
            return 0;
        }
    }

    return 1;
}

int main()
{
    int num;
    cin >> num;

    if (isPrime(num))
    {

        cout << "Given number is prime";
    }
    else
    {
        cout << "Given Number is not a prime";
    }

    return 0;
}
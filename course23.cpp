// write a program to calculate the nCr(combination) of the given number using function.

#include <iostream>
using namespace std;

int factorial(int n)
{
    int fact = 1;
    int i = 1;
    while (i <= n)
    {
        fact *= i;
        i++;
    }
    return fact;
}

int nCr(int n, int r)
{

    int num = factorial(n);
    int denom = factorial(r) * factorial(n - r);

    int ans = num / denom;
    return ans;
}

int main()
{

    int n, r;
    cout << "Enter the n and r: " << endl;
    cin >> n >> r;
    int ans = nCr(n, r);
    cout << "Answe of " << n << "C" << r << " = " << ans;

    return 0;
}
// write a program to calculate the nPr(permuntation) of the given number using function.

#include <iostream>
using namespace std;

int factorial(int n)
{
    int fact = 1;
    int i = 1;
    while (i <= n)
    {
        fact = fact * i;
        i++;
    }
    return fact;
}

int nPr(int n, int r)
{
    int num = factorial(n) / factorial(n - r);

    return num;
}

int main()
{

    int n, r, ans;

    cout << "Enter the value of n and r:" << endl;
    cin >> n >> r;

    ans = nPr(n, r);
    cout << "Answer of " << n << "P" << r << " = " << ans << endl;

    return 0;
}

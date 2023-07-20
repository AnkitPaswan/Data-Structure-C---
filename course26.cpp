// write a program to calculate the A.P(3*n+7) formula.

#include <iostream>
using namespace std;

int ap(int n)
{
    int ans = (3 * n + 7);
    return ans;
}

int main()
{

    int n;
    cout << "Enter the value of n:" << endl;
    cin >> n;
    cout << "Answer of A.P is: " << ap(n);

    return 0;
}
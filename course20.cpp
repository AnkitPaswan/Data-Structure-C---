// program to calculate the square power(value) of the number.

#include <iostream>
using namespace std;

int power(int a, int b)
{

    int ans = 1;

    for (int i = 1; i <= b; i++)
    {
        ans = ans * a;
    }

    return ans;
}

int main()
{

    // int a = 12, b = 2;
    int a, b;
    cin >> a >> b;

    int answer = power(a, b);
    cout << "answer = " << answer;

    return 0;
}
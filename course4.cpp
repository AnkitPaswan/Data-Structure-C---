// Program to print sum of all even numbers of the n numbers.

#include <iostream>
using namespace std;
int main()
{

    int num;
    cout << "Enter the number:-";
    cin >> num;

    int i = 2;
    int sum = 0;

    while (i <= num)
    {
        sum += i;
        i += 2;
    }
    cout << sum;
    return 0;
}
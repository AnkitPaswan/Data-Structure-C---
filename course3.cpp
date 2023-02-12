// Program to print sum of the n numbers.

#include <iostream>
using namespace std;
int main()
{

    int num;
    cout << "Enter the number:-";
    cin >> num;
    int sum = 0;

    // int i = 1;

    // while (i <= num)
    // {
    //     sum = sum + i;
    //     i = i + 1;
    // }

    // do
    // {
    //     sum = sum + i;
    //     i = i + 1;
    // } while (i <= num);

    for (int i = 0; i <= num; i++)
    {
        sum += i;
    }

    cout << "The sum of entered number is:-" << sum << endl;

    return 0;
}
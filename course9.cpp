// Program to print sum of all evens no. of the n numbers.

#include <iostream>
using namespace std;
int main()
{

    int num;
    cout << "Enter the number:-";
    cin >> num;
    int sum = 0;

    int i = 1;

    while (i <= num)
    {
        if (i % 2 == 0)
        {

            sum += i;
        }
        i = i + 1;
        // i++;
    }
    // ------------------------------------
    // do
    // {
    //     sum = sum + i;
    //     i = i + 1;
    // } while (i <= num);

    // ----------------------------------------------------------------

    // for (int i = 0; i <= num; i++)
    // {
    //     if (i % 2 == 0)
    //     {

    //         sum += i;
    //     }
    // }

    cout << "The sum of entered number is:-" << sum << endl;

    return 0;
}
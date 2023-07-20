// Binary to decimal conversion

// #include <iostream>
// #include <math.h>
// using namespace std;
// int main()
// {

//     int n;
//     cin >> n;
//     int i = 0;
//     int ans = 0;

//     while (n != 0)
//     {
//         int digit = n % 10;
//         if (digit == 1)
//         {
//             ans = ans + powf(2, i);
//         }
//         n = n / 10;
//         i++;
//     }
//     cout << ans << endl;

//     return 0;
// }

// ---------------------another method---------------------------

#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int num, binary_num, decimal_num = 0, rem, base = 1;
    cout << "Enter the number to convert decimal:\n";
    cin >> num;
    binary_num = num;
    while (num > 0)
    {
        rem = num % 10;
        decimal_num = decimal_num + rem * base;
        num = num / 10;
        base = base * 2;
    }
    cout << "The decimal number is:\n"
         << decimal_num;

    return 0;
}
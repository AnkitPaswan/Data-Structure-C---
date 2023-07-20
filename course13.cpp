

// Decimal to Binary conversion.

// #include <iostream>
// using namespace std;
// int main()
// {
//     int a[10], n, i;
//     cout << "Enter the number to convert binary:\n";
//     cin >> n;
//     for (i = 0; n > 0; i++)
//     {
//         a[i] = n % 2;
//         n = n / 2;
//     }
//     cout << "Given number of binary is:\n";
//     for (i = i - 1; i >= 0; i--)
//     {
//         cout << a[i];
//     }

//     return 0;
// }

//---------------another way-------------------

#include <iostream>
#include <math.h>
using namespace std;
int main()
{

    int n;
    cin >> n;

    int ans = 0;
    int i = 0;

    while (n != 0)
    {
        int bit = n & 1;
        ans = (bit * powf(10, i)) + ans;

        n = n >> 1;
        i++;
    }

    cout << "Answer is " << ans << endl;
    return 0;
}

// programs for all star pattern based problem.

#include <iostream>
using namespace std;
int main()
{

    int n;
    cout << "Enter the no of rows & columns: " << endl;
    cin >> n;

    //----------------------------------------
    // int i = 1;
    // while (i <= n)
    // {
    //     int j = 1;

    //     while (j <= n)
    //     {
    //         cout << "*";
    //         j = j + 1;
    //     }
    //     cout << endl;
    //     i = i + 1;
    // }

    //----------------------------------------
    // int i = 1;
    // while (i <= n)
    // {
    //     int j = 1;

    //     while (j <= n)
    //     {
    //         // cout << i;
    //         cout << i + j - 1;
    //         // j = j + 1;
    //         j++;
    //     }
    //     cout << endl;
    //     // i = i + 1;
    //     i++;
    // }

    //----------------------------------------
    // int row = 1;
    // while (row <= n)
    // {
    //     int coln = 1;

    //     while (coln <= row)
    //     {
    //         cout << row;
    //         coln++;
    //     }
    //     cout << endl;
    //     row++;
    // }

    //----------------------------------------

    // int row = 1;

    // while (row <= n)
    // {
    //     int coln = 1;

    //     while (coln <= row)
    //     {
    //         cout << "*";
    //         coln++;
    //     }
    //     cout << endl;
    //     row++;
    // }
    //----------------------------------------------------------------

    // int row = 1;

    // while (row <= n)
    // {
    //     int coln = 1;
    //     int star = n - row + 1;
    //     while (star)
    //     {
    //         cout << "*";
    //         star = star - 1;
    //     }
    //     while (coln <= row)
    //     {
    //         coln++;
    //     }
    //     cout << endl;
    //     row++;
    // }

    //----------------------------------------------------------------

    // int row = 1;

    // while (row <= n)
    // {
    //     int coln = 1;

    //     int space = row - 1;
    //     int star = n - row + 1;

    //     while (space)
    //     {
    //         cout << " ";
    //         space = space - 1;
    //     }
    //     while (star)
    //     {
    //         cout << "*";
    //         star = star - 1;
    //     }

    //     while (coln <= row)
    //     {
    //         coln++;
    //     }
    //     cout << endl;
    //     row++;
    // }

    //----------------------------------------

    // int row = 1;

    // while (row <= n)
    // {
    //     int coln = 1;
    //     int val = row;

    //     while (coln <= row)
    //     {
    //         cout << val;
    //         val = val + 1;
    //         coln++;
    //     }
    //     cout << endl;
    //     row++;
    // }

    //----------------------------------------

    // int row = 1;

    // while (row <= n)
    // {
    //     int coln = 1;

    //     while (coln <= row)
    //     {
    //         cout << coln + row - 1;
    //         coln++;
    //     }
    //     cout << endl;
    //     row++;
    // }

    //----------------------------------------

    // int row = 1;

    // while (row <= n)
    // {
    //     int coln = 1;

    //     while (coln <= row)
    //     {
    //         cout << row - coln + 1;
    //         // cout << n - coln + 1;
    //         coln++;
    //     }
    //     cout << endl;
    //     row++;
    // }
    //---------------------------------------------

    // int row = 1;
    // int count = 1;
    // while (row <= n)
    // {
    //     int coln = 1;
    //     while (coln <= row)
    //     {
    //         cout << " ";
    //         cout << count;
    //         count = count + 1;
    //         coln++;
    //     }
    //     cout << endl;
    //     row++;
    // }

    //----------------------------------------------------------------

    int row = 1;
    while (row <= n)
    {
        // print space

        int space = n - row;
        while (space)
        {
            cout << " ";
            space = space - 1;
        }

        // print 1st triangle

        int coln = 1;
        while (coln <= row)
        {
            cout << coln;
            coln = coln + 1;
        }

        // print 2nd triangle

        int start = row - 1;
        while (start)
        {
            cout << start;
            start = start - 1;
        }

        cout << endl;
        row = row + 1;
    }

    return 0;
}
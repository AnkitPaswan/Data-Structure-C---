// programs for pattern based problem.

#include <iostream>
using namespace std;
int main()
{

    int n;
    cout << "Enter the number:" << endl;
    cin >> n;

    int row = 1;
    char count = 'A';
    while (row <= n)
    {
        int coln = 1;

        //----------------------------------------------------------------
        // while (coln <= n)
        // {
        //     char ch = 'A' + row - 1;
        //     cout << ch;
        //     coln = coln + 1;
        // }
        //................................................................

        // while (coln <= n)
        // {
        //     char ch = 'A' + coln - 1;
        //     cout << ch;
        //     coln = coln + 1;
        // }
        //--------------------------------------------------------------------

        // while (coln <= n)
        // {
        //     char ch = 'A' + row + coln - 2;
        //     cout << ch;
        //     coln = coln + 1;
        // }
        //---------------------------------------------------------------------

        // while (coln <= row)
        // {
        //     char ch = 'A' + row - 1;
        //     cout << ch;
        //     coln = coln + 1;
        // }

        //----------------------------------------------------------------------

        // while (coln <= row)
        // {
        //     char ch = 'A' + row + coln - 2;
        //     cout << ch;
        //     coln = coln + 1;
        // }

        //--------------------------------------------------------------------------

        // while (coln <= n)
        // {

        //     cout << " " << count;
        //     count = count + 1;
        //     coln = coln + 1;
        // }

        //------------------------------------------------------------------------------
        // while (coln <= row)
        // {

        //     cout << " " << count;
        //     count = count + 1;
        //     coln = coln + 1;
        // }
        //------------------------------------------------------------------------------

        char start = 'A' + n - row;
        while (coln <= row)
        {
            cout << start;
            start = start + 1;
            coln = coln + 1;
        }

        cout << endl;
        row++;
    }

    return 0;
}

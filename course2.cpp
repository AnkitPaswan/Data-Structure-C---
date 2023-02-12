// print the n number of series.

#include <iostream>
using namespace std;
int main()
{

    int num;

    cout << "Enter the number:-";
    cin >> num;
    int i = 1;
    while (i <= num)
    {
        cout << i << endl;
        // i = i + 1;
        i++;
    }

    // for (int i = 0; i <= num; i++)
    // {
    //     cout << i << endl;
    // }

    return 0;
}
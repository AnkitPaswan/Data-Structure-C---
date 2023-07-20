// program to check wether the given number is odd or even.

#include <iostream>
using namespace std;

bool isEven(int a)
{
    // -----------------
    // if (a & 1)
    // {
    //     return 0;
    // }
    // return 1;

    // ------------another way---------------

    if (a % 2 == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{

    int num;
    cin >> num;

    int ans = isEven(num);

    if (ans)
    {
        cout << "Given number is even." << endl;
    }
    else
    {
        cout << "Given number is odd.";
    }

    return 0;
}
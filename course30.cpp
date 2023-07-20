// print fibonacci series of a given number using for loop.

#include <iostream>
using namespace std;
int main()
{

    int num;
    int t1 = 0;
    int t2 = 1;
    int nextTerm = 0;

    cout << "Enter the number of Terms:" << endl;
    cin >> num;
    cout << "Fibonacci series: ";
    for (int i = 1; i <= num; i++)
    {
        if (i == 1)
        {
            cout << t1 << ", ";
            continue;
        }
        if (i == 2)
        {
            cout << t2 << ", ";
            continue;
        }

        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;

        cout << nextTerm << " , ";
    }

    return 0;
}
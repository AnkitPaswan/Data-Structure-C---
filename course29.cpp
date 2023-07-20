// Bitwise operators implementation

#include <iostream>
using namespace std;
int main()
{

    int n1 = 4;
    int n2 = 6;

    // for And operator(&)

    cout << "n1&n2"
         << " = " << (n1 & n2) << endl;

    // for OR operators(|)

    cout << "n1&n2"
         << " = " << (n1 | n2) << endl;

    // for NOT operator(~)
    cout << "~n1"
         << "  = " << (~n1) << endl;

    // for XOR operator(^)
    cout << "n1^n2"
         << " = " << (n1 ^ n2) << endl;

    // Right shift operator (>>)

    cout << (17 >> 1) << endl;
    cout << (17 >> 2) << endl;

    // left shift operator (<<)
    cout << (19 << 1) << endl;
    cout << (21 << 2) << endl;

    // Increment and Decrement operators.

    int i = 7;
    // pre increment(i++)
    cout << (++i) << endl;
    //  output: 8,

    // post increment(i++)
    cout << (i++) << endl;
    //  output: 8, i=9

    // post decrement(i--)
    cout << (i--) << endl;
    //  output: 9, i=8

    // pre decrement(--i)
    cout << (--i) << endl;
    //  output: 7, i=7

    return 0;
}

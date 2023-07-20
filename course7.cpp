// Check the given number is Positive or Negative or 0.

#include <iostream>
using namespace std;
int main()
{
    int i;
    cout << "Enter a number:" << endl;
    cin >> i;
    // i = cin.get();

    if (i > 0)
    {
        cout << "Entered number is Positive" << endl;
    }
    else if (i == 0)
    {
        cout << "Entered number is 0" << endl;
    }
    else
    {
        cout << "Entered number is Negative" << endl;
    }
    return 0;
}

// Check Entered number is prime or not.

#include <iostream>
using namespace std;
int main()
{

    int num;
    cout << "Enter the number:-";
    cin >> num;

    int i = 2;
    int check = 0;

    while (i < num)
    {
        if (num % i == 0)
        {
            check++;
            break;
        }
        i = i + 1;
    }
    if (check == 0)
        cout << "It is a Prime Number" << endl;
    else
        cout << "It is not a Prime Number" << endl;

    return 0;
}
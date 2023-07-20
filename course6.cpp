// Print the greater number from two numbers.

#include <iostream>
using namespace std;
int main()
{
    int num1, num2;
    cout << "Enter first number:" << endl;
    cin >> num1;
    cout << "Enter second number:" << endl;
    cin >> num2;
    if (num1 > num2)
    {
        cout << num1 << " is Greater than " << num2 << endl;
    }
    else if (num1 == num2)
    {
        cout << num1 << " is equal to " << num2 << endl;
    }
    else
    {
        cout << num2 << " is Greater than " << num1 << endl;
    }

    return 0;
}
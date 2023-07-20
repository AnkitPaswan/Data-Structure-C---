// program to create a calculator using switch case statement

#include <iostream>
using namespace std;
int main()
{

    int a;
    int b;

    cout << "Enter the value of a:" << endl;
    cin >> a;
    cout << "Enter the value of b:" << endl;
    cin >> b;

    char op;
    cout << "Enter the operator which u want to apply:" << endl;
    cin >> op;

    switch (op)
    {
    case '+':
        cout << a + b;
        break;
    case '-':
        cout << a - b;
        break;
    case '*':
        cout << a * b;
        break;
    case '/':
        cout << a / b;
        break;
    case '%':
        cout << a % b;
        break;

    default:
        cout << "Invalid operator";
        break;
    }

    return 0;
}
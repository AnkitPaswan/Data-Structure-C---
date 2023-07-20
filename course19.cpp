// Program to Find the Square Root of a Number using Library(built-in) Function.

#include <iostream>
#include <cmath>
using namespace std;

int main()
{

    double number, squareRoot;
    // number = 25.0;

    cout << "Enter the number of square roots:" << endl;
    cin >> number;

    squareRoot = sqrt(number);

    cout << "Square root of " << number << " = " << squareRoot;

    return 0;
}
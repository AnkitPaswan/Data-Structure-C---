// program for fehrenheit to celsius table

#include <iostream>
using namespace std;
int main()
{

    float fehren, celsius;
    cout << "Enter the fehrenheit :-" << endl;
    cin >> fehren;
    celsius = (fehren - 32) * 5 / 9;

    cout << "temperature in celsius:-" << celsius;

    return 0;
}
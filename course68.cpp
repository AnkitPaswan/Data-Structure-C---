// understanding Macros

#include <iostream>
using namespace std;

// define macro
#define PI 3.14 // it not taking any storage;

// definig macros for find min value
#define min(a, b) ((a < b) ? (a) : (b))

int main()
{

    // ------------- Using simple method------------------
    double pi = 3.14; // it takes 8 byte storage;
    int r1 = 5;
    double area1 = pi * r1 * r1;

    cout << "Area is " << area1 << endl;

    //-----------------Using Macro method--------------

    int r = 4;
    double area2 = PI * r * r;
    cout << "Area is " << area2 << endl;

    // code for min

    int a = 100;
    int b = 50;

    cout << "The min value is " << min(a, b) << endl;

    return 0;
}

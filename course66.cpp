// understanding reference variables;

#include <iostream>
using namespace std;
int main()
{

    int i = 10;

    // create a reference variable;

    int &j = i;

    // both i and j generate same output
    cout << "print the value of i: " << i << endl;
    cout << "print the value of j: " << j << endl;
    // increment the value of i;
    i++;
    cout << i << endl;
    cout << j << endl; // give output same as i;

    j++;
    cout << i << endl; // give output same as j
    cout << j << endl;

    return 0;
}
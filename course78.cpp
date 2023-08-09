
// demonstrate working with Destructor

// #include <iostream>
// using namespace std;

// class Test
// {
// public:
//     Test() { cout << "\n Constructor executed"; }

//     ~Test() { cout << "\n Destructor executed"; }
// };
// main()
// {
//     Test t;

//     return 0;
// }

// C++ program to demonstrate the number of times
// constructor and destructors are called

#include <iostream>
using namespace std;
int Count = 0;
// int dCount = 0;
class Test
{
public:
    // User-Defined Constructor
    Test()
    {

        // Number of times constructor is called
        Count++;
        cout << "No. of Object created: " << Count
             << endl;
    }

    // User-Defined Destructor
    ~Test()
    {
        cout << "No. of Object destroyed: " << Count
             << endl;
        Count--;
        // Number of times destructor is called
    }
};

// driver code
int main()
{
    Test t, t1, t2, t3;

    return 0;
}

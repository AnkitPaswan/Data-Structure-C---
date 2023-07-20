// exercise question

// #include <iostream>
// using namespace std;

// void update(int n)
// {
//     n = n / 2;
// }
// int main()
// {

//     int n = 10;
//     update(n);

//     cout << n;

//     return 0;
// }

#include <iostream>
using namespace std;
int update(int n)
{
    n -= 10;
    return n;
}
int main()
{

    int n = 15;

    update(n);
    cout << n;

    return 0;
}
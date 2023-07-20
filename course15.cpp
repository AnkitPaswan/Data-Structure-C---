// program using switch case statement .

// #include <iostream>
// using namespace std;
// int main()
// {

//     int num = 3;

//     switch (num)
//     {
//     case 1:
//         /* code */
//         cout << "First" << endl;
//         break;
//     case 2:
//         cout << "Second" << endl;
//         break;
//     case 3:
//         cout << "Third" << endl;
//         break;

//     default:
//         cout << "Not matched";
//         break;
//     }

//     return 0;
// }

#include <iostream>
using namespace std;
int main()
{

    char ch = 'a';

    switch (ch)
    {
    case 'a':
        cout << "this is a";
        break;
    case 'b':
        cout << "this is b";
        break;
    case 'c':
        cout << "this is c";
        break;

    default:
        cout << "Not matched any char";
        break;
    }

    return 0;
}
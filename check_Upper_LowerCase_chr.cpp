#include <iostream>
using namespace std;
int main()
{

    char user_input;
    cout << "Enter the Character:" << endl;
    cin >> user_input;
    // int ascii = user_input;
    // if (ascii >= 65 && ascii <= 90)
    // {
    //     cout << "Entered character is Upper case" << endl;
    // }
    // else if (ascii >= 97 && ascii <= 122)
    // {
    //     cout << "Entered character is Lowercase" << endl;
    // }
    // else if (ascii >= 48 && ascii <= 57)
    // {
    //     cout << "Entered character is numeric" << endl;
    // }
    // else
    // {
    //     cout << "Entered character is someting else" << endl;
    // }

    // ----------------------------------another way----------------------------------------

    if (user_input >= 'a' && user_input <= 'z')
    {
        cout << "Entered character is Lower case" << endl;
    }
    else if (user_input >= 'A' && user_input <= 'Z')
    {
        cout << "Entered character is Upper case" << endl;
    }
    else if (user_input >= '0' && user_input <= '9')
    {
        cout << "Entered character is numeric" << endl;
    }
    else
    {
        cout << "Entered character is someting else" << endl;
    }

    return 0;
}
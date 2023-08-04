
// write a program to check whether the given string is palindrome or not;

#include <iostream>
using namespace std;

bool checkPalindrome(char arr[], int n)
{
    int s = 0;
    int e = n - 1;

    while (s <= e)
    {

        if (arr[s] != arr[e])
        {
            return 0;
        }
        else
        {
            s++;
            e--;
        }
    }
    return 1;
}

// reverse the array;
void reverse(char name[], int n)
{
    int s = 0;
    int e = n - 1;
    while (s < e)
    {
        swap(name[s], name[e]);
        s++;
        e--;
    }
}

// find the array length;
int getLength(char name[])
{
    int count = 0;
    for (int i = 0; name[i] != '\0'; i++)
    {
        count++;
    }
    return count;
}

// main function
int main()
{
    char name[20];
    cout << "Enter ur name: " << endl;
    cin >> name;
    cout << "Your name is: " << name << endl;

    // get length
    int len = getLength(name);
    cout << "Length: " << len << endl;

    // print reverse
    reverse(name, len);
    cout << "Your reverse name is: " << name << endl;

    // cout << "Palindrome or not: " << checkPalindrome(name, len) << endl;
    bool ans = checkPalindrome(name, len);
    if (ans == false)
    {
        cout << "Given string is not palindrome";
    }
    else
    {
        cout << "Given string is palindrome";
    }

    return 0;
}
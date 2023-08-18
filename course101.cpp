
// Reverse a string using stack;

#include <iostream>
#include <stack>
using namespace std;
int main()
{

    stack<char> s;
    string str = "Ankit";
    for (int i = 0; i < str.length(); i++)
    {
        char ch = str[i];
        s.push(str[i]);
    }
    string ans = "";
    while (!s.empty())
    {
        char ch = s.top();
        ans.push_back(ch);
        s.pop();
    }

    cout << "Reverse of Ankit is: " << ans << endl;

    return 0;
}
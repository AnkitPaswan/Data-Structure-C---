// Stack implementaion using STL;

#include <iostream>
#include <stack>
using namespace std;
int main()
{

    stack<string> s;

    s.push("ankit");
    s.push("arjun");
    s.push("satyam");

    cout << "Top element;- " << s.top() << endl;
    s.pop();
    cout << "Top element;- " << s.top() << endl;

    cout << "Size of stcak:- " << s.size() << endl;
    cout << "empty or not:- " << s.empty() << endl;

    return 0;
}
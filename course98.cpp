
// Stack implementaion using cpp;

#include <iostream>
#include <stack> // STL of stack
using namespace std;
int main()
{

    stack<int> s;

    // push operation
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);

    // printing top element
    cout << "Printing top element: " << s.top() << endl;
    // pop operation
    s.pop();
    cout << "Printing top element: " << s.top() << endl;

    // check stack empty or not
    if (s.empty())
    {
        cout << "Stack is empty" << endl;
    }
    else
    {
        cout << "Stack is not empty" << endl;
    }

    // print the size of stack
    cout << "Size of stack: " << s.size() << endl;

    return 0;
}
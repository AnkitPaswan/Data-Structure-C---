// Queue implementaion using STL;

#include <iostream>
#include <queue>
using namespace std;
int main()
{

    queue<string> q;
    q.push("ankit");
    q.push("arjun");
    q.push("satyam");

    cout << "Top element;- " << q.front() << endl;

    q.pop();
    cout << "Top element;- " << q.front() << endl;

    cout << "size after pop " << q.size() << endl;

    return 0;
}
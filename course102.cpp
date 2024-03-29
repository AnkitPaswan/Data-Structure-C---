
// Queue implementation

#include <iostream>
#include <queue>
using namespace std;
int main()
{

    queue<int> q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);

    cout << "Front of queue is: " << q.front() << endl;

    cout << "Size of queue: " << q.size() << endl;

    q.pop();
    cout << "Size of queue: " << q.size() << endl;

    if (q.empty())
    {
        cout << "Queue is empty." << endl;
    }
    else
    {
        cout << "Queue is not empty." << endl;
    }

    return 0;
}
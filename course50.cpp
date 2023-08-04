// Deque implementation :- using deque we can easily perfom both push and pop operation from both sides begening and ending side.
// it is also known as double ended queue;

#include <iostream>
#include <deque>
using namespace std;
int main()
{

    // create a deque
    deque<int> d;

    // push element from end
    d.push_back(10);

    // push element from beginning
    d.push_front(20);

    cout << "print deque d: " << endl;
    for (int i : d)
    {
        cout << " " << i << " ";
    }
    cout << endl;

    cout << "element at index 1 is " << d.at(1) << endl;

    cout << "front-> " << d.front() << endl;
    cout << "back-> " << d.back() << endl;

    // erae element from deque;
    cout << "before erase d size- " << d.size() << endl;

    //(1st way to erase)
    // d.erase(d.begin(), d.end() - 1);

    //(2nd way to erase)
    d.erase(d.begin(), d.begin() + 1);
    cout << "after erase d size- " << d.size() << endl;
    cout << "print present element - ";
    for (int i : d)
    {
        cout << i << " ";
    }

    // pop frpm end
    d.pop_back();
    for (int i : d)
    {
        cout << " " << i << " ";
    }

    // pop from beginning
    // d.pop_front();
    // for (int i : d)
    // {
    //     cout << " " << i << " ";
    // }

    return 0;
}
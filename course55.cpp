// SETS implementaion using STL;
// it store unique element
// not duplicate allowed
// modification not allowed

#include <iostream>
#include <set>
using namespace std;
int main()
{

    set<int> s;

    s.insert(5);
    s.insert(7);
    s.insert(10);
    s.insert(20);
    for (auto i : s)
    {
        cout << i << " " << endl;
    }

    cout << "Delete 1st element: " << endl;

    set<int>::iterator it = s.begin();
    it++;
    s.erase(it);
    for (auto i : s)
    {
        cout << i << " " << endl;
    }

    cout << "check in list 7 is present or not: " << s.count(7) << endl;

    set<int>::iterator itr = s.find(5);
    cout << "value present at itr " << *it << endl;

    for (auto it = itr; it != s.end(); it++)
    {
        cout << *it << endl;
    }

    return 0;
}
// MAP implementaion using STL;

// it store the data as key value pair;

#include <iostream>
#include <map>
using namespace std;
int main()
{

    map<int, string> m;

    m[1] = "Ankit";
    m[2] = "arjun";
    m[13] = "satyam";
    // insert new element in a sorted order
    // auto ret_pair = m.emplace(4, "bhuvan");
    // complexity - o(log n)

    m.insert({5, "bheem"});
    cout << "\nSize of map: " << m.size() << endl;

    cerr << "Before erase" << endl;
    for (auto i : m)
    {
        cout << i.first << " " << i.second << endl;
    }
    cout << "finding 13 -> " << m.count(13) << endl;
    // cerr
    m.erase(2);
    cerr << "After erase:" << endl;
    for (auto i : m)
    {
        cout << i.first << " " << i.second << endl;
    }
    cout << endl;

    auto it = m.find(5);
    for (auto i = it; i != m.end(); i++)
    {
        cout << (*i).first << endl;
    }

    return 0;
}
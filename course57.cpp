// Binary search using STL;
// max, min print using STL;
// swapping element using STL;
// reverse element or string;
// rotate element;
// sort element using STL;

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main()
{

    vector<int> v;

    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);

    cout << "finding 30 " << binary_search(v.begin(), v.end(), 30) << endl;

    cout << "Lower bound " << lower_bound(v.begin(), v.end(), 30) - v.begin() << endl;
    cout << "Lower bound " << upper_bound(v.begin(), v.end(), 30) - v.begin() << endl;

    // max/min using STL

    int a = 20;
    int b = 90;

    cout << "max " << max(a, b) << endl;
    cout << "min " << min(a, b) << endl;

    // swapping

    swap(a, b);
    cout << "a -> " << a << endl;

    // reverse element or string;

    string str = "abcd";

    reverse(str.begin(), str.end());
    cerr << "Reverse str is " << str << endl;

    // rotate element;

    rotate(v.begin(), v.begin() + 1, v.end());
    cout << "after rotate : " << endl;
    for (auto i : v)
    {
        cout << i << " ";
    }
    cout << endl;

    // sort element using STL;

    sort(v.begin(), v.end());
    cout << "after sort : " << endl;
    for (auto i : v)
    {
        cout << i << " ";
    }
    cout << endl;
    return 0;
}
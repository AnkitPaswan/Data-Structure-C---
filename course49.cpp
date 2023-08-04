// vector implementation using STL;

#include <iostream>
#include <vector>
using namespace std;
int main()
{

    vector<int> v;

    cout << "Capacity -> " << v.capacity() << endl;

    // push 1 element in vector
    v.push_back(1);
    cout << "Capacity -> " << v.capacity() << endl;

    v.push_back(2);
    cout << "Capacity -> " << v.capacity() << endl;

    v.push_back(3);
    cout << "Capacity -> " << v.capacity() << endl;
    cout << "Size of vector -> " << v.size() << endl;

    cout << "Element at index 2 is " << v.at(2) << endl;

    // vector<int> v2 = {1, 2, 3, 4};
    // or
    vector<int> v2{1, 2, 3, 4, 5};
    cout << "Print v2 " << endl;
    for (int i : v2)
    {
        cout << i << " ";
    }
    cout << endl;
    cout << "Element at index 3 is " << v2.at(3) << endl;

    cout << "Before pop" << endl;
    for (int i : v2)
    {
        cout << i << " ";
    }
    cout << endl;

    v2.pop_back();

    cout << "After pop" << endl;
    for (int i : v2)
    {
        cout << i << " ";
    }
    cout << endl;

    // clear size
    cout << "Before clear size: " << v2.size() << endl;
    v2.clear();
    cout << "After clear size: " << v2.size() << endl;

    // here 5 is size of vector 2(assign with all 5 sizes) is element of vector
    vector<int> v3(5, 2);
    cout << "Print v3 " << endl;
    for (int i : v3)
    {
        cout << i << " ";
    }
    cout << endl;

    // copy v2 vector(element) to last vector;

    vector<int> last(v3);
    cout << "print last vector" << endl;
    for (int i : last)
    {
        cout << i << " ";
    }

    return 0;
}
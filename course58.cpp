// Reverse Array element using STL:

#include <iostream>
#include <vector>
using namespace std;

// creating function
vector<int> reverse(vector<int> v)
{
    int s = 0;
    int e = v.size() - 1;
    while (s <= e)
    {
        swap(v[s], v[e]);
        s++;
        e--;
    }
    return v;
}

void print(vector<int> v)
{
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
}

int main()
{

    vector<int> v;

    v.push_back(20);
    v.push_back(80);
    v.push_back(10);
    v.push_back(50);
    v.push_back(300);

    vector<int> ans = reverse(v);

    cout << "Printing reverse array:-" << endl;
    print(ans);

    return 0;
}
// Priority Queue impl using STL;

#include <iostream>
#include <queue>
using namespace std;
int main()
{

    // create max heap
    priority_queue<int> maxi;

    // create min heap
    priority_queue<int, vector<int>, greater<int>> mini;

    maxi.push(2);
    maxi.push(3);
    maxi.push(1);
    maxi.push(0);

    cout << "size of maxi " << maxi.size() << endl;

    int n = maxi.size();
    for (int i = 0; i < n; i++)
    {
        cout << maxi.top() << " ";
        maxi.pop();
    }
    cout << endl;

    // for mini
    mini.push(2);
    mini.push(5);
    mini.push(3);
    mini.push(1);
    mini.push(0);

    cout << "size of maxi " << mini.size() << endl;

    int m = mini.size();
    for (int i = 0; i < m; i++)
    {
        cout << mini.top() << " ";
        mini.pop();
    }
    cout << endl;
    return 0;
}
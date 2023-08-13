// Linked list Implementation;

#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

int main()
{
    // created new node
    Node *node1 = new Node(10);
    Node *node2 = new Node(20);
    Node *node3 = new Node(30);
    Node *node4 = new Node(40);

    cout << node1->data << endl;

    // Linking the nodes together.
    node1->next = node2;
    node2->next = node3;
    node3->next = node4;
    Node *head = node1;
    while (head != NULL)
    {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;

    return 0;
}
// implementation of singly linked list

#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    // constructor
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }

    // destructor
    ~Node()
    {
        int value = this->data;
        // memory free
        if (this->next != NULL)
        {
            delete next;
            this->next = NULL;
        }
        cout << "Memory is free for node with data " << value << endl;
    }
};

void insertAtHead(Node *&head, int d)
{
    // new node create
    Node *temp = new Node(d);
    temp->next = head;
    head = temp;
}

void insertAtTail(Node *&tail, int d)
{
    Node *temp = new Node(d);
    tail->next = temp;
    tail = temp;
}

void insertAtPosition(Node *&tail, Node *&head, int position, int d)
{
    // insert at start
    if (position == 1)
    {
        insertAtHead(head, d);
        return;
    }

    Node *temp = head;
    int cnt = 1;
    while (cnt < position - 1)
    {
        temp = temp->next;
        cnt++;
    }

    // inserting at last position
    if (temp->next == NULL)
    {
        insertAtTail(tail, d);
        return;
    }

    // creating a node for d;
    Node *newNode = new Node(d);
    newNode->next = temp->next;
    temp->next = newNode;
}

void printList(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

// deleting first node
void deleteNode(int position, Node *&head)
{
    if (position == 1)
    {
        Node *temp = head;
        head = head->next;
        // memory free start node
        temp->next = NULL;
        delete temp;
    }
    else
    {
        // deleting any middle node or last node
        Node *curr = head;
        Node *prev = NULL;

        int cnt = 1;
        while (cnt < position)
        {
            prev = curr;
            curr = curr->next;
            cnt++;
        }
        prev->next = curr->next;
        curr->next = NULL;
        delete curr;
    }
}

int main()
{
    // created a new node
    Node *node1 = new Node(10);
    // cout << node1->data << endl;
    // cout << node1->next << endl;

    //  head pointed to node1;
    Node *head = node1;
    Node *tail = node1;

    // cout << "Insert from head:" << endl;
    // printList(head);
    // insertAtHead(head, 12);
    // printList(head);
    // insertAtHead(head, 15);
    // printList(head);

    cout << "Insert from tail:" << endl;
    insertAtTail(tail, 12);
    printList(head);
    insertAtTail(tail, 15);
    printList(head);

    cout << "Insert at any position:" << endl;
    insertAtPosition(tail, head, 1, 13);
    printList(head);

    cout << "head:-" << head->data << endl;
    cout << "tail:-" << tail->data << endl;

    // delete function
    deleteNode(4, head);
    printList(head);

    return 0;
}
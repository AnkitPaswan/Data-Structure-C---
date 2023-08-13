

#include <iostream>
using namespace std;

class linkedList
{
public:
    int data;
    linkedList *next;
    linkedList(int data)
    {
        this->data = data;
        this->next = NULL;
        next = NULL;
    }
};

void insertHead(linkedList *&head, int d)
{
    linkedList *temp = new linkedList(d);
    temp->next = head;
    head = temp;
}

void insertAtTail(linkedList *&tail, int d)
{
    linkedList *temp = new linkedList(d);
    tail->next = temp;
    tail = temp;
}

void printList(linkedList *head)
{
    linkedList *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main()
{
    // head pointed to node1;
    // linkedList *head = NULL;
    linkedList *head = new linkedList(10);
    linkedList *tail = new linkedList(10);
    cout << "Insert at head:" << endl;
    printList(head);
    insertHead(head, 11);
    printList(head);
    insertHead(head, 12);
    printList(head);

    cout << "Insert at Tail:" << endl;
    printList(tail);
    insertAtTail(tail, 11);
    printList(tail);
    insertAtTail(tail, 12);
    printList(tail);

    return 0;
}
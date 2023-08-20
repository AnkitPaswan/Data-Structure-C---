
// Array Representation of Queue

#include <iostream>
using namespace std;

class Queue
{
    int *arr;
    int qfront, rear, size;

public:
    Queue()
    {
        size = 100000;
        arr = new int[size];
        qfront = 0;
        rear = 0;
    }

    // -------------------------------------
    bool isEmpty()
    {
        // implement the isEmpty() function
        if (qfront == rear)
            return true;
        else
            return false;
    }
    // ----------------------------------------
    void enqueue(int data)
    {
        if (rear == size)
        {
            cout << "Queue is Full" << endl;
        }
        else
        {
            arr[rear] = data;
            rear++;
        }
    }

    //-----------------------------------------
    int dequeue()
    {
        if (qfront == rear)
        {
            return -1;
        }
        else
        {
            int ans = arr[qfront];
            arr[qfront] = -1;
            qfront++;
            if (qfront == rear)
            {
                qfront = 0;
                rear = 0;
            }
            return ans;
        }
    }

    //------------------------------------------
    int front()
    {
        // implement the front() function
        if (qfront == rear)
        {
            return -1;
        }
        else
        {
            return arr[qfront];
        }
    }
};

int main()
{
    Queue q;

    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(40);
    cout << "Front: ";
    cout << q.front() << endl;
    cout << "Dequeue: ";
    cout << q.dequeue() << endl;
    cout << "Front: ";
    cout << q.front() << endl;
    cout << "Dequeue: ";
    cout << q.dequeue() << endl;
    cout << "Front: ";
    cout << q.front() << endl;
    cout << "Dequeue: ";
    cout << q.dequeue() << endl;
    cout << "Front: ";
    cout << q.front() << endl;
    cout << "Dequeue: ";
    cout << q.dequeue() << endl;

        if (q.isEmpty())
    {
        cout << "Queue is Empty" << endl;
    }
    else
    {
        cout << "Queue is not Empty" << endl;
    }
    return 0;
}
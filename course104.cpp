
// Circular queue implementaion

#include <iostream>
using namespace std;

class CircularQueue
{
    int *arr;
    int front, rear, size;

public:
    CircularQueue(int n)
    {
        size = n;
        arr = new int[size];
        front = rear = -1;
    }

    bool enqueue(int value)
    // to check whether queue is full
    {
        if ((front == 0 && rear == size - 1) || (rear == (front - 1) % (size - 1)))
        {
            // cout << "Queue is full." << endl;
            return false;
        }
        else if (front == -1) // first element to push
        {
            front = rear = 0;
        }
        else if (rear == size - 1 && front != 0)
        { // to maintain cyclic nature
            rear = 0;
        }
        else
        { // normal flow
            rear++;
        }
        // push inside the queue
        arr[rear] = value;
        return true;
    }

    int dequeue()
    {
        if (front == -1) // to check queue is empty
        {
            // cout << "Queue is empty" << endl;
            return -1;
        }
        int ans = arr[front];
        arr[front] = -1;
        if (front == rear) // single element is present
        {
            front = rear = -1;
        }
        else if (front == size - 1)
        {
            front = 0; // to maintain cyclic nature
        }
        else
        {
            front++;
        }

        return ans;
    }
};

int main()
{

    CircularQueue c(5);
    c.enqueue(10);
    c.enqueue(20);
    c.enqueue(30);
    c.enqueue(40);
    // cout << "front ";
    cout << "Front: ";
    cout << c.enqueue(50) << endl;
    cout << "Dequeue: ";
    cout << c.dequeue() << endl;

    return 0;
}

// Doubly ended queue implement without STL

#include <iostream>

class Deque
{
public:
    int *arr;
    int front, rear, size;

    Deque(int n)
    {
        size = n;
        arr = new int[n];
        front = -1;
        rear = -1;
    }

    bool pushFront(int x)
    {
        if (isFull())
        {
            return false;
        }
        else if (isEmpty())
        {
            front = rear = 0;
        }
        else if (front == 0 && rear != size - 1)
        {
            front = size - 1;
        }
        else
        {
            front--;
        }
        arr[front] = x;
        return true;
    }

    bool pushRear(int x)
    {
        if (isFull())
        {
            return false;
        }
        else if (isEmpty())
        {
            front = rear = 0;
        }
        else if (rear == size - 1 && front != 0)
        {
            rear = 0;
        }
        else
        {
            rear--;
        }
        arr[front] = x;
        return true;
    }

    int popFront()
    {
        if (isEmpty()) // to check queue is empty
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

    int popRear()
    {
        if (isEmpty()) // to check queue is empty
        {
            // cout << "Queue is empty" << endl;
            return -1;
        }
        int ans = arr[rear];
        arr[rear] = -1;
        if (front == rear) // single element is present
        {
            front = rear = -1;
        }
        else if (rear == 0)
        {
            rear = size - 1; // to maintain cyclic nature
        }
        else
        {
            rear--;
        }

        return ans;
    }

    int getFront()
    {
        if (isEmpty())
        {
            return -1;
        }

        return arr[front];
    }

    int getRear()
    {
        if (isEmpty())
        {
            return -1;
        }

        return arr[rear];
    }

    bool isEmpty()
    {
        if (front == -1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    bool isFull()
    {
        if ((front == 0 && rear == size - 1) || (front != 0 && rear == (front - 1) % (size - 1)))
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};

using namespace std;
int main()
{

    Deque d(10);

    d.pushFront(10);
    d.pushFront(20);
    d.pushFront(30);
    d.pushFront(40);
    d.pushFront(50);

    d.pushRear(60);
    d.pushRear(70);
    d.pushRear(80);
    d.pushRear(90);
    d.pushRear(100);

    d.popFront();
    d.popFront();
    d.popFront();
    d.popFront();

    d.popRear();
    d.popRear();
    d.popRear();
    d.popRear();
    d.popRear();
    d.popRear();

    d.getFront();
    cout << "Front " << d.getFront() << endl;

    d.getRear();
    cout << "Rear " << d.getRear() << endl;

    return 0;
}
#include <iostream>
using namespace std;

class Queue
{
public:
    int *arr;
    int size;
    int front;
    int rear;

    Queue(int size)
    {
        arr = new int[size];
        this->size = size;
        front = -1;
        rear = -1;
    }

    // push logic
    void push(int val)
    {
        // check overflow
        if (rear == size - 1)
        {
            cout << "queue is full!" << endl;
            return;
        }
        else if (front == -1 && rear == -1)
        {
            rear++;
            front++;
            arr[rear] = val;
        }
        else
        {
            rear++;
            arr[rear] = val;
        }
    }

    void pop()
    {
        // check underflow
        if (front == -1 && rear == -1)
        {
            cout << "Queue Underflow" << endl;
        }
        else if (front == rear)
        {
            // empty case -> signle element
            arr[front] = -1;
            front = -1;
            rear = -1;
        }
        else
        {
            // Normal case
            arr[front] = -1;
            front++;
        }
    }

    bool isEmpty()
    {
        if (front == -1 && rear == -1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    int getSize()
    {
        if (front == -1 && rear == -1)
        {
            return 0;
        }
        else
            return rear - front + 1;
    }

    int getFront()
    {
        // empty case
        if (front == -1)
        {
            return -1;
        }
        else
        {
            return arr[front];
        }
    }

    int getRear()
    {
        if (rear == -1)
        {
            return -1;
        }
        else
            return arr[rear];
    }

    void print()
    {
        for (int i = 0; i < size; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main()
{
    Queue q(5);
    // q.print();
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    // q.print();
    q.pop();
    // q.print();
    q.push(50);
    q.print();
    q.push(1);
    // cout<<q.getSize();
}
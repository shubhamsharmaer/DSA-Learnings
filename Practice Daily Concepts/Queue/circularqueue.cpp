#include <iostream>
using namespace std;

class Cqueue
{
public:
    int *arr;
    int size;
    int front;
    int rear;

    Cqueue(int size)
    {
        arr = new int[size];
        this->size = size;
        front = -1;
        rear = -1;
    }

    void push(int val)
    {
        // Overflow condition
        if (front == 0 && rear == size - 1)
        {
            cout << "Overflow Condition!" << endl;
        }
        // empty case
        else if (front == -1 && rear == -1)
        {
            front++;
            rear++;
            arr[rear] = val;
        }
        // circular nature
        else if (front != 0 && rear == size - 1)
        {
            rear = 0;
            arr[rear] = val;
        }
        // normal case
        else
        {
            rear++;
            arr[rear] = val;
        }
    }

    // pop logic
    void pop()
    {
        // Underflow condition
        if ((front == -1 && rear == -1) || front > size)
        {
            cout << "Underflow Condition!" << endl;
            return;
        }
        // single element case
        else if (rear == front)
        {
            arr[front] = -1;
            front = -1;
            rear = -1;
        }
        // circular case
        else if (front == size - 1)
        {
            arr[front] = -1;
            front = 0;
        }
        // normal case
        else
        {
            arr[front] = -1;
            front++;
        }
    }

    void print()
    {
        cout << "front: " << front << " rear: " << rear << endl;
        for (int i = 0; i < size; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main()
{
    Cqueue cq(5);
    cq.push(10);
    cq.print();

    cq.push(20);
    cq.print();

    cq.push(30);
    cq.print();

    cq.push(40);
    cq.print();

    cq.push(50);
    cq.print();
    cq.push(60);
    // cq.print();

    // cout<<"--------------"<<endl;
    // cq.pop();
    // cq.print();

    // cq.pop();
    // cq.print();

    // cq.pop();
    // cq.print();

    // cq.pop();/
    // cq.print();

    // cq.pop();
    // cq.print();

    // cq.pop();
    // cq.print();

    // cq.pop();
}
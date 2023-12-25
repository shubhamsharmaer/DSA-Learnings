#include <iostream>
#include <queue>
using namespace std;

void print(queue<int> q)
{
    while (!q.empty())
    {
        int temp = q.front();
        q.pop();
        cout << temp << " ";
    }
    cout << endl;
}

void interleavequeue(queue<int> &first)
{
    // queue bnao
    queue<int> second;
    int k = first.size();
    for (int i = 0; i < k / 2; i++)
    {
        int temp = first.front();
        // pop 1/2 element
        first.pop();
        // push them into 2nd queue
        second.push(temp);
    }
    // merge them
    for (int i = 0; i < k / 2; i++)
    {
        int temp = second.front();
        second.pop();
        first.push(temp);

        temp = first.front();
        first.pop();
        first.push(temp);
    }
}

int main()
{
    queue<int> q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    q.push(60);
    cout << "Queue: ";
    print(q);
    interleavequeue(q);
    cout << "Interleave Queue: ";
    print(q);
}
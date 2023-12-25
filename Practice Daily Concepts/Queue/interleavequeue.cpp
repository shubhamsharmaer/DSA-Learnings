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

    // pop 1/2 element

    // push them into 2nd queue
}
// merge them

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
}
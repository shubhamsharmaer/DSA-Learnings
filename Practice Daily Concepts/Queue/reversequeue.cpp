// NOTES: Reverse Queue Using Stack
// NOTES: Approch:
// NOTES: Make a Reverse(), Stack, Queue
// NOTES: Pop Queue untill empty, Push Popped Element -> Stack
// NOTES: Pop Stack untill empty, Push Popped Element -> Queue

#include <iostream>
#include <stack>
#include <queue>

using namespace std;

void printqueue(queue<int> q)
{
    while (!q.empty())
    {
        int elements = q.front();
        q.pop();
        cout << elements << " ";
    }
    cout << endl;
}

void reversequeue(queue<int> &q)
{
    stack<int> st;
    // NOTES: Printing Reversed Queue
    cout << "Queue: ";
    printqueue(q);

    // NOTES: Pop Queue untill empty
    while (!q.empty())
    {
        int frontelement = q.front();
        q.pop();
        st.push(frontelement);
    }
    // NOTES: Pop Stack untill empty
    while (!st.empty())
    {
        int topelement = st.top();
        st.pop();
        q.push(topelement);
    }
    // NOTES: Printing Reversed Queue
    cout << "Reversed Queue: ";
    printqueue(q);
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

    // call the fun()
    reversequeue(q);
}
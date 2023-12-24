// NOTES: Reverse Queue

// NOTES: Approch 1 -> Using Stack
// STEP 1: Make a Reverse(), Stack, Queue
// STEP 2: Pop Queue untill empty, Push Popped Element -> Stack
// STEP 3: Pop Stack untill empty, Push Popped Element -> Queue

// NOTES: Approch 2 -> Using Recursion
// STEP 1: Store q.front() -> temp var
// STEP 2: pop();
// STEP 3: Call recursive(q);
// STEP 4: push() temp -> queue

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

// NOTES: Approch 1

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

// NOTES: Approch 2
void reverse(queue<int> &q)
{
    // base case
    if (q.empty())
    {
        return;
    }
    // processing
    int temp = q.front();
    q.pop();
    // recursive call
    reverse(q);
    // push into queue
    q.push(temp);
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
    // reversequeue(q);
    cout << "Queue: ";
    printqueue(q);
    reverse(q);
    cout << "Reverse Queue: ";
    printqueue(q);
}
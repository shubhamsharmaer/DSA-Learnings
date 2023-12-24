// NOTES: Reverse K element from queue
// NOTES: I/P -> [10,20,30,40,50,60], Reverse 4 element
// NOTES: O/P -> [40,30,20,10,50,60]

#include <iostream>
#include <stack>
#include <queue>

using namespace std;

void printqueue(queue<int> q)
{
    while (!q.empty())
    {
        int temp = q.front();
        q.pop();
        cout << "[" << temp << "]";
    }
    cout << endl;
}

void reversequeue(queue<int> &q, int k)
{
    // STEP 1: Make stack
    stack<int> st;
    int n = q.size();

    // STEP 2: Pop K element from queue and push -> stack
    for (int i = 0; i < k; i++)
    {
        int temp = q.front();
        q.pop();
        st.push(temp);
    }
    // STEP 3: Push back popped elements into queue
    while (!st.empty())
    {
        int temp = st.top();
        st.pop();
        q.push(temp);
    }
    // STEP 4: Pop left (n-k) elements and push back in queue
    for (int i = 0; i < (n - k); i++)
    {
        int temp = q.front();
        q.pop();
        q.push(temp);
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

    printqueue(q);
    reversequeue(q, 4);
    printqueue(q);
}
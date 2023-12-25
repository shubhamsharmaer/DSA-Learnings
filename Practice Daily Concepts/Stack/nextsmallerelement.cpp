// NOTES: APPROCH -> STACKS
// NOTES: make vector function(), stack st
// NOTES: push -1 -> st and make a current var
// NOTES: traverse arr from Rightmost -> Leftmost
// NOTES: while(st.top() >= current) -> st.pop()
// NOTES: ans var = st.top() and st.push(current)
// NOTES: return ans

#include <iostream>
#include <stack>
#include <vector>
using namespace std;

vector<int> nextsmallerelement(int *arr, int size, vector<int> &next)
{
    stack<int> st;
    st.push(-1);

    for (int i = size - 1; i >= 0; i--)
    {
        int curr = arr[i];

        while (st.top() >= curr)
        {
            st.pop();
        }
        next[i] = st.top();
        st.push(curr);
    }
    return next;
}

vector<int> prevtsmallerelement(int *arr, int size, vector<int> &prev)
{
    stack<int> st;
    st.push(-1);

    for (int i = 0; i < size; i++)
    {
        int curr = arr[i];

        while (st.top() >= curr)
        {
            st.pop();
        }
        prev[i] = st.top();
        st.push(curr);
    }
    return prev;
}

int main()
{
    int arr[6] = {2, 1, 5, 6, 2, 3};
    int size = 6;

    vector<int> next(size);
    next = nextsmallerelement(arr, size, next);
    cout << "next smaller elements: ";
    for (auto i : next)
    {
        cout << i << " ";
    }
    cout << endl;
    vector<int> prev(size);
    prev = nextsmallerelement(arr, size, prev);
    cout << "previous smaller elements: ";
    for (auto i : prev)
    {
        cout << i << " ";
    }
}
#include <iostream>
#include <stack>

using namespace std;

void midindex(stack<int> &st, int &pos, int &ans)
{
    // base case
    if (pos == 1)
    {
        ans = st.top();
        return;
    }

    // ek case solve krna ha!
    pos--;
    int temp = st.top();
    st.pop();

    // recursive call
    midindex(st, pos, ans);
}

int findmid(stack<int> &st)
{
    // we need position var,size var
    int pos;
    int size = st.size();

    // condition for even and odd

    if (size & 1)
    {
        // odd stack
        pos = (size / 2) + 1;
    }
    else
    {
        // even stack
        pos = size / 2;
    }

    // ans var for returning the mid's index
    int ans = -1;
    midindex(st, pos, ans);
    return ans;
}

int main()
{
    // define stack
    stack<int> st;

    // call push fun
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    st.push(60);

    int mid = findmid(st);
    cout << "mid is: " << mid;
}
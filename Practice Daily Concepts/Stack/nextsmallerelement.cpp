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

vector<int> nextsmallerelement(int *arr, int size, vector<int> &ans)
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
        ans[i] = st.top();
        st.push(curr);
    }
    return ans;
}

int main()
{
    int arr[5] = {8, 4, 6, 2, 3};
    int size = 5;

    vector<int> ans(size);
    ans = nextsmallerelement(arr, size, ans);
    cout << "smaller elements are: ";
    for (auto i : ans)
    {
        cout << i << " ";
    }
}
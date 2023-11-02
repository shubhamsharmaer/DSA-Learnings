// NOTES: reverse a string by Recursive

// NOTES: Approch
//  -> take two pointers(start & end)
//  -> swap them
//  call recursive fun with start + 1, end - 1;

#include <iostream>
using namespace std;

void reversestring(string &s, int start, int end)
{
    // base case
    if (start >= end)
    {
        return;
    }

    // ek case solve krna ha bs!
    swap(s[start], s[end]);

    // recursive call
    reversestring(s, start + 1, end - 1);
}

int main()
{
    string s;
    cout << "enter a valid string: ";
    cin >> s;
    cout << endl;
    reversestring(s, 0, s.size() - 1);
    cout << "reversed string: " << s;
}
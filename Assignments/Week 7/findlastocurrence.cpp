// NOTES: Find last ocurrence of char in a string

// NOTES: Approch by Recursive

#include <iostream>
using namespace std;

void findlastocurrence(string &s, char &x, int i, int &ans)
{
    // base case
    if (i >= s.size())
    {
        return;
    }

    if (i >= s.size() && s[i] != x)
    {
        cout << "char doesn't exists";
    }

    // ek solve krna ha bs!
    if (s[i] == x)
    {
        ans = i;
    }

    // recursive call
    findlastocurrence(s, x, i + 1, ans);
}

int main()
{
    string s;
    cout << "enter a string: ";
    cin >> s;

    cout << endl;

    char x;
    cout << "enter a char to find it: ";
    cin >> x;

    int i = 0;
    int ans;

    findlastocurrence(s, x, i, ans);
    cout << ans;
}

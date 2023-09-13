// Debug the code. It is trying to print the given pattern.
/*
Pattern
N = 4
   *
  ***
 *****
*******
*/

// NOTES: Changes for i: 1 -> 0, count: 2*n+1 -> 2*n, while(k < gaps): < -> <=

#include <iostream>
using namespace std;
int main()
{
    int n = 4;
    cin >> n;
    int i = 0;
    while (i < n)
    {
        int j = i + 3, count = 2 * n, gaps = (n - i - 1), k = 1;
        while (k <= gaps)
        {
            cout << " ";
            k = k + 1;
        }
        int m = 1, ch = count - 2 * gaps;
        while (m < ch)
        {
            cout << "*";
            m = m + 1;
        }
        k = 1;
        while (k <= gaps)
        {
            cout << " ";
            k = k + 1;
        }
        cout << "\n";
        i = i + 1;
    }
}
// Debug the code. Convert Binary to Decimal.
#include <iostream>
#include <cmath>
using namespace std;

int binarytodeci(int n)
{
    int decimalno = 0;
    int i = 0;
    while (n != 0)
    {
        int bit = n % 10;
        decimalno = bit * pow(2, i++) + decimalno;

        n /= 10;
    }
    return decimalno;
}

int main()
{
    int n;
    cout << "enter: ";
    cin >> n;
    cout << endl;
    int ans = binarytodeci(n);
    cout << ans;

    // int n, sum = 0, factor = 1;
    // cin >> n;
    // while (n != 0)
    // {
    //     int digit = n / 10;
    //     sum = sum + digit * factor;
    //     factor = 2 * factor;
    //     n = n / 10;
    // }
    // cout << sum;
    return 0;
}
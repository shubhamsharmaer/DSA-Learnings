#include <iostream>
#include <cmath>
using namespace std;
int binarytodecimalM1(int n)
{
    int decimalno = 0;
    int i = 0;

    while (n)
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
    cin >> n;

    int decimalconverted = binarytodecimalM1(n);
    cout << decimalconverted;
}
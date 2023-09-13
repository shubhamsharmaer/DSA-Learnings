#include <iostream>
#include <cmath>
using namespace std;

int decimaltobinaryM1(int n)
{
    // division method
    int i = 0;
    int binaryno = 0;
    while (n > 0)
    {
        int bit = n % 2;
        binaryno = bit * pow(10, i++) + binaryno;
        n = n / 2;
    }
    return binaryno;
}

int decimaltobinaryM2(int n)
{
    // bitwise AND method
    int binaryno = 0;
    int i = 0;
    while (n > 0)
    {
        int bit = (n & 1);
        binaryno = bit * pow(10, i++) + binaryno;
        n = n >> 1;
    }
    return binaryno;
}

int main()
{
    int n;
    cin >> n;
    // int binaryconverted = decimaltobinaryM1(n);
    // int binaryconverted = decimaltobinaryM2(n);
    cout << binaryconverted;
}
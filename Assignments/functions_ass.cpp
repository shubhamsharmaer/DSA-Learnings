#include <iostream>
#include <cmath>
using namespace std;

// Display area of circle
/*int areaofcircle()
{
    int pie = 3.14;
    int r = 0;
    cout << "Enter radius of circle: ";
    cin >> r;
    int area = pie * r * r;
    cout << "Area of circle is: " << area;
}*/

// Factorial of any num
/*int factorialofnum()
{
    int num;
    long factorial = 1.0;
    cout << "enter a num: ";
    cin >> num;

    if (num < 0)
        cout << "error, factorial of -ve num can't be calculated";
    else
    {
        for (int i = 1; i <= num; i++)
        {
            factorial *= i;
        }
        cout << "factorial of " << num << " is " << factorial;
    }
}*/

// Prime num 1 to N
/*int primenum()
{
    int i, num, n;
    cout << "enter range: ";
    cin >> n;

    for (i = 2; i <= n; i++)
    {
        int k = 0;

        for (num = 1; num <= i; num++)
        {
            if (i % num == 0)
                k++;
        }

        if (k == 2)
        {
            cout << i << " ";
        }
    }
}*/

int main()
{
    // areaofcircle();
    // factorialofnum();
    // primenum();
    return 0;
}
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

// Digits of an Integer
/*int printdigits()
{
    int myint;
    cout << "Enter any integer: ";
    cin >> myint;
    int count = 0;
    while (myint != 0)
    {
        myint = myint / 10;
    }
    cout << "No. of digits: ";
}*/

// Return a Num using Digits
/*int return_num()
{
    int size;
    cout << "enter num of digits to be inserted: ";
    cin >> size;
    int arr[size];
    cout << endl;
    cout << "enter some digits: ";

    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
        cout << arr[i];
    }
}*/

// Kilometer to Miles conversion
/*float kilotomiles()
{
    float kilometer;
    const float miles = 0.621371;
    cout << "enter kilometers: ";
    cin >> kilometer;
    if (kilometer == 0)
    {
        cout << "zero can't be converted";
    }
    else if (kilometer < 0)
    {
        cout << "-ve values can't be accepted!";
    }
    else
    {
        float result = kilometer * miles;
        cout << result << " miles in " << kilometer << " km";
    }
}*/

int main()
{
    // areaofcircle();
    // factorialofnum();
    // primenum();
    // printdigits();
    // return_num();
    // kilotomiles();
    return 0;
}
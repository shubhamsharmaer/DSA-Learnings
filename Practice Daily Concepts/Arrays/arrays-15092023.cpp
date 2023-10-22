#include <iostream>
#include <limits.h>
using namespace std;

bool found = 1;
bool notfound = 0;

// reverse an array
void reversearr(int arr[], int n)
{
    int start = 0;
    int end = n - 1;

    while (start <= end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
    cout << "reversed array: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

// find min and max
void findminmax(int arr[], int size)
{
    int minAns = INT_MAX;
    int maxAns = INT_MIN;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] < minAns)
        {
            minAns = arr[i];
        }
        else if (arr[i] > maxAns)
        {
            maxAns = arr[i];
        }
    }
    cout << "Max: " << maxAns << endl;
    cout << "Min: " << minAns;
}

// linear traverse array
void count01(int arr[], int n)
{
    int zerocount = 0;
    int onecount = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == found)
        {
            onecount++;
        }
        else
        {
            zerocount++;
        }
    }

    cout << "No. of 1's are: " << onecount;
    cout << endl;
    cout << "No. of 0's are: " << zerocount;
}

int main()
{
    // int n = 16;
    // int arr[] = {0, 1, 0, 0, 1, 1, 1, 0, 0, 0, 1, 1, 1, 0, 0, 0};
    count01(arr, n);

    // int size = 7;
    // int arr[] = {23, 48, 22, 45, 19, 49, 24};
    // for (int i = 0; i < size; i++)
    // {
    //     cout << arr[i] << " ";
    // }
    // cout << endl;
    findminmax(arr, size);

    // int n = 6;
    // int arr[] = {34, 23, 11, 35, 67, 22};
    // for (int i = 0; i < n; i++)
    // {
    //     cout << arr[i] << " ";
    // }
    // cout << endl;
    reversearr(arr, n);

    return 0;
}
#include <iostream>
#include <limits.h>
using namespace std;

bool found = 1;
bool notfound = 0;

// min and max int values

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
    // count01(arr, n);

    int size = 7;
    int arr[] = {23, 48, 22, 45, 19, 49, 24};
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    findminmax(arr, size);
    return 0;
}
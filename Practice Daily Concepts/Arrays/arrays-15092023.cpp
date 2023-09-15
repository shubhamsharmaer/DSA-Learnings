#include <iostream>
using namespace std;

bool found = 1;
bool notfound = 0;

void findelement(int arr[], int n)
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
    // linear traverse array
    int n = 16;
    int arr[] = {0, 1, 0, 0, 1, 1, 1, 0, 0, 0, 1, 1, 1, 0, 0, 0};
    findelement(arr, n);
    return 0;
}
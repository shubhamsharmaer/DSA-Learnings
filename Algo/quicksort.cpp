#include <iostream>
using namespace std;

/*NOTES: Approch quicksort()
1. Take 3 pointers.
 -> at start, -> at start-1, -> end.
2. base case -> if(start >= end)
3. loop for traverse, (j < pivot);
4. inside loop, check if arr[j] < arr[pivot], then i++; swap i & j;
5. increment j, swap arr[i] & arr[pivot];
6. break the arr in two halfs
 -> quicksort(start, i-1);
 -> quicksort(i+1, end);
 */

// quick sort by recursion
void quicksort(int arr[], int start, int end)
{

    // base case
    if (start >= end)
    {
        return;
    }

    int i = start - 1;
    int j = start;
    int pivot = end;

    // loop for comparing and swaping elements
    while (j < pivot)
    {
        if (arr[j] < arr[pivot])
        {
            i++;
            swap(arr[i], arr[j]);
        }
        j++;
    }
    i++;
    swap(arr[i], arr[pivot]);

    // break arr
    quicksort(arr, start, i - 1);
    quicksort(arr, i + 1, end);
}

int main()
{
    int n = 8;
    int arr[n] = {2, 4, 1, 5, 7, 3, 9, 10};
    int start = 0;
    int end = n - 1;
    cout << "Before sorting:";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    quicksort(arr, start, end);
    cout << "After sorting:";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}
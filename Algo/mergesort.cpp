#include <iostream>
#include <vector>
using namespace std;

// merge logic funtion
void mergelogic(int nums[], int s, int mid, int e)
{

    mid = (s + e) / 2;
    // define length of
    // left arr
    int leftlen = mid - s + 1;
    // right arr
    int rightlen = e - mid;

    // create left arr
    vector<int> leftarr(leftlen);
    // create right arr
    vector<int> rightarr(rightlen);

    // copy left arr using for loop & k variable
    int k = s;
    for (int i = 0; i < leftlen; i++)
    {
        leftarr[i] = nums[k];
        k++;
    }
    // copy right arr using for loop & k variable
    k = mid + 1;
    for (int i = 0; i < rightlen; i++)
    {
        rightarr[i] = nums[k];
        k++;
    }

    // define indexes for
    // left arr
    int leftindx = 0;
    // right arr
    int rightindx = 0;
    // mid position
    int midindx = s;

    // while loop for comparing both arr's element and merge into original arr
    while (leftindx < leftlen && rightindx < rightlen)
    {
        if (leftarr[leftindx] < rightarr[rightindx])
        {
            nums[midindx] = leftarr[leftindx];
            leftindx++;
        }
        else
        {
            nums[midindx] = rightarr[rightindx];
            rightindx++;
        }
        midindx++;
    }
    // while loop for adding left element, if any in left or right array
    while (leftindx < leftlen)
    {
        nums[midindx] = leftarr[leftindx];
        midindx++;
        leftindx++;
    }
    while (rightindx < rightlen)
    {
        nums[midindx] = rightarr[rightindx];
        midindx++;
        rightindx++;
    }
}

// merge by recursion
void merge(int nums[], int s, int e)
{
    // base case
    if (s >= e)
    {
        return;
    }
    int mid = (s + e) / 2;

    // break arry
    merge(nums, s, mid);
    merge(nums, mid + 1, e);

    // recursive call
    mergelogic(nums, s, mid, e);
}

int main()
{
    int size = 10;
    int nums[size] = {23, 45, 23, 13, 5, 6, 23, 78, 12, 13};
    int s = 0;
    int e = size - 1;
    cout << "Before sorting: ";
    for (int i = 0; i < size; i++)
    {
        cout << nums[i] << " ";
    }
    cout << endl;
    merge(nums, s, e);
    cout << "After sorting: ";
    for (int i = 0; i < size; i++)
    {
        cout << nums[i] << " ";
    }
}
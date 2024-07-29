// NOTES: Find Peak Element in Mountain Array
// NOTES: You are given an integer mountain array arr of length n where the values increase to a peak element and then decrease. Return the index of the peak element. Your task is to solve it in O(log(n)) time complexity.

 

// Example 1:

// Input: arr = [0,1,0]

// Output: 1


class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int n = arr.size();
        int start = 0;
        int end = n - 1;
        int mid = start + (end - start) / 2;

        while (start < end){
            if(arr[mid] < arr[mid + 1]){
                // I am in A array
                start = mid + 1;
            }
            else{
                // ya to ma B line pr hu ya Peak pr
                end = mid;
            }
            mid = start + (end - start) / 2;
        }
        return start;
    }
};
// NOTES: A peak element is an element that is strictly greater than its neighbors. Given a 0-indexed integer array nums, find a peak element, and return its index. If the array contains multiple peaks, return the index to any of the peaks.

// NOTES: You may imagine that nums[-1] = nums[n] = -∞. In other words, an element is always considered to be strictly greater than a neighbor that is outside the array.

// You must write an algorithm that runs in O(log n) time.

// NOTES: Using Binary Search

class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int n = nums.size();
        int s = 0;
        int e = n - 1;

        while(s < e){
            int mid = s + (e-s)/2;
            if(nums[mid] > nums[mid+1]){
                // go to left
                e = mid;
            }
            else{
                s = mid + 1;
            }
        }
        return e;
    }
};
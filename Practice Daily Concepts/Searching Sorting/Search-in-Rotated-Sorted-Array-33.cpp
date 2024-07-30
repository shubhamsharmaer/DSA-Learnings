// NOTES: Search in Rotated Sorted Array. There is an integer array nums sorted in ascending order (with distinct values).

// Prior to being passed to your function, nums is possibly rotated at an unknown pivot index k (1 <= k < nums.length) such that the resulting array is [nums[k], nums[k+1], ..., nums[n-1], nums[0], nums[1], ..., nums[k-1]] (0-indexed). For example, [0,1,2,4,5,6,7] might be rotated at pivot index 3 and become [4,5,6,7,0,1,2].

// Given the array nums after the possible rotation and an integer target, return the index of target if it is in nums, or -1 if it is not in nums.

// You must write an algorithm with O(log n) runtime complexity.

class Solution {
public:

    int findpivot(vector<int> &nums){
        // init values
        int n = nums.size();
        int s = 0, e = n - 1;

        // loop 
        while(s <= e){
            int mid = s + (e-s)/2;
            // codn for pivot
            // corner case -> one element
            if(s == e){
                return s;
            }
            // corner case -> mid at [0] 
            // if(s == mid){
            //     // go to right
            //     if(nums[mid] > nums[mid+1]){
            //         return s;
            //     }
            //     else{
            //         return s+1;
            //     }
            // }
           
           
            // cond 1 -> pivot
            // YHA MA GALATI KRUGA -> Applying explicit range condition
            if(mid-1 >=0 && nums[mid] < nums[mid-1]){
                return mid - 1;
            }
            // cond 2 -> pivot 
            else if(mid+1 < n && nums[mid] > nums[mid+1]){
                return mid;
            }
            // cond 3 -> At B 
            else if(nums[s] > nums[mid]){
                // go to left
                e = mid - 1;
            }
            // cond 4 -> At A 
            else{
                // go to right
                s = mid + 1;
            }
        }
        return -1;
    }

    int binarysearch(vector<int> &nums, int s, int e, int target){
        while(s <= e){
            int mid = s + (e-s)/2;
            if(nums[mid] == target){
                return mid;
            }
            else if(target > nums[mid]){
                // go to right
                s = mid + 1;
            }
            else{
                // go to left
                e = mid - 1;
            }
        }
        return -1;
    }


    int search(vector<int>& nums, int target) {
     int pivot = findpivot(nums);
     int n = nums.size();
     int ans = -1;
     // compare pivot and targate
     // search in A
     if(target >= nums[0] && target <= nums[pivot]){ 
        ans = binarysearch(nums,0,pivot,target);
     }
     // search in B
     else{
        // apply binary search in right half
        ans = binarysearch(nums,pivot+1,n-1,target);
     }
     return ans;
    
    }
};
// NOTES: Given an array of integers nums and an integer k, return the number of unique k-diff pairs in the array. A k-diff pair is an integer pair (nums[i], nums[j]), where the following are true:

// 0 <= i, j < nums.length
// i != j
// |nums[i] - nums[j]| == k
// Notice that |val| denotes the absolute value of val.

class Solution {
public:
 // App -> Sort karo
    //     -> Set & pair ka use krke ans pair define karo
    //     -> loop chlao
    //          - using binary search -> (nums, i+1, nums[i] + k) != -1 
    //          - Agr nums ma nums[i] + k ha to use ans ma nums[i] ke
    //          store krdo 
    //     -> return ans.size() for distinct pairs

    int bs(vector<int>&nums, int s, int j){
        int e = nums.size() - 1;
        while(s <= e){
            int mid = s + (e-s)/2;
            if(nums[mid] == j){
                return mid;
            }
            else if(nums[mid] < j){
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
    int findPairs(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        // defining pairs
        set<pair<int, int>>ans;
        int n = nums.size();

        // loop
        for(int i = 0; i < n; i++){
            if(bs(nums,i + 1,nums[i]+k) != -1){
                ans.insert({nums[i], nums[i]+k});
            }
        }
        return ans.size();

    }
};
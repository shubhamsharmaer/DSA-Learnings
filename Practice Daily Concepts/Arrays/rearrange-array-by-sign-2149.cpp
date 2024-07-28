// NOTES: You are given a 0-indexed integer array nums of even length consisting of an equal number of positive and negative integers.You should return the array of nums such that the the array follows the given 

// conditions:

// Every consecutive pair of integers have opposite signs.
// For all integers with the same sign, the order in which they were present in nums is preserved.
// The rearranged array begins with a positive integer.
// Return the modified array after rearranging the elements to satisfy the aforementioned conditions.

 

// Example 1:

// Input: nums = [3,1,-2,-5,2,-4]
// Output: [3,-2,1,-5,2,-4]



class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {

        int n = nums.size();
        vector<int> pos,neg;
        vector<int> ans(n);
        int posindx = 0, negindx = 0;

        // loop to seprate +ve and -ve array
        for(int x : nums){
            if(x > 0){
                pos.push_back(x);
            }
            else{
                neg.push_back(x);
            }
        }

        // bool placeposfirst = true;

        // loop for placing pos & neg arr
        for(int i = 0; i < n; i++){
            if(i % 2 == 0){
                ans[i] = pos[posindx++];
                // placeposfirst = false;
            }
            if(i % 2 == 1){
                ans[i] = neg[negindx++];
                // placeposfirst = true;
            }
        }

        nums = ans;

        return nums;
    }
};
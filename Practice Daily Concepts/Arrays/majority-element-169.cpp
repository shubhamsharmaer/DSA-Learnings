// NOTES: MAJORITY ELEMENT - 169

// STEPS: Ye baat pakki ha ki majority element mid hi hoga
// STEPS: kyuki n/2 se jada baar ki condn ha 
// STEPS: iss cond ma majority element mid pr jarur ayega
// STEPS: to isliye humne mid ko hi return kr diya


class Solution {
public:
    int majorityElement(vector<int>& nums) {
     sort(nums.begin(), nums.end());
    
     return nums[(0 + nums.size()-1) / 2]; 
    }
};
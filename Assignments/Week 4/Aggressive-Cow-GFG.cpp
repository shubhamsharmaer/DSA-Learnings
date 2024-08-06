// NOTES: https://practice.geeksforgeeks.org/problems/aggressive-cows/1

// STEPS: Define the Function: solve(int n, int k, vector<int> &stalls)

// STEPS: Sort the Stalls:
// STEPS:  -> sort(stalls.begin(), stalls.end());
// STEPS: Binary Search Setup:
// STEPS:  -> int s = 0;
// STEPS:  -> int e = stalls[stalls.size() - 1] - stalls[0]; (maximum possible distance between        the first and last stall)
// STEPS: Binary Search Execution:
// STEPS:  -> While s <= e:
// STEPS:  -> Calculate mid: int mid = s + (e - s) / 2;
// STEPS:  -> Check if mid is a feasible solution using isPossiblesol(stalls, k, mid).
// STEPS:  -> If feasible, update ans = mid and search in the right half (s = mid + 1).
// STEPS:  -> If not feasible, search in the left half (e = mid - 1). 

// STEPS: Helper Function: isPossiblesol(vector<int> &stalls, int k, int mid)

// STEPS: Initialize:
// STEPS:  -> int c = 1; (start with the first cow)
// STEPS:  -> int cowpos = stalls[0]; (place the first cow in the first stall)
// STEPS: Iterate through stalls:
// STEPS:  -> For each stall stalls[i]: 
// STEPS:      -> If stalls[i] - cowpos >= mid, place a cow in this stall and update cowpos.
// STEPS:      -> Increment the cow count c.
// STEPS:      -> If c == k, return true (all cows placed with at least mid distance apart).
// STEPS: Return false if all cows cannot be placed with at least mid distance apart.



class Solution {
public:

    bool isPossiblesol(vector<int> &stalls, int k, int mid){
        // int stallsum = 0;
        
        int c = 1;
        int cowpos = stalls[0];
        
        for(int i = 1; i < stalls.size(); i++){
            
            if(stalls[i] - cowpos >= mid){
                c++;
                cowpos = stalls[i];
            }
            if(c == k) return true;
        }
        return false;
    }

    int solve(int n, int k, vector<int> &stalls) {
        sort(stalls.begin(), stalls.end());
        // Write your code here
        int s = 0;
        // int e = accumulate(stalls.begin(), stalls.end() + n, 0);
        int e = stalls[stalls.size() - 1] - stalls[0];
        int ans = -1;
        while(s <= e){
            int mid = s + (e-s)/2;
            
            if(isPossiblesol(stalls, k, mid)){
                ans = mid;
         
                s = mid + 1;
            }
            else{
                e = mid - 1;
            }
        }
        return ans;
    }
};
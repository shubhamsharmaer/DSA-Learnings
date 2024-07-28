// NOTES:Given a m x n binary matrix mat, find the 0-indexed position of the row that contains the maximum count of ones, and the number of ones in that row.

// In case there are multiple rows that have the maximum count of ones, the row with the smallest row number should be selected.

// Return an array containing the index of the row, and the number of ones in it.

 

// Example 1:

// Input: mat = [[0,1],[1,0]]
// Output: [0,1]
// Explanation: Both rows have the same number of 1's. So we return the index of the smaller row, 0, and the maximum count of ones (1). So, the answer is [0,1].


class Solution {
public:
    vector<int> rowAndMaximumOnes(vector<vector<int>>& mat) {
        vector<int> ans;
        int n = mat.size();
        int countone = INT_MIN;
        int rownum = -1;

        // NOTES: two loops for accessign 2D array rowise
        for(int i = 0; i < n; i++){
            int count = 0;
            for(int j = 0; j<mat[i].size(); j++){
                if(mat[i][j] == 1){
                    count++;
                }
            }
            // NOTES: after loop compare count with countone
            if(count > countone){
            countone = count;
            rownum = i;
            }
        }
        // NOTES: push in this way only as first rownum and then countone
        ans.push_back(rownum);
        ans.push_back(countone);

        return ans;
    }
};
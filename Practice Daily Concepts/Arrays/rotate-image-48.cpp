// NOTES:You are given an n x n 2D matrix representing an image, rotate the image by 90 degrees (clockwise). You have to rotate the image in-place, which means you have to modify the input 2D matrix directly. DO NOT allocate another 2D matrix and do the rotation.



class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        // NOTES: step 1 -> transpose
        int n = matrix.size();
        for(int i=0; i < n; i++){
            for(int j = i; j < matrix[i].size(); j++){
                swap(matrix[i][j], matrix[j][i]);
            }
        }

        // NOTES: step 2 -> reverse
        for(int i = 0; i < n; i++){
            reverse(matrix[i].begin(), matrix[i].end());
        }
    }
};
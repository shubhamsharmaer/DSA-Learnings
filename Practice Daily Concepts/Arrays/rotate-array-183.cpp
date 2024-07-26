#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    void rotate(vector<int> &nums, int k)
    {
        int n = nums.size();
        vector<int> ans(n);

        // loop for travers
        for (int i = 0; i < n; i++)
        {
            // jeise 10 phele 0th index pr ab konse index pr hoga?
            // yha pr modulus ka use kiya ha
            // [10,20,30,40,50,60] -> [50,60,10,20,30,40]
            // I/P ->  O/P | Formula
            // 0        2    (i + k)
            // 1        3    (i + k)
            // 2        4    (i + k)
            // 3        5    (i + k)
            // 4        1  | but for 4th and 5th index i + k is not right formula so,
            // 5        0  | we will use modulus % -> (i + k) % n(size of arr)
            int newindex = (i + k) % n;
            ans[newindex] = nums[i];
        }
        nums = ans;
        swap(nums, ans);
    }
};

int main()
{
    vector<int> nums;
    nums = {10, 20, 30, 40, 50, 60};
    int k = 2;
    Solution obj;
    obj.rotate(nums, k);
    for (int i = 0; i < nums.size(); i++)
    {
        cout << nums[i] << " ";
    }
}
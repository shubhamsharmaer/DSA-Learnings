// NOTES: K Closest Elements - 658 
// NOTES: I/P -> [1,2,3,4,5], X = 3, K = 3
// NOTES: O/P -> [1,2,3] 
// NOTES: https://leetcode.com/problems/find-k-closest-elements/



class Solution {
public:
    int lowerbound(vector<int>& arr, int x){
        int s = 0;
        int e = arr.size() - 1;
        int ans = e;
        while(s <= e){
            int mid = s + (e-s)/2;

            if(arr[mid] >= x){
                ans = mid;
                e = mid-1;
            }
            else if(x > arr[mid]){
                // go to right
                s = mid + 1;
            }
            else{
                // go to right
                e = mid - 1;
            }
        }
        return ans;
    }

    vector<int> bs(vector<int>& arr, int k, int x){
        int high = lowerbound(arr, x);
        int low = high - 1;
        vector<int> ans;
        while(k--){
            if(low < 0){
                high++;
            }
            else if(high >= arr.size()){
                low--;
            }
            else if(x - arr[low] > arr[high] - x){
                high++;
            }
            else{
                low--;
            }
        }
        // for(int i = low; i <= high; i++){
        //     ans.push_back(arr[i]);
        // }
        // sort(ans.begin(), ans.end());
        return vector<int>(arr.begin() + low + 1, arr.begin() + high);
    }

    vector<int> twopointerapp(vector<int>& arr, int k, int x){
        int low = 0;
        int high = arr.size() - 1;
        vector<int> ans;
        while(high - low >= k){
            if(x - arr[low] > arr[high] - x){
                low++;
            }
            else{
                high--;
            }
        }
        for(int i = low; i <= high; i++){
            ans.push_back(arr[i]);
        }
        // sort(ans.begin(), ans.end());
        return ans;
    }
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        // return twopointerapp(arr,k,x);
        return bs(arr,k,x);
    }
};
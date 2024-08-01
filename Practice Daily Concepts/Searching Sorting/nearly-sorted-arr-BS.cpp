// NOTES: NEARLY SORTED ARRAY USING BINARY SEARCH

// Online C++ compiler to run C++ program online
#include <iostream>
#include <vector>
using namespace std;

int findtar(vector<int> nums, int tar){
    int n = nums.size();
    int s = 0;
    int e = n - 1;
    
    while(s <= e){
        int mid = s + (e - s)/2;
        // cond
        if(nums[mid - 1] == tar){
            return mid - 1;
        }
        else if(nums[mid] == tar){
            return mid;
        }
        else if(nums[mid + 1] == tar){
            return mid + 1;
        }
        else if(tar > nums[mid]){
            // go to right
            s = mid + 2;
        }
        else{
            // go to left
            e = mid - 2;
        }
    }
    return -1;
}

int main() {
    // Write C++ code here
    // std::cout << "Try programiz.pro";
    vector<int> nums;
    
    nums.push_back(20);
    nums.push_back(10);
    nums.push_back(30);
    nums.push_back(50);
    nums.push_back(40);
    nums.push_back(70);
    nums.push_back(60);
    int tar = 10;
    int ans = findtar(nums,tar);
        
    int n = nums.size();
    cout<<"found: "<<ans;
    // for(int i = 0; i < n; i++){
        // cout<<nums[i]<<" ";
    // }    

    return 0;
}
// NOTES: Applying Binary Search to find first occurence


#include <iostream>
using namespace std;


int findtar(int arr[], int n, int tar){
    int s = 0, e = n - 1;
    // NOTES: normal mid calculation -> can be Overflow
    // int mid = (s + e) / 2;
    // NOTES: Best Practice -> cannot be Overflow
    int mid = s + (e - s) / 2;
    int ans = -1;
    // find mid
    while( s <= e){
        for(int i = 0; i < n - 1; i++){
            if(tar > arr[mid]){
            s = mid + 1;
            }
            if(tar < arr[mid]){
            e = mid - 1;
            }
            if(tar == arr[mid]){
            ans = mid;
            e = mid - 1;
            }
        }    
        mid = (s+e)/2;
    }
    return ans;
    
}
int main() {
    int arr[] = {10,20,30,30,30,60,70,80};
    int tar = 30;
    int n = 8;
    int ans =  findtar(arr, n, tar);
    cout<<"first occurence at: "<<ans<<endl;
    return 0;
}
// NOTES: Find total occurance using Binary Search
// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int findfirsttar(int arr[], int n, int tar){
    int s = 0, e = n - 1;
    int mid = (s + e) / 2;
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

int findlasttar(int arr[], int n, int tar){
    int s = 0, e = n - 1;
    int mid = (s + e) / 2;
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
            s = mid + 1;
            }
        }    
        mid = (s+e)/2;
    }
    return ans;
    
}

int findtotal(int arr[], int n, int tar){
    int first = findfirsttar(arr, n, tar);
    int last = findlasttar(arr, n, tar);
    int total = last - first + 1;
    
    return total;
}
int main() {
    // Write C++ code here
    // std::cout << "Try programiz.pro";


    int arr[] = {10,20,30,30,30,30,60,70,80};
    int tar = 30;
    int n = 8;
    int ans =  findtotal(arr, n, tar);
    
    cout<<"total occurence: "<<ans<<endl;
    return 0;
}
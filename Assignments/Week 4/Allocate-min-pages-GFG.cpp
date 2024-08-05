// NOTES: Allocate minimum number of pages - GFG
class Solution {
  public:
    // define search space 0 - total pages
    // apply binary search for finding min possible allocation no. of pages
    // 
    // Function to find minimum number of pages
    bool isPossiblesolution(int arr[], int n, int m, int mid){
        // int for current sum
        int pagesum = 0;
        int count = 1;
        
        for(int i = 0; i< n; i++){
            // condn
            // agr no. of pages sol(mid) se badde ha to false return krdo
            // meaning vo solution nhi ha
            if(arr[i] > mid){
                return false;
            }
            if(pagesum + arr[i] > mid){
                // student ko allocate krdo
                count++;
                // pagesum ma current ith element ko save krdo 
                pagesum = arr[i];
                
                // check if allocation mid se jada to nhi hogi
                if(count > m){
                    return false;
                }
            }
            else{
                pagesum += arr[i];
            }
        }
        return true;
    }
    long long findPages(int n, int arr[], int m) {
        if(m > n) return -1;
        // code here
        int s = 0;
        int e = accumulate(arr, arr + n, 0);
        int ans = -1;
        
        
        while(s <= e){
            int mid = s + (e - s)/2;
            
            if(isPossiblesolution(arr, n, m, mid)){
                ans = mid;
                e = mid - 1;
            }
            else{
                // go to right
                s = mid + 1;
            }
        }
        return ans;
    }
};
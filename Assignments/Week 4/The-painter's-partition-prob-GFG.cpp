// NOTES: The Painter's Partition Problem - GFG

class Solution
{
  public:
  
    bool isPossiblesol(int arr[], int n, int k, long long sol){
        // define worksum
        long long worksum = 0;
        // for assigning work
        int c = 1;
        
        for(int i = 0; i < n; i++){
            
            if(arr[i] > sol){
             return false;
            }
            
            if(worksum + arr[i] > sol){
                c++;
                worksum = arr[i];
                
                // check if allocation no. of worker se jada to nhi ho gya hai
                if(c > k) return false;
                
            }
            else{
                worksum += arr[i];
            }
            
        }
        return true;
    }
    long long minTime(int arr[], int n, int k)
    {   
        // if(k > n) return -1;
        // code here
        // return minimum time
        long long s = 0;
        // we are using 0LL to avoid overflow 0LL is long long type here 
        // if we use 0 only it will not pass all test cases
        long long e = accumulate(arr, arr + n, 0LL); // Use 0LL to ensure long long type;
        // this is a loop method to calculate the sum
        // for(int i = 0; i < n; i++){
        //     e += arr[i]; 
        // }
        
        long long ans = -1;
        while(s <= e){
            long long mid = s + (e-s) / 2;
            
            if(isPossiblesol(arr,n,k,mid)){
                ans = mid;
                e = mid - 1;
            }
            else{
                s = mid + 1;
            }
        }
        return ans;
    }
};
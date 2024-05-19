// TODO: Count num of Primes from 0 to n-1 (Leetcode 204)
// TODO: 3 Methods -> 1.Normal 2.Sqr Root N 3.Sieve of Eratosthese

// NOTES: M1 Normal
// NOTES: M2 Sqrt root N
#include <iostream>
#include<math.h>
#include <vector>

using namespace std;


int prime(int n){
    if(n < 1) return false;

    // loop 
    // for M2 just add a int
    int sqrtnum = sqrt(n);
    // and set condition in loop i <= sqrtnum
    for(int i = 2; i <= sqrtnum; i++){
        if(n % i == 0){
            return true;
        }
    }
    return false;
}

int countprime(int n){
    int c = 0;

    for(int i = 0; i < n; i++){
        if(prime(i)){
            ++c;
        }
    }
    return c;
}



int main(){
    int ans = countprime(100);
    cout<<ans;
}
#include<iostream>
#include<cmath>
using namespace std;

int decimaltobinary(int n){
    // division method
    int i=0;
    int binaryno=0;
    while(n>0){
        int bit = n%2;
        binaryno = bit*pow(10, i++) + binaryno;
        n = n/2;
    }
    return binaryno;
}

// TODO: add decimaltobinary() method 2

int main(){
    int n;
    cin>>n;
    int binaryconverted = decimaltobinary(n);
    cout<<binaryconverted;
}
#include<iostream>
#include<cmath>
using namespace std;

// Display area of circle
// int areaofcircle(){
//     int pie= 3.14;
//     int r=0;
//     cout<<"Enter radius of circle: ";
//     cin>>r;
//     int area = pie*r*r;
//     // cout<<"Area of circle is: "<<area;
//     return area;
// }

int factorialofnum(){
    int num;
    long factorial = 1.0;
    cout<<"enter a num: ";
    cin>>num;

    if(num<0)
    cout<<"error, factorial of -ve num can't be calculated";
    else{
        for(int i=1; i<=num; i++){
            factorial *=i;
        }
        cout<<"factorial of "<<num<<" is "<<factorial;
    }
}

int main(){
    // int result_areaofcircle = areaofcircle();
    // cout<<"Area of circle is: "<<result_areaofcircle;
    factorialofnum();

    return 0;

}
#include<iostream>
#include<cmath>
using namespace std;

// Display area of circle
int areaofcircle(){
    int pie= 3.14;
    int r=0;
    cout<<"Enter radius of circle: ";
    cin>>r;
    int area = pie*r*r;
    // cout<<"Area of circle is: "<<area;
    return area;
}

int main(){
    int result_areaofcircle = areaofcircle();
    cout<<"Area of circle is: "<<result_areaofcircle;
    return 0;
}
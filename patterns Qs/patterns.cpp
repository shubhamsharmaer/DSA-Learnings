#include <iostream>
using namespace std;
int main() {
  int n;
  cin>>n;
  
// half pyramid
  //   for(int row=0; row<n; row=row+1){
  //     for(int col=0; col<row+1; col=col+1){
  //       cout<<"* ";
  //     }
  //     cout<<endl;
  //   }

// inverted half pyramid
  // for(int row=0; row<n; row++){
  //   for(int col=0; col<n-row; col++){
  //     cout<<"* ";
  //   }
  //   cout<<endl;
  // }

// numaric half pyramid
  // for(int row=0; row<n; row++){
  //   for(int col=0; col<row+1; col++){
  //     cout<<col+1;
  //   }
  //   cout<<endl;
  // }

// inverted hollow half pyramid
  // for(int row=0; row<n; row++){
  //   for(int col=0; col<n-row; col++){
  //     if(col==0 || col==n-row-1 || row==0){
  //       cout<<"*";
  //     }else{
  //       cout<<" ";
  //     }
  //   }
  //   cout<<endl;
    
// full pyramid 
  // for(int row=0; row<n; row++){
  //   // for space
  //   for(int col=0; col<n-row-1; col++){
  //     cout<<" ";
  //   }
  //   for(int col=0; col<row+1; col++){
  //     cout<<"* ";
  //   }
  //   cout<<endl;
  // }

// inverted full pyramid
  // for(int row=0; row<n; row++){
  //   // for spaces
  //   for(int col=0; col<row; col++){
  //     cout<<" ";
  //   }
  //   // for stars
  //   for(int col=0; col<n-row; col++){
  //     cout<<"* ";
  //   }
  //   cout<<endl;
  // }

// hollow full pyramid 
  for(int row=0; row<n; row++){
    // for outer spaces
    for(int col=0; col<n-row-1; col++){
      cout<<" ";
    }
    for(int col=0; col<row+1; col++){
      if(col==0 || col==n-col || row==n-1){
        cout<<"* ";
      }else{
        cout<<" ";
      }
    }
    cout<<endl;
  }  
}

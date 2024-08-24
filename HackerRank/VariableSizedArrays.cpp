// Problem link : https://www.hackerrank.com/challenges/variable-sized-arrays/problem
 
#include<bits/stdc++.h>
using namespace std;

void arrSize(){
  int n,q;
  cin>>n>>q;
  int *arr[n];
  for(int i = 0; i < n; i++){
    int x;
    cin>>x;
    arr[i] = new int[x];
    for (int j = 0; j < x; j++){
      cin>>arr[i][j];
    }
  }
  while(q--){
    int l,m;
    cin>>l>>m;
    cout<<arr[l][m]<<endl;
  }
}


int main(){
arrSize();
return 0;
}
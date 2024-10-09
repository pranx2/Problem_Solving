#include<bits/stdc++.h>
using namespace std;
int main(){
int arr[5][5], pos_i,pos_j;
for(int short i = 0; i < 5; i++){
  for(int short j = 0; j < 5; j++){
    cin>>arr[i][j];
    if( arr[i][j] == 1) {
      pos_i = 2 - i; 
      pos_j = 2 - j;
      if( pos_i < 0) pos_i = -pos_i; // if neg value appear then make it positive;
      if( pos_j < 0) pos_j = -pos_j;
    }
  }
}
cout<<pos_i+pos_j<<endl;
return 0;
}
#include<bits/stdc++.h>
using namespace std;
int main(){
int short num_of_per, pos,arr[num_of_per], count = 0;
cin>>num_of_per>>pos;
for (int short i = 0; i < num_of_per; i++){
  cin>>arr[i];
}
for(int short i = 0; i < num_of_per; i++){
  if(arr[i] >= arr[pos-1] && arr[i] != 0) count++;
}
cout<<count<<'\n';
return 0;
}
#include<bits/stdc++.h>
using namespace std;
#define bust ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
void ans(string sum){
  vector<int> vec;
for(int i=0; i< sum.size(); i++){
if( sum[i] != '+'){
/* The line `vec.push_back(sum[i] - '0');` is converting a character digit to its corresponding integer
value and then adding it to the vector `vec`. */
  vec.push_back(sum[i] - '0');
}
}
sort(vec.begin(),vec.end());
for(int i = 0; i < vec.size(); i++){
  if(i == vec.size()-1) cout<<vec[i];
  else  cout<<vec[i]<<"+";
}
}
int main(){
bust;
string s;
cin>>s;
if(s.size() == 1){
  cout<<s;
return 0;
}
ans(s);
return 0;
}
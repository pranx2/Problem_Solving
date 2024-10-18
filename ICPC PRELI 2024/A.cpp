#include<bits/stdc++.h>
using namespace std;
int main(){
string n; int j = 0;
cin>>n;
for(int i = 0; i < n.size(); i++){
  if( n[i] == '7') j++;
}
if( j >= 1) {cout<<"Yes"<<'\n'; return 0;}
else cout<<"No"<<'\n';
return 0;
}
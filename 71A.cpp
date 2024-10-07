#define fast_io   ios :: sync_with_stdio(false); cin.tie(NULL);
#include<bits/stdc++.h>
using namespace std;
int main(){
fast_io;
int short n;
string s;
cin>>n;
for(int i = 1; i <= n; i++){
  cin>>s;
  if((s.size()) > 10) cout<<s[0]<<s.size()-2<<s[(s.size())-1]<<'\n';
  else cout<<s<<'\n';
}
return 0;
}
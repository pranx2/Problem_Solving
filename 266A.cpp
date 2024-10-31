#include<bits/stdc++.h>
using namespace std;
#define bust ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long
#define cs cout<<endl<<"-------------------------"<<endl;
#define cn cout<<endl;
#define endl '\n';
#define pf(x) cout<<x<<endl;
#define sc(x) cin>>x;
#define itr(i,vec) for(auto i : vec) cout<<i<<" ";
#define fr(itr,size) for(int i = 0; i < size; i++) cout<<i<<" "<<endl;
#define wh(com1,com2) while(com1 != com2) cout<<com1<<" "<<endl;
int main(){
bust;

int n,count = 0;
cin>>n;
string s;
cin>>s;

for(int i = 0; i < n; i++){
  if(s[i] == s[i+1]) count++;
}
cout<<count;
return 0;
}
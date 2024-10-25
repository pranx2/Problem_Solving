#include<bits/stdc++.h>
using namespace std;
#define bust ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long
#define cs cout<<endl<<"-------------------------"<<endl;
#define cn cout<<endl;
#define pf(x) cout<<x<<endl;
#define sc(x) cin>>x;
#define itr(i,vec) for(auto i : vec) cout<<i<<endl;
#define fr(itr,size) for(int i = 0; i < size; i++) cout<<i<<" "<<endl;
#define wh(com1,com2) while(com1 != com2) cout<<com1<<" "<<endl;
int main(){
bust;
int a = 1 ,b = 1, count = 1;
cin>>a>>b;
for(count;  ;count++){
  a *=3; b *=2;
  if( a > b) break;
}
cout<<count<<endl;
return 0;
}
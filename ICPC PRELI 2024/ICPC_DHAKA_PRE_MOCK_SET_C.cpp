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
ll t, p1,p2,p3;
cin>>t;
for(int i = 1; i<= t; i++){
  cin>>p1>>p2>>p3;
  ll sum = p1+p2+p3;
  if(sum <= 9 && sum != 0 && (p1 <= 6 && p2 <= 6 && p3 <= 6)) cout<<"Case "<<i<<": "<<"perfectus"<<endl;
  else cout<<"Case "<<i<<": "<<"invalidum"<<endl;
}
return 0;
}
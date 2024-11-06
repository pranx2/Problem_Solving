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
ll  cost_of_bananas, num_of_money;
ll num_of_bananas, sum = 0;
cin>>cost_of_bananas>>num_of_money>>num_of_bananas;
for(int i = 1; i <= num_of_bananas; i++){
  sum += i * cost_of_bananas;
}
if( sum  <= num_of_money ) cout<<0<<endl;
else{
  sum = sum - num_of_money; 
  cout<<sum<<endl;
}
return 0;
}
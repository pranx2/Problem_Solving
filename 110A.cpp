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
string n;
cin>>n;
ll size = n.length(); 
ll count = 0;
if(n == "4" || n == "7") {cout<<"NO"<<endl; return 0;}
for(int i = 0; i < size; i++){
  if(n[i] == '4' || n[i] == '7')count++;
}
if(count == 4 || count == 7 )cout<<"YES"<<endl;
else cout<<"NO"<<endl;
return 0;
}
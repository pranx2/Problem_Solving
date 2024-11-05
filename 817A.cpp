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
string s;
int t,n;
cin>>t;
while (t--)
{
  short int x = 0, y = 0, z = 0,l = 0,m = 0;
  cin>>n;
  cin>>s;
  if(s.length() != 5)  cout<<"NO"<<endl;
  else{
    for(int i = 0; i < s.length(); i++){
      if(s[i] == 'T') x++;
      if(s[i] == 'i') y++;
      if(s[i] == 'm') z++;
      if(s[i] == 'u') l++;
      if(s[i] == 'r') m++;
      
    }
    if( x == 1 && y == 1 && z == 1 && l == 1 && m == 1) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
  }
}
return 0;
}
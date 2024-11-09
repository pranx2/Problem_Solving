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
cin>>s;
int n = s.size();
int x = 0,y = 0;
for(int i = 0; i < n; i++){
  if(s[i] >= 'A' && s[i] <= 'Z') x++;
  else{
    y++;
  }
}
if( x <= y){
  transform(s.begin(),s.end(),s.begin(),::tolower);
  cout<<s<<endl;
}
else{ transform(s.begin(),s.end(),s.begin(),::toupper);
cout<<s<<endl;
}
return 0;
}
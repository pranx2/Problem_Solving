#include<bits/stdc++.h>
using namespace std;
int main(){
int short n, x, y, z, ans = 0;
cin>>n;
while (n--)
{
  cin>>x>>y>>z;
  if((x+y+z) >= 2) ans++;
}
cout<<ans<<'\n';

return 0;
}
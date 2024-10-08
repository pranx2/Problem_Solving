#define fast_io   ios :: sync_with_stdio(false); cin.tie(NULL);
#include<bits/stdc++.h>
using namespace std;
int main(){
  fast_io;
int short n,x = 0;
string s;
cin>>n;
while (n--)
{
  cin>>s;
  if(s[0] == '+' && s[s.size()-1] == 'X') ++x;
  else if(s[0] == '-' && s[s.size()-1] == 'X') --x;
  else if(s[0] == 'X' && s[s.size()-1] == '+') x++;
  else if(s[0] == 'X' && s[s.size()-1] == '-') x--;
}
cout<<x<<'\n';

return 0;
}
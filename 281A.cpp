#include<bits/stdc++.h>
using namespace std;
#define bust ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
int main(){
bust;
string s;
cin>>s;
char ch = toupper(s[0]);
cout<<ch;
for(int i = 1; i < s.size(); i++) cout<<s[i];
return 0;
}
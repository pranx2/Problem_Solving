#include<bits/stdc++.h>
using namespace std;
#define bust ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long
#define cs cout<<endl<<"#-------------------------#"<<endl;
#define cn cout<<endl;
#define pf(x) cout<<x<<endl;
#define itr(i,vec) for(auto i : vec) cout<<i<<" ";
int main(){
string s;
cin>>s;
vector<char> vec;
for(char c : s) vec.push_back(c);
sort(vec.begin(),vec.end());
/* `vec.erase(unique(vec.begin(),vec.end()),vec.end());` is a common idiom in C++ used to remove
duplicate elements from a sorted container. Here's how it works: */
vec.erase(unique(vec.begin(),vec.end()),vec.end());
if(vec.size() % 2 != 0) cout<<"IGNORE HIM!"<<"\n";
else cout<<"CHAT WITH HER!"<<"\n";
return 0;
}
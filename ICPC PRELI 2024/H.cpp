#include <bits/stdc++.h>
#define ll long long
#define ff first
#define ss second
#define PI pair<int, int>
#define rep(i, n) for(int i = 0; i < (n); ++i)
#define bust ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
const ll INF = (ll)1e9 + 7, mod = 998244353;
using namespace std;
int main(){
  bust;
long tc,n;
cin>>tc;
while(tc--){
  cin>>n;
ll size = 2*n,arr[size],temp = 0;
  for(int i = 0; i < size; i++){
    cin>>arr[i];
  }
  for(int i = 0; i < n; i++){
    temp -= arr[i];
  }
  for(int i = n; i < size; i++){
    temp += arr[i];
  }
cout<<temp<<"\n";
}
return 0;
}
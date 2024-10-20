#include <bits/stdc++.h>
#define ll long long
#define bust ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
const ll INF = (ll)1e9 + 7, mod = 998244353;
using namespace std;
int main(){
  bust;
long tc, n;
cin>>tc;
while(tc--){
  cin>>n;
ll size = 2*n, ans = 0;
vector <int> arr(2*n);
for(int i = 0; i < size; i++) cin>>arr[i];
sort(arr.begin(),arr.end());//sorting;
  for(int i = 0; i < size/2; i++){
    ans += abs(arr[i] - arr[(size/2)+i]);//[start from] - [mid from++]
  }
cout<<ans<<"\n";
}
return 0;
}
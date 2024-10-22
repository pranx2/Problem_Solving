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
void solve(vector<int>&vec){
  int fst = 0, lst = vec.size(),idx = vec.size()/2, mid = 0;
  for(int i = fst; i <lst; i++){
    mid = fst +(lst-fst)/2;
    if(vec[mid] > vec[mid-1] && vec[mid] > vec[mid+1]) break;
    else if(vec[mid] > vec[mid-1]) fst = mid;
    else if(vec[mid] < vec[mid-1]) lst = mid;
  }
  pf(mid);
}
int main(){
bust;
vector<int> arr{0,3,8,9,5,2};
solve(arr);
return 0;
}
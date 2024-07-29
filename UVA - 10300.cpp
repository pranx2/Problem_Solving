#include<bits/stdc++.h>
using namespace std;
int main(){
int tc,f,sf,a,e;
cin>>tc;
while(tc--){
    long long B = 0;
    cin>>f;
    while(f--){
        cin>>sf>>a>>e;
        B+=sf*e;
        
    }
    cout<<B<<endl;
}
return 0;
}
//! O(n * N) = O(n^2) 
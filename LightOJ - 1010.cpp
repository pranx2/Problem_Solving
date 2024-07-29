#include<bits/stdc++.h>
using namespace std;
int main(){
int tc,m,n;
cin>>tc;
for(int i = 1; i<= tc; i++){
    cout<<"Case "<<i<<": ";
    cin>>m>>n;
    if(m>n) swap(m,n);
    if(m == 1 && n == 1) cout<<m*n;
    else if(m == 2 && (n == 2)){
        cout<<ceilf(m*n);
    }
    else if(n%2 != 0 || n%2 == 3 ){
        cout<<ceilf((m*(n+1))/2);
    }
     else{
        double ans = ((float)m* (float)n)/2;
    cout<<ceilf(ans);
    }
    cout<<endl;
}
return 0;
}
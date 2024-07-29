#include<bits/stdc++.h>
using namespace std;
int main(){
int t,x1,y1,x2,y2,num_cow;
cin>>t;
for(int i = 1; i <= t; i++){
    cout<<"Case "<<i<<":"<<endl;
cin>>x1>>y1>>x2>>y2>>num_cow;
    for(int i = 1; i <= num_cow; i++){
        int x,y;
        cin>>x>>y;
        if(x > x1 && x < x2 && y > y1 && y < y2){
            cout<<"Yes"<<endl;
        }else cout<<"No"<<endl;
    }
}
return 0;
}
//! O(n * N) = O(n^2)
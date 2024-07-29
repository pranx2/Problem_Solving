#include<bits/stdc++.h>
using namespace std;
int time(int a,int b){
    int t1  = ( abs(b - a) ) * 4 + 11;
    int t2  = ( a * 4 ) + 8;
    return t1+t2;  
}
int main(){
int tc,a,b;
cin>>tc;
for(int i = 1; i <=tc; i++){
    cin>>a>>b;
    cout<<"Case "<<i<<": ";
    cout<<time(a,b)<<"\n";
}
return 0;
}
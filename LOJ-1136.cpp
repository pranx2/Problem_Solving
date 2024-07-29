#include<bits/stdc++.h>
using namespace std;
int dv( int n){
    int x;
    if(n % 3  != 0 ){
            x = (n/3) + 1;
        }
        else{
            x = n/3;
        }
    return (n - x);
}
int main(){
long long tc,a,b,i = 1;
cin>>tc;
while( i <= tc ){
    cin>>a>>b;   
        cout<<"Case "<<i<<": "<<dv(b) - dv(a-1)<<endl;
    i++;
}
return 0;
}
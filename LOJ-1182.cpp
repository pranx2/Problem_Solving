#include<bits/stdc++.h>
using namespace std;
int main(){
    int tc,i = 1;
    cin>>tc;
    while(i <= tc){
    long long  n, count = 0;
        cin>>n;
        while ( n != 0 && n != 1){
        if(n%2 == 1) count++;
        n = n/2;
        }
        if( n == 1 ) count++;
        if(count%2 == 0 )   cout<<"Case "<<i<<": "<<"even"<<"\n";
        else cout<<"Case "<<i<<": "<<"odd"<<"\n";
    i++;
    }
return 0;
}
#include<bits/stdc++.h>
using namespace std;
int main(){
int n,k,tc,i=1;
cin>>tc;
while( i <= tc ){
    cin>>n;
        int sum = 0;
        string s;
        cout<<"Case "<<i<<":"<<endl;
        for (int j = 1; j <= n; j++){
            cin>>s;
                if( s =="donate"){
                    cin>>k;
                    sum +=k;
                }
                else if (s == "report"){
                cout<<sum<<endl;
                }
            }
    i++; 
}
return 0;
}
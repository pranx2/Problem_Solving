#include<bits/stdc++.h>
using namespace std;
int main(){
int n,a,b,sum = 0 ;
cin>>n;
for (int i = 0; i < n; i++){
    cin>>a>>b;
    for (int i = a; i <= b; i++)
    {
        if(i%2 != 0){
            sum+=i;
        }
    }
    cout<<"Case "<<i+1<<": "<<sum<<endl;
    sum =0;
}

return 0;
}
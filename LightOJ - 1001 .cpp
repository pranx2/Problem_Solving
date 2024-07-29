#include<bits/stdc++.h>
using namespace std;
int main(){
    int T,n,i = 1;
    cin>>T;
while (i <= T){
    cin>>n;
    if( n > 10) cout<<"10 "<<n-10<<endl;
    else cout<<"0 "<<n<<endl;
    i++;
}
return 0;
}
//This problem said, any valid ans can it will take!
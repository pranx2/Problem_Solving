#include<bits/stdc++.h>
using namespace std;
int main(){
    int tc, i = 1;
    cin>>tc;
while( i<= tc ){
string str;
    cin>>str;
    if( str[4] != 's'){
        str.insert(4,"s");
    }
    cout<<"Case "<<i<<": "<<str<<endl;
    i++;
    }
return 0;
}
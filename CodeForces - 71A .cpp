#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;
for( int i = 0; i <= n; i++){
    string str;
        getline(cin,str);
        int length = str.size();
        if(length > 10){
            cout<<str[0]<<(length-2)<<str[length-1]<<endl;
        }
        else cout<<str<<endl;
    }
return 0;
}

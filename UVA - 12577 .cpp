#include<bits/stdc++.h>
using namespace std;
int main(){
string s1;
int count=0;
string  s = "Hajj";
while (cin>>s1){
    if (string :: npos != s1.find('*'))break;
    else if (string  ::  npos != s1.find(s)){
        count++;
    cout<<"Case "<<count<<": "<<s<<"-e-Akbar"<<endl;
    }
    else{
        count++;
        cout<<"Case "<<count<<": "<<s<<"-e-Asghar"<<endl;
    }
}
return 0;
}
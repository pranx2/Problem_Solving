#include<bits/stdc++.h>
using namespace std;
int main(){
int largest=0;
string str,ref;
while(cin>>str){
    if(str == "E-N-D") break;
    int len =str.length(), count = 0;
    for(int i = 0 ; i< len; i++){
        if(str[i] >= 'a' && str[i] <= 'z' || str[i] >='A' && str[i] <='Z' || str[i] == '-'){
            continue;
        }
        else count++;
    }
    len = len - count;
    if( largest < len){
        largest = len;
        ref =  str;
    }
}
string str2;
for (int i = 0; i < ref.length(); i++){
    if(ref[i] >= 'a' && ref[i] <= 'z' || ref[i] >='A' && ref[i] <='Z' || ref[i] == '-')
        str2 += ref[i];
    }
transform(str2.begin(), str2.end(), str2.begin(), ::tolower);
cout<<str2<<endl;
return 0;
}
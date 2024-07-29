#include<bits/stdc++.h>
using namespace std;
int main(){
long long tc,b,p1,p2;
cin>>tc;
while(tc--){
    cin>>b;
    long long arr[b];
    for(int i = 0; i < b; i++){
        cin>>arr[i];
    }
    for(int j = 0; j<b; j++){
        if(arr[j+1] >= arr[j]){
            p1 = arr[j];
        }if(arr[j+1] <= arr[j]){
            p2 = arr[j+1];
        }
    }
    long long sum = p1 + p2;
        cout<<sum<<endl;
}
return 0;
}
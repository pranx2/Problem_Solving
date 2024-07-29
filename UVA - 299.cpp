#include<bits/stdc++.h>
using namespace std;
int train_Swapping(int tc){
    while(tc--){
    int len,count_swap = 0;
    cin>>len;
    int arr_carr[len];
    for(int i = 0 ; i< len; i++){
        cin>>arr_carr[i];
    }
while(len--){
    for(int i= 0; i< len; i++){
        for(int i= 0; i< len; i++){
            if(arr_carr[i+1] < arr_carr[i]){
                int temp = arr_carr[i];
                arr_carr[i] = arr_carr[i+1];
                arr_carr[i+1] = temp;
                count_swap++;
            }
        }
    }
}
cout<<"Optimal train swapping takes "<<count_swap<<" swaps."<<endl;
}
return 0;
}
int main(){
int tc;
cin>>tc;
train_Swapping(tc);
return 0;
}
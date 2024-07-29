#include<bits/stdc++.h>
using namespace std;
int main(){
long long num;
while(cin>>num){
long long sum = 0;
while(num != 0){
    sum = sum+ num%10;
    num = num/10;
}
int n = 2;
while(n--) {
    int sum2 = sum;
    if(sum2 > 9){
            sum  = 0;
        while(sum2 != 0 ){
            sum  = sum + sum2 % 10; 
            sum2 = sum2 / 10;
        }
    }
    else;
    }
if (sum != 0) {
    cout<<sum<<endl;
}else return 0;
}
return 0;
}
// ! O(n) + O(2n + n) = O(log n)
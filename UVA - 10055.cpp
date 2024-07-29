#include<bits/stdc++.h>
using namespace std;
int main(){
long long a,b;
while (cin>>a>>b){
    cout<<llabs(a-b)<<endl;
}
return 0;
}
/* 
abs-> absolute value of the given value
=>>int -> abs(n)
   long int -> labs(n)
    long long int -> llabs(n)
  */
//! O(1)
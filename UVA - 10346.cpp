#include<bits/stdc++.h>
using namespace std;

int main(){ 
long long n,k;
while(cin>>n>>k){
  long long sum = n,N = 0;
  while((n/k) >= 1 || (n/k) != 0){
    N = n%k;
    n = (n/k) ;
    sum += n;
    n = N+n;
}
cout<<(sum)<<"\n";
  }
  return 0;
}
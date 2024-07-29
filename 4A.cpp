/* 
https://codeforces.com/problemset/problem/4/A
 */
#include<bits/stdc++.h>
using namespace std;
#define si(x)	scanf("%d",&x)
#define sl(x)	scanf("%lld",&x)
#define ss(s)	scanf("%s",s)
#define pi(x)	printf("%d\n",x)
#define pl(x)	printf("%lld\n",x)
#define ps(s)	printf("%s\n",s)
#define endll '\n' 
#define deb(x) cout<< #x << " " << x << endll;// shortcut for debug/output;
#define fo(i , n) for(int i=0; i<n; i++) //shortcut loop
#define Fo(i, k, n) for(int i=k; i<n; i++) // run loop k to n time;
#define time_start  auto start = chrono :: steady_clock :: now(); // counting runtime->starting..
#define time_end  cout<<endll;auto end = chrono :: steady_clock :: now(); auto diff = end-start; cout<< chrono ::duration<double, milli>(diff).count()<<" ms" <<endll;//Ending..
#define fast_io   ios :: sync_with_stdio(false); cin.tie(NULL);
// time_start;
int main(){
// fast_io;
int w;
while( cin>>w ){
    if(w == 1 || w == 3) cout<<"NO"<<endll;
    else if( w%2 == 0 && w/3 !=0 ) cout<<"YES"<<endll;
    else cout<<"NO"<<endll;
}
// time_end;
return 0;
}

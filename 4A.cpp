#define time_start  auto start = chrono :: steady_clock :: now(); // counting runtime->starting..
#define time_end  cout<<endll;auto end = chrono :: steady_clock :: now(); auto diff = end-start; cout<< chrono ::duration<double, milli>(diff).count()<<" ms" <<endll;//Ending..
#define fast_io   ios :: sync_with_stdio(false); cin.tie(NULL);
#include<bits/stdc++.h>
using namespace std;
// time_start;
int main(){
fast_io;
    int short w;
    while ( cin >> w){
        if ( w == 1 || w == 2) cout<<"NO"<<'\n';
        else if( w % 2 == 0 || w / 3 == 0) cout<<"YES"<<'\n';
        else cout<<"NO"<<"\n";
    }
// time_end;
return 0;
}

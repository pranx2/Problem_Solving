#include<bits/stdc++.h>
using namespace std;
int main(){
int cola,get,New_cola=0;
    while (cin>>cola){
        get = cola;
        while( cola >= 3 ){
        cola = cola-3 + New_cola;
        get++;
        New_cola = 1;
    }
    if( cola == 0 );
    else if ( cola == 1);
    else if( cola <= 2){
        get++;
    }
    cout<<get<<endl;
    }
return 0;
}
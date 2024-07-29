#include<bits/stdc++.h>
using namespace std;
int main(){
int Test, emp_1,emp_2,emp_3;
    cin>>Test;
    for (int i = 1; i <= Test; i++)
    {
        cin>>emp_1>>emp_2>>emp_3;
        int max,min,mid;
        if(( emp_1>= emp_2 && emp_2>= emp_3 ) || (emp_2 >= emp_1 && emp_2 <= emp_3)){
            mid  = emp_2;
        }
        else if (( emp_3 >= emp_1 && emp_2 >= emp_3) || (emp_3 >= emp_2 && emp_1 >= emp_3)){
            mid = emp_3;
        }
        else mid = emp_1;
        cout<<"Case "<<i<<": "<<mid<<endl;

    }
    
return 0;
}
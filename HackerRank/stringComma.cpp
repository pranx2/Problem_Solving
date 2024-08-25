// https://www.hackerrank.com/challenges/c-tutorial-stringstream/problem?isFullScreen=true
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    string s;
    getline(cin,s);
    for(int i = 0; i < s.length(); i++){
        if(s[i] == ',') cout<<endl;
        else cout<<s[i];
    }
    return 0;
}

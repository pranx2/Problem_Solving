//https://www.hackerrank.com/challenges/classes-objects/problem?isFullScreen=true

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
class student{
    public:
        int m1, m2, m3, m4, m5;
        int marks(){
            return (m1+m2+m3+m4+m5);
        }
};

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    student s1;
    int n,temp[100],count = 0;
    cin>>n;
    int i = 0;
    while (i < n) {
    cin>>s1.m1>>s1.m2>>s1.m3>>s1.m4>>s1.m5;
    temp[i] = s1.marks();
    i++;
    }
    for (int j = 1; j < n ; j++){
        if(temp[0] < temp[j]) count++;
    }
    cout<<count;
    return 0;
}

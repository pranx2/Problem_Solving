// problem link : https://www.hackerrank.com/challenges/c-tutorial-struct/problem?isFullScreen=true
#include<bits/stdc++.h>
using namespace std;
struct Structs
{
  int age, std;
  string FirstName, LastName; 
};
int main(){
  struct Structs s1;
  int age,std;
  string fn, ln;
  cin>>age>>fn>>ln>>std;
  s1.age = age;
  s1.FirstName = fn;
  s1.LastName = ln;
  s1.std = std;

cout<<s1.age<<" "<<s1.FirstName<<" "<<s1.LastName<<" "<<s1.std<<" "<<endl;
return 0;
}
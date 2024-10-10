#include<bits/stdc++.h>
int main(){
  //Here we use std:: cin and std:: cout for avoid ambiguity;
std::string s1,s2;
int short ans = 0;
std::cin>>s1>>s2;
for(int i= 0; i< s1.size() ; i++){
  s1[i] = tolower(s1[i]);
  s2[i] = tolower(s2[i]);
  if( s1[i] > s2[i]){ 
    ans = 1; 
    break; 
    }
  else if( s1[i] < s2[i]) {
    ans = -1; 
    break; 
    }
}
std::cout<<ans<<'\n';
return 0;
}
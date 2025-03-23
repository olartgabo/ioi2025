#include <bits/stdc++.h>

using namespace std;
struct cmp{
    bool operator()(int a ,int b)const{return a>b;}
};
int main() {
  
  int n;
  cin>>n;
  map<int,string,cmp> m;
  while(n--){
    string s;
    int nota;
    cin>>s>>nota;
    m[nota] = s;
  }
  int i =1;
  for(auto& it:m){
    if(i!=11)cout<<"#"<<i<<":"<<it.second<<" "<<it.first<<endl;
    else return 0;
    i++;
  }
  return 0;
}
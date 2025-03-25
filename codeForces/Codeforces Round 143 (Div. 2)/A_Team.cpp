#include <bits/stdc++.h>

using namespace std;
int main(){

    int a;
    cin>>a;
    while(a--){
        string s;
        cin>>s;
        if(s.length()>10){
            int n = s.length() ;
            cout<<s[0]<<s.length()-2<<s[n-1]<<endl;
        }else{
            cout<<s<<endl;
        }
    }


    return 0;
}
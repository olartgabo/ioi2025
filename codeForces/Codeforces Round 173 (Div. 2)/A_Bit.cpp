#include <bits/stdc++.h>

using namespace std;
int main(){
    int n;
    cin>>n;//1
    int x=0;
    for(int i =0;i<n;i++){
        string s;
        cin>>s;
        sort(s.begin(),s.end());
        //++x
        if(s[0]=='+'){
            x++;
        } else {
            x--;
        }
    }
    cout<<x;


    return 0;
}
#include <bits/stdc++.h>

using namespace std;

int main(){
    string s;
    cin>>s;
    int counter =1;
    vector<int> counters;
    for(int i =0;i<s.size();i++){
        //if(i+1==s.size()) break;
        if(s[i]==s[i+1]){
            counter++;
        } else{
            counters.push_back(counter);
            counter=1;
        }
    }
    sort(counters.rbegin(),counters.rend());
    //for(int x : counters){cout<<x<<endl;}
    cout<<counters[0];


    return 0;
}
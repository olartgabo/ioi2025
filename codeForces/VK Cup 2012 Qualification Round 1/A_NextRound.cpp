#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,x;
    cin>>n>>x;
    int counter =0;
    vector<int> comp(n+1);
    for(int i =1;i<=n;i++){
        cin>>comp[i];
    }
    for(int i=1;i<=n;i++){
        if(comp[i]>=comp[x]&&comp[i]!=0){
            counter++;
        }else break;

    }
    cout<<counter;
    return 0;
}
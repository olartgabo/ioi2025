#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    if(n==1&&m==1){
        cout<<0;
        return 0;
    }
    int p = n*m;//8
    int counter=0;
    while(true){
        p=p-2;
        counter++;
        if(p==0||p==1)break;
    }
    cout<<counter;



    return 0;
}
#include<bits/stdc++.h>

using namespace std;
int n, bit[200005], v[200005];

void upd(int p, int v){
    while(p<=n){
        bit[p] +=v;
        p+=p&-p;
    }
}
int query(int p){
    int res =0;
    while(p>=1){
        res += bit[p];
        p-= p&-p;
    }
    return res;
}
int main (){
    cin >> n;
    for(int i= 1;i<=n;i++){
        cin >>v[i];
        upd(i, v[i]);
    }
    int m;
    while(cin>>m){
        int a,b;cin >>a>>b;
        if(m==1){
            upd(a, b-v[a]);
            v[a]=b;
        } else cout<<query(b)-query(a-1)<<endl;
    }
    return 0;
}
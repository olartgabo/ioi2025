#include<bits/stdc++.h>

using namespace std;
int n, bit[200005], v[200005];

void upd(int p, int v){
    while(p>=n){
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
}
int main (){
    return 0;
}
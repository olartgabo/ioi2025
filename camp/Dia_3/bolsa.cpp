#include <bits/stdc++.h>
using namespace std;


const int MAX_LEN = 200005;
int minimo[4*200005];

void build(vector<int>& bolsa,int nodo,int l, int r){
    if(l==r){
        minimo[nodo]=bolsa[l];
    }else {
        int mid = (l+r)/2;
        build(bolsa,nodo*2,l,mid);
        build(bolsa,nodo*2+1,mid+1,r);
        minimo[nodo]=min (minimo[nodo*2],minimo[nodo*2+1]);
        
    }
}

void update(int nodo, int l,int r,int pos, int cambio){
    if(l==r){
        minimo[nodo]=cambio;
        return;
    } 
    int mid = (l+r)/2;
    
    if (l <= pos and pos <= mid)
        update(nodo * 2, l, mid, pos, cambio); //izq
    else
        update(nodo * 2 + 1, mid + 1, r, pos, cambio);//der

    minimo[nodo]=min(minimo[nodo*2],minimo[nodo*2+1]);
}

int query(int nodo, int l, int r, int izq,int der){
    if (izq > r or der < l)
        return 1000000000;              //mepase

    if (izq <= l and r <= der)
        return minimo[nodo];        //dentro

    int mid = (l+r)/2;
    return min(query(2*nodo,l,mid,izq,der) , query(2*nodo+1, mid+1,r,izq,der));

}



int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    int q;
    cin>>n>>q;
    vector<int> bolsa(n+1);
    for(int i=1;i<=n; i++){
        cin >>bolsa[i]; //_ 5 3 2 8 1
    }
    build(bolsa,1,1,n);
    
    for(int i=0;i<q;i++){
        int a,b,c;
        cin>>a>>b>>c;
        if(a==1){
            update(1,1,n,b,c);
        }else{
            cout<<query(1,1,n,b,c)<<"\n";
        }
    }

    
    
    
    return 0;
}
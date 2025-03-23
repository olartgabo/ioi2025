#include <bits/stdc++.h>
using namespace std;


const int MAX_LEN = 1e5 +9;
int sum[4*MAX_LEN];

void build(vector<int>& granjeros,int nodo,int l, int r){
    if(l==r){
        sum[nodo]=granjeros[l];
    }else {
        int mid = (l+r)/2;
        build(granjeros,nodo*2,l,mid);
        build(granjeros,nodo*2+1,mid+1,r);
        sum[nodo]=sum[nodo*2]+sum[nodo*2+1];
        
    }
}

void update(int nodo, int l,int r,int pos, int cambio){
    if(l==r){
        sum[nodo]=cambio;
        return;
    } 
    int mid = (l+r)/2;
    
    if (l <= pos and pos <= mid)
        update(nodo * 2, l, mid, pos, cambio); //izq
    else
        update(nodo * 2 + 1, mid + 1, r, pos, cambio);//der

    sum[nodo]=sum[nodo*2]+sum[nodo*2+1];
}

int query(int nodo, int l, int r, int izq,int der){
    if (izq > r or der < l)
        return 0;              //mepase

    if (izq <= l and r <= der)
        return sum[nodo];        //dentro

    int mid = (l+r)/2;
    return query(2*nodo,l,mid,izq,der) + query(2*nodo+1, mid+1,r,izq,der);

}



int main(){

    int n;
    cin>>n;
    vector<int> granjeros(n+1);
    for(int i=1;i<=n; i++){
        cin >>granjeros[i]; //_ 5 3 2 8 1
    }
    //ingresar numero de preguntas
    build(granjeros,1,1,n);
    int m;
    while(cin>>m){
        int a,b;
        cin>>a>>b;
        if(m==1){
            update(1,1,n,a,b);
        } else {
            cout<<query(1,1,n,a,b)<<endl;
        }
    }

    
    
    
    return 0;
}
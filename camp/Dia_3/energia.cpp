#include <bits/stdc++.h>
using namespace std;


const long long MAX_LEN = 200005;
long long sum[4*MAX_LEN];

void build(vector<long long>& generadora,long long nodo,long long l, long long r){
    if(l==r){
        sum[nodo]=generadora[l];
    }else {
        long long mid = (l+r)/2;
        build(generadora,nodo*2,l,mid);
        build(generadora,nodo*2+1,mid+1,r);
        sum[nodo]=sum[nodo*2]+sum[nodo*2+1];
        
    }
}

void update(long long nodo, long long l,long long r,long long pos, long long cambio){
    if(l==r){
        sum[nodo]=cambio;
        return;
    } 
    long long mid = (l+r)/2;
    
    if (l <= pos and pos <= mid)
        update(nodo * 2, l, mid, pos, cambio); //izq
    else
        update(nodo * 2 + 1, mid + 1, r, pos, cambio);//der

    sum[nodo]=sum[nodo*2]+sum[nodo*2+1];
}

long long query(long long nodo, long long l, long long r, long long izq,long long der){
    if (izq > r or der < l)
        return 0;              //mepase

    if (izq <= l and r <= der)
        return sum[nodo];        //dentro

    long long mid = (l+r)/2;
    return query(2*nodo,l,mid,izq,der) + query(2*nodo+1, mid+1,r,izq,der);

}



int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    long long n;
    long long q;
    cin>>n>>q;
    vector<long long> generadora(n+1);
    for(long long i=1;i<=n; i++){
        cin >>generadora[i]; 
    }
    build(generadora,1,1,n);
    
    for(long long i=0;i<q;i++){
        long long a,b,c;
        cin>>a>>b>>c;
        if(a==1){
            update(1,1,n,b,c);
        }else{
            cout<<query(1,1,n,b,c)<<"\n";
        }
    }

    
    
    
    return 0;
}
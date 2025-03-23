#include <bits/stdc++.h>
using namespace std;

int i =1,n,v[200005],a,b,st[4*200005];
string c;

void init(int b, int e, int nd){
    int L = 2*nd;
    int R=L+1;
    int mid = (b+e)/2;
    if(b==e){
        st[nd]=v[b];
        return;
    }
    init(b,mid,L);
    init(mid+1,e,R);
    st[nd]=st[L]+st[R];
    return;
}
void upd(int b, int e,int nd,int p, int x){
    int L = 2*nd;
    int R = L+1;
    int mid = (b+e)/2;
    if(b==e && p==b){
        st[nd]=x;
        return;
    }
    if(p<=mid)upd(b,mid,L,p,x);
    else upd(mid+1,e,R,p,x);
        st[nd]=st[L]+st[R];
        return;
}

int query(int b, int e, int nd, int izq, int der){
    int L = 2*nd;
    int R = L+1;
    int mid = (b+e)/2;
    if(e<izq||der<b) return 0; //aqui se devuelve un valor que no sirva, en caso de rango inutil
    if(izq<=b&&e <=der) return st[nd];//devuelvo el valor que esta en el nodo, este es el caso en el que estoy en el rango
    return query(b,mid,L,izq,der)+query(mid+1,e,R,izq,der); //pregunto a los hijos
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int lista[] = {1, 4, 5, 7, 8, 9, 2};
    int n = sizeof(lista) / sizeof(lista[0]);

    
    return 0;
}
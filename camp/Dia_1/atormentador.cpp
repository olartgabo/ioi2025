#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n; cin>>n;
    queue<pair<ll,int>>q;
    q.push({n,0}); //raiz nodo, pasos 1
    map<ll, int>vis;
    while(true){
        pair<ll,int>a = q.front();
        q.pop();
        if(vis.count(a.first)){ //si en el mapa de visitados ya esta visitado vuelvo al principio
            continue;
        }
        vis[a.first]=1; //marcado como visitado
        if(!a.first){ //si el valor es 0 en el primero 
            cout<<a.second;
            return 0;
        }
        q.push({a.first-1ll,a.second+1});
        q.push({a.first+1ll,a.second+1});
        q.push({a.first*2ll,a.second+1});
        long long divisor = -1;
        for(long long i =3;i<=a.first;i*=3ll){
            if(a.first%i==0){
                divisor =i;
            }
        }
        if(divisor != -1){
            q.push({a.first/divisor,a.second+1});
        }


    }
    return 0;
}

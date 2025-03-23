#include <bits/stdc++.h>
using namespace std;

typedef  vector<int> vi;
vector<vi> g;
vector<bool> vis;


void dfs(int nodo){
    vis[nodo] = true;
    for(auto vecino : g[nodo]){
        if(!vis[vecino]){
            dfs(vecino);
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n,m;
    cin>>n>>m;

    g.assign(n+1,vi()); //g.assign(cuantos, de que cosa )
    vis.assign(n+1,0);
    while(m--){
        int a,b;
        cin>>a>>b;
        g[a].push_back(b);
        g[b].push_back(a);
    }
    //dfs(0);

    //lo siguiente es para contar la cantidad de grupos que hay en un grafo
    int cont =0;
    for(int i =0;i<n;i++){
        if(!vis[i]){
            dfs(i);
            cont++;
        }
    }
    //cout<<"el grupo tiene el siguiente numero de componentes"<<cont<<"HSGDJAKGFKHSA"<<endl;
    cout<<cont<<endl;
    for(auto x: vis){
        cout<<x<<" "; 
    }
    cout<<endl;


    return 0;
}









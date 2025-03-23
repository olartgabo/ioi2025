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

    g.assign(n,vi()); 
    vis.assign(n,0);
    while(m--){
        int a,b;
        cin>>a>>b;
        g[a-1].push_back(b-1);
        g[b-1].push_back(a-1);
    }

    int cont =0;
    for(int i =0;i<n;i++){
        if(!vis[i]){
            dfs(i);
            cont++;
        }
    }
    cout<<cont-1;

    return 0;
}









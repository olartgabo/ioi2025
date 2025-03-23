#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n,m;
    cin>>n>>m;
    if(n==1){
        vector<int> peso;
        while(m--){
            int a,b,w;
            cin>>a>>b>>w;
            peso.push_back(w);
        }
        sort(peso.begin(),peso.end());
        cout<<peso[0];
        return 0;

    }else{ 
        //dijkstra
    vector<vector<pair<int,int>>> g(n+1);
    while(m--){
        int a,b,w;
        cin>>a>>b>>w;
        g[a].push_back({b,w});
        g[b].push_back({a,w});
    }
    priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> q;
    vector<int> distance(n + 1, 1e9);
    vector<bool> processed(n + 1, false);

    distance[0] = 0;
    q.push({0,0});
    while (!q.empty()) {
        int a = q.top().second;
        q.pop();
        if (processed[a]) continue;
        processed[a] = true;
        for (auto u : g[a]) {
            int b = u.first, w = u.second;
            if (distance[a] + w < distance[b]) {
                distance[b] = distance[a] + w;
                q.push({distance[b], b});
            }
        }
    }


    for(int i=1;i<=n;i++){
        if(distance[i]==1e9){
            cout<<"-1 ";
        }
        else{
        cout<<distance[i]<<" ";
        }
     }
    }
    return 0;
}
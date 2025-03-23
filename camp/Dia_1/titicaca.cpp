#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> grid, vis;
int n, m;
bool ff(int i, int j){
    if(i < 0 or j < 0){
        return 1;
    }
    if(i == n or j == m){
        return 1;
    }
    if(vis[i][j]) return 1;
    if(!grid[i][j]) return 1;
    if(!i or !j) return 0;
    if(i == n - 1 or j == m - 1) return 0;
    vis[i][j] =1;
    bool t = 1;
    t &= ff(i, j + 1);
    t &= ff(i, j - 1);
    t &= ff(i+1, j);
    t &= ff(i-1, j);
    return t;
        
}
int main(){
    int ans = 0;
    cin >> n >> m;
    grid.assign(n, vector<int>(m, 0));
    vis.assign(n, vector<int>(m, 0));
    for(vector<int> &i : grid ){
        for(int &j : i) cin >> j;
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(!vis[i][j] and grid[i][j]){
                if(ff(i, j)){
                    ans++;
                }
            }
        }
    }
    cout<<ans;
}
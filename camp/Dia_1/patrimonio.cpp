#include <bits/stdc++.h>
using namespace std;

const int MAXN = 1e5 + 5;

vector<int> adj[MAXN];
int n, m, q;
vector<pair<int, int>> edges;
bool edge_status[MAXN]; // true if edge is operational

// Disjoint Set Union data structure
int parent[MAXN];
set<int> information[MAXN]; // Information at each node

int find_set(int v) {
    if (v == parent[v])
        return v;
    return parent[v] = find_set(parent[v]);
}

void union_sets(int a, int b) {
    a = find_set(a);
    b = find_set(b);
    
    if (a != b) {
        if (information[a].size() < information[b].size()) {
            swap(a, b);
        }
        parent[b] = a;
        
        // Merge information sets
        for (int info : information[b]) {
            information[a].insert(info);
        }
        
        // After merging, propagate the union's info to all nodes in both components
        set<int> merged_info = information[a];
        for (int i = 1; i <= n; i++) {
            if (find_set(i) == a) {
                information[i] = merged_info;
            }
        }
    }
}

// DFS to identify connected components after edge changes
void dfs_component(int u, int component_id, vector<int>& component) {
    component[u] = component_id;
    for (int v : adj[u]) {
        // Only traverse operational edges
        int edge_idx = -1;
        for (int i = 0; i < edges.size(); i++) {
            if ((edges[i].first == u && edges[i].second == v) || 
                (edges[i].first == v && edges[i].second == u)) {
                edge_idx = i + 1;
                break;
            }
        }
        
        if (edge_idx != -1 && edge_status[edge_idx] && component[v] == 0) {
            dfs_component(v, component_id, component);
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    cin >> n >> m >> q;
    
    // Initialize information - each server starts with its own unique info
    for (int i = 1; i <= n; i++) {
        information[i].insert(i);
        parent[i] = i;
    }
    
    // Read edges
    for (int i = 0; i < n - 1; i++) {
        int x, y;
        cin >> x >> y;
        edges.push_back({x, y});
        adj[x].push_back(y);
        adj[y].push_back(x);
        edge_status[i+1] = false; // All edges start as non-operational
    }
    
    // Process state changes
    for (int j = 1; j <= m; j++) {
        int d;
        cin >> d;
        edge_status[d] = !edge_status[d]; // Toggle edge status
        
        // Reset DSU
        for (int i = 1; i <= n; i++) {
            parent[i] = i;
        }
        
        // Identify connected components with operational edges
        vector<int> component(n+1, 0);
        int component_id = 0;
        
        for (int i = 1; i <= n; i++) {
            if (component[i] == 0) {
                component_id++;
                dfs_component(i, component_id, component);
            }
        }
        
        // Group nodes by component
        vector<vector<int>> component_nodes(component_id + 1);
        for (int i = 1; i <= n; i++) {
            component_nodes[component[i]].push_back(i);
        }
        
        // Merge information within each connected component
        for (int c = 1; c <= component_id; c++) {
            set<int> combined_info;
            for (int node : component_nodes[c]) {
                for (int info : information[node]) {
                    combined_info.insert(info);
                }
            }
            
            // Update all nodes in this component with the combined info
            for (int node : component_nodes[c]) {
                information[node] = combined_info;
            }
        }
    }
    
    // Answer queries
    for (int k = 1; k <= q; k++) {
        int c;
        cin >> c;
        cout << information[c].size() << '\n';
    }
    
    return 0;
}
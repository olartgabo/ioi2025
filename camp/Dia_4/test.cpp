#include <bits/stdc++.h>
using namespace std;
#define debug(x) cerr << #x << " = " << (x) << endl;
vector<int> H;
int dp[1000001];

int rana(int id) {
    if(dp[id] != -1) return dp[id];
    if(id == H.size()-1) return dp[id] = 0;
    int ans = rana(id+1) + abs(H[id] - H[id+1]);
    if(id + 2 < H.size()){
        ans = min(ans, rana(id+2) + abs(H[id] - H[id+2]));
    }
    dp[id] = ans;
    return dp[id];
}

int main(){
    int n;
    cin >> n;
    memset(dp, -1, sizeof(dp));
    for(int i = 0; i < n; i++){
        int a; 
        cin >> a;
        H.push_back(a);
    }
    int result = rana(0);
    cout << result << endl;
    return 0;
}
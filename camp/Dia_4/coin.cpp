#include <bits/stdc++.h>
 using namespace std;
 int INF = INT16_MAX;
int dp[50001]; 
int coins[]={1,2,6};
 int minCoins(int x){
    if (x==0) return 0;
    if (dp[x] != -1) return dp[x];
    int ans = INF;
    for (int i =0;i<coins.size();i++){
        if(x-coins[i]>=0){
            ans=min(ans, minCoins(x-coins[i] +1);)
        }
    }
    return dp[x] = ans;

 }


 int main() {




    return 0;
 }
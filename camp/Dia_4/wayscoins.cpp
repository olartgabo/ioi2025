#include <bits/stdc++.h>
using namespace std;

int countCoins(int x){
    if(dp[x] != -1) return dp[x];
    if(x==0) return 1;
    int ans =0;
    for(int i =0:i<coins.size();i++){
        if(x-coins[i]>=0){
            ans += countCoins(x-coins[i]);
        }
    }
}

int main(){
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int minCoins2(int x,int id){
    if(dp[x][id] !=-1) return dp[x][id];
    if(x==0) return 1;
    if(id==N) return 0;
    int notPick =  minCoins2(x,id+1);
    if(x - coins[id]>=0){
        pick = minCoins2(x- coins[id], id);

    }
    return dp[x][id] = pick+notPick;
}
int main(){




    retun0;
}
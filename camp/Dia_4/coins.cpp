#include <iostream>
#include <vector>
#include <cstring>


using namespace std;
int dp[1000001][100];
const int MOD = 1000000007;
vector<long long> coins;


long long monedas(int x, int id){
    if(dp[x][id]!=-1) return dp[x][id];
    if(x==0) return 1;
    if(id==coins.size()) return 0;
    int notPick = monedas(x,id+1)%MOD;
    int pick = 0;
    if(x-coins[id]>=0){
        pick = monedas(x-coins[id],id);
    }
    return dp[x][id] =pick+notPick;

}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    long long n,x;
    cin>>n>>x;
    int a = n%MOD;
    int b= x%MOD;
    memset(dp,-1,sizeof(dp));
    for(long long i =0;i<n;i++){
        long long j;
        cin>>j;
        int z =j%MOD;
        coins.push_back(z);
    }
    cout<<monedas(b,0)%MOD<<endl;

    return 0;
}
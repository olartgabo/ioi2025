#include <bits/stdc++.h>

using namespace std;
int dp[200001];
vector <int> dice= {1,2,3,4,5,6};
int calcularDado(int val){

    if(dp[val]!=-1) return dp[val];
    if(val==0) return 1;
    int counter = 0;
    for(int i=0;i<dice.size();i++){
        if(val-dice[i]>=0){
            counter += calcularDado(val-dice[i]);
        }
    }

    return dp[val]=counter;

}


int main() {

    memset(dp,-1,sizeof dp);

    int n;
    cin>>n;
   cout<< calcularDado(n);
    return 0;
}
#include<bits/stdc++.h>

using namespace std;

int sapo(int id){
    if(dp[id] != -1) return dp; //si ya calcule la respuesta
    if(id==N) return 0;
    int ans=sapo(id+1) + abs(H[id]-H[id+1]);
    if(id+2<=N){
        ans =min(ans, sapo(id+2)+abs(H[id] - H[id+2]));
    }



}
int main(){
    //considero que comienza si o si desde 0
    //input es cuantas rocas tengo, cuales son esas, y a donde quiero llegar

    return 0;
}
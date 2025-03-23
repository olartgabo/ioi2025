#include <bits/stdc++.h>
using namespace std;
/*
#define debug(x) cerr << #x << " = " << (x) << endl;

#define sepasa(x) cerr  << " se pasa " << (x) << endl;

#define check(x) cerr  << " check" << (x) << endl;
*/
vector<long long> H;
long long dp[100001];


long long rana(long long id){
    if(dp[id]!=-1) return dp[id];
    if(id==H.size()-1) return 0;//la meta
    long long esfuerzo=rana(id+1) +abs(H[id]-H[id+1]);
    //debug(esfuerzo);
    if(id+2<H.size()){
        //debug(esfuerzo);
        esfuerzo =min(esfuerzo, rana(id+2)+abs(H[id] - H[id+2]));
        //sepasa(esfuerzo);
        
    }
    //check(esfuerzo);
    dp[id]=esfuerzo;
    return dp[id];
}
//problema es que diga el menor costo de esfuerzo para llegar de 1 hasta n-1
//tiene que llegar a n-1


int main(){
   
    long long n;
    cin>>n; 
    memset(dp,-1,sizeof(dp));
    for(int i =0;i<n;i++){
        long long a; 
        cin>>a;
        H.push_back(a);//10 30 40 20
    }
    
    cout<<rana(0);


    return 0;
}
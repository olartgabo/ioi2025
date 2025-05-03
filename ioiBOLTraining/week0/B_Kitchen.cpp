#include <bits/stdc++.h>
using namespace std;
#define debug(x) cerr << #x << " = " << (x) << endl;
#define Yes cout <<"Yes"<<"\n";
#define No cout <<"Impossible"<<"\n";
using ll = long long;
int main(){
    int n,m,k; // 1 1 2
               // 3 3 3
               // 1 2 2

               // 1 4 3
               //hay varios disponibles
    cin>>n>>m>>k;
    vector<int> comida(n);
    vector<int> chefs(m);
    int sum=0;
    int sumcomida =0;
    if(k>m){
        No
        return 0;
    } else{
        for(int i =0;i<n;i++){
            cin>>comida[i];
            sumcomida+=comida[i];
            if(comida[i]>k){
                No
                return 0;
            }
        }
        for(int i =0;i<m;i++){
            cin>>chefs[i];
            sum+=chefs[i];
            // 1 5 7 9 6 3 
            // 1 3 5 6 7 9
            // 1 3 5 6
        }
        sort(chefs.begin(),chefs.end());
        int rest=m-k;
        int top = chefs.size();
        for(int i=0;i<rest;i++){
            sum-=chefs[top-i];
        }
        int res = sum-sumcomida;
        cout<<res;
        
        



    }

    
}
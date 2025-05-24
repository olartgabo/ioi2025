#include <bits/stdc++.h>
using namespace std;
#define debug(x) cerr << #x << " = " << (x) << endl;
#define Yes cout <<"Yes"<<"\n";
#define No cout <<"Impossible"<<"\n";
using ll = long long;
int main(){
    int n,m,k;
    cin>>n>>m>>k;
    vector<int> comida(n);
    vector<int> chefs(m);
    int sum=0;
    int sumcomida =0;
    if(k>m){
        No
        return 0;
    } else{
        //caso de que solo se necesita un chef, k = 1
        for(int i =0;i<n;i++){
            cin>>comida[i];
        }
        int resultado =0;
        for(int i =0;i<m;i++){
            cin>>chefs[i];
            sum+=chefs[i];
        }
        sort(chefs.begin(),chefs.end());
        int thechef = chefs[0];
        for(int i=0;i<n;i++){
            if(comida[i]%thechef!=0){
                resultado = resultado + (comida[i]/thechef)*thechef+thechef;
            } else{
                resultado = resultado + comida[i];
            }
        }
        cout<<resultado;

    }

    return 0;
}



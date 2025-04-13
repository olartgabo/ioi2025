#include <bits/stdc++.h>
using namespace std;
#define debug(x) cerr << #x << " = " << (x) << endl;
#define Yes cout <<"Yes"<<"\n";
#define No cout <<"No"<<"\n";
using ll = long long;

ll gcd(ll a, ll b) {
    while(b) {
        a %= b;
        swap(a, b);
    }
    return a;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<ll> lista(n);
        for (int i = 0; i < n; i++){
            cin >> lista[i];
        }
        



        ll x = *min_element(lista.begin(), lista.end());
        int count_x = 0;
        for (ll val : lista){
            if(val == x) count_x++;
        }
        
        if(count_x >= 2){
            Yes
            continue;
        }
        
        vector<ll> multiplos;
        for (ll val : lista){
            if(val != x && (val % x == 0)){
                multiplos.push_back(val / x);
            }
        }
        
        if(multiplos.empty()){
            No
            continue;
        }
        
        ll g = 0;
        for (ll k : multiplos){
            g=gcd(g, k);
        }
        
        if(g==1)Yes
        else No
    }
    
    return 0;
}

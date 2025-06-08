#include <bits/stdc++.h>
using namespace std;
#define debug(x) cerr << #x << " = " << (x) << endl;
#define Yes cout <<"Yes"<<"\n";
#define No cout <<"No"<<"\n";
using ll = long long;
int main(){
    int t;
    cin>>t;
    while(t--){
        ll a;cin>>a;
        if(a==1)cout<<1;return 0;
        ll sum =0;
        for(ll i=1;i<=a;i++){
            sum+=(solve(i));
        }
        cout<<sum
    }



    return 0;
}
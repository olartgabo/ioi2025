#include <bits/stdc++.h>
using namespace std;
#define debug(x) cerr << #x << " = " << (x) << endl;
#define Yes cout <<"YES"<<"\n";
#define No cout <<"NO"<<"\n";
using ll = long long;



int main(){
    int t;
    cin>>t;
    while(t--){
        int n,x;
        cin>>n>>x;
        vector<int> lista(n);
        int first = -1, last = -1;
        for(int i=0;i<n;i++){
            cin>>lista[i];
            if (lista[i] == 1) {
                if (first == -1) first = i;
                last = i;
            }
        }
        if((last - first + 1) <= x){
            Yes
        } else {No}
    }
    return 0;
}
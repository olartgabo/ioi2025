#include <bits/stdc++.h>
using namespace std;

#define debug(x) cerr << #x << " = " << (x) << endl;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n, m;
        cin>>n>>m; // m  1
        if(n==1 && m==1){
            cout << "YES" << endl;
            continue;  }


        int xd;
        vector<int> lin(n);
        vector<int> lim(m);
        for(int i = 0; i < n; i++){
            cin >> lin[i];
        }
        for(int i = 0; i < m; i++){
            cin >> lim[i];
        }
        xd = lim[0];
        bool printed = false;
        for(int i = 1; i < m; i++){
            if(lim[i] < lim[i-1]){ // deso
                lim[i] = xd - lim[i];
                if(is_sorted(lim.begin(), lim.end())){
                    debug(lim[i]);
                    cout << "YES" << endl;
                } else {
                    cout << "NO" << endl;
                }
                printed = true;
                break;
            }
        }
        if(!printed){
            cout << "YES" << endl;
        }
    }
    return 0;
}
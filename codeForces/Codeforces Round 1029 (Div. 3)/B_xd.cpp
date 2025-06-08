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
        int n;
        cin>>n; //(3)1 3 2
        if(n == 3){cout<<"1 3 2"<<endl;continue;
        }
        int prim=1;
        int last=prim+1;
        vector<int> lista;
        lista.push_back(prim);

        for(int i=3;i<=n;i++){
            lista.push_back(i);
        }
        lista.push_back(last);
        for(int x : lista){
            cout<<x<<" ";
        }
        cout<<endl;

    }
    return 0;
}
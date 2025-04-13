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
        


        int n, m ,l,r;
        cin>>n>>m>>l>>r;
        if(n==m){
            cout<<l<<" "<<r<<endl;
        } else{
            int xd = max(0,m-r);
            cout<<-xd<<" "<<m-xd<<endl;
        }
    }
    return 0;
}
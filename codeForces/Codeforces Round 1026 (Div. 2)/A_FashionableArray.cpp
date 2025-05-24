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
        int l;
        cin>>l;
        vector<int>lista;
        for(int i =0;i<l;i++){
            int xd;
            cin>>xd;
            lista.push_back(xd);
        }
        sort(lista.begin(),lista.end());
        if((lista.front()+lista.back() %2==0)){
            cout<<0<<endl;
            continue;
        }
        int minx = lista.front()%2;
        int maxx = lista.back()%2;

        int abajo = 0;
        int arriba = 0;
        while(abajo<l && lista[abajo]%2 != maxx){
            abajo++;
        }
        while(arriba<l && lista[l-1-arriba]%2 != minx){
            arriba++;
        }
        cout<<min(abajo,arriba)<<endl;
    }
    return 0;
}
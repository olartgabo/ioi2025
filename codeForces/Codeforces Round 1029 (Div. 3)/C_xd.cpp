#include <bits/stdc++.h>
using namespace std;
#define debug(x) cerr << #x << " = " << (x) << endl;
#define Yes cout <<"Yes"<<"\n";
#define No cout <<"No"<<"\n";
using ll = long long;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> lista(n);
        for (int i=0;i<n;i++) cin>>lista[i];
        
        vector<int> frec(n+1, 0);
        for (int x:lista)frec[x]++;
        /*
        1 2
        2 2
        3 1
        5 1
        */
        int diferentes=0;
        for (int v=1;v<=n;v++){
            if(frec[v]>0)diferentes++;
            }
        //4 son dif
        
        vector<bool> conozco(n+1, false);
        vector<int> conocidos;
        int segments=0;
        int pos =n-1;
        
        
        while (pos>=0){
            //1 2 2 3 1 5
            int conozco_cuenta = 0;
            conocidos.clear();
            for(int i =pos;i>=0;--i){
                int v =lista[i];
                if(!conozco[v]){
                    conozco[v]=true;
                    conocidos.push_back(v);
                    conozco_cuenta++;
                }
                if(conozco_cuenta ==diferentes){ //loco para ya encontramos todos
                    segments++;
                    for(int j = i;j<= pos;++j){//los de aqui no cuentan
                        int u = lista[j];
                        frec[u]--;
                        if(frec[u]==0)diferentes--;
                    }
                    //no los conozco
                    for(int panas:conocidos) conozco[panas] = false;
                    pos = i-1;
                    break;
                }
            }
        }
        cout <<segments;
        if(t)cout<<endl;
    }
    return 0;
}

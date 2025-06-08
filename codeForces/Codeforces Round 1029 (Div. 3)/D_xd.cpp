#include <bits/stdc++.h>
using namespace std;
#define debug(x) cerr << #x << " = " << (x) << endl;
#define Yes cout <<"YES"<<"\n";
#define No cout <<"NO"<<"\n";
using ll = long long;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n;cin>>n;
        vector<int>lista(n);
        for(int i=0;i<n;i++){
            cin>>lista[i];
        }
        int dif = lista[1]-lista[0];
        bool sec = true;
        for (int i =2;i<n;i++){
            if(lista[i]-lista[i-1]!=dif){sec=false;break;}
        }
        if(!sec){No continue;}
        //existe un patron, de a1 a a2 cambia algo constante

        int num = lista[0]-dif;
        int det = n+1;
        if(num<0||num%det!=0) {No continue;}
        //no puede ser negativo ni 2,3 movs
        int y=num/det;
        int x=dif+y;
        if (y>=0 && x>=0)Yes
        else No 

    }
    return 0;
}
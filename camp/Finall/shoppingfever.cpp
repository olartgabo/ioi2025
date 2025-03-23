#include<bits/stdc++.h>
using namespace std;
#define debug(x) cerr << #x << " = " << (x) << endl;

int main(){
    int n;cin>>n;
    int k;cin>>k;
    vector<int> precios;
    while(n--){
        int precio;cin>>precio;
        precios.push_back(precio);
    }
    sort(precios.begin(),precios.end());
    int sum=precios[1]+precios[2];
    int descuento=sum - (sum*k/100);
    int descuentom=precios[0]-(precios[0]*k/100);
    if(descuento>precios[0]){
        cout<<descuento+descuentom<<endl;
    } else {
        cout<<0<<endl;
    }
    
    return 0;
}
#include <bits/stdc++.h>
using namespace std;
#define debug(x) cerr << #x << " = " << (x) << endl;
int main(){
    int n;
    cin >> n;
    vector<long long> lista(n);
    for (int i = 0; i < n; i++){
        cin >> lista[i];
    }
    long long moves = 0;
    for (int i = 1; i < n; i++){
        if(lista[i] < lista[i-1]){
            moves += lista[i-1] - lista[i];
            lista[i] = lista[i-1]; 
        }
    }
    cout << moves;
    return 0;
}
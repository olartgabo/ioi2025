#include <bits/stdc++.h>
using namespace std;
#define dbg(x) cerr << #x << " = " << (x) << endl;
#define Yes cout <<"Yes"<<"\n";
#define No cout <<"No"<<"\n";
using ll = long long;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        //logica es de que con k me dice 
        //la cantidad de 1 que debe existir en el string
        //nota que en general se cumple para formar el string de que existe un intercalado "fijo
        //todo vector valido comienza por
        /*
        10
        y termina por
        10

        entonces puedo hacer un vector de tama;o n
        el cual este por defecto con los valores asignados 0 1
        entonces marco vector 0 y vector 0 por 1
        en caso de que k es igual a 1 solo meto un 1 al principio
        si es que n =k entonce lo lleno todo de 1
        */
        for(int i =0;i<n;i++){

        }
    }
    return 0;
}
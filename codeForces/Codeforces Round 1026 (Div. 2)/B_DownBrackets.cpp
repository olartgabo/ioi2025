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
        /*solo brackets que funcan
        si es solo un bracket entonces no se puede romper incluso siendo uno
        ()  (())  ((())) producen NO
        (()())
        si es que son dos brackets o mas da igual no importa, si se puede romper
        ()()  se vuelve )(
        */
        bool entero = true;
        string s;
        cin>>s;
        int n= s.length();
        int counter =0;
        for(int i=0;i<n-1;i++){
            if(s[i]=='(') counter++;
            else counter--;
            if(counter==0){//si se completa antes de tiempo ()()
                entero = false;
                break;
            }
            
        }
        if(entero)No
        else Yes



    }
    return 0;
}
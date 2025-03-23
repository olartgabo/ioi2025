#include <bits/stdc++.h>
using namespace std;

int factorialinv(string numero){
    return numero.length()+3;
}



int main(){
    string n;
    while(cin>>n){
        if (n == "1") {
            cout << 1 << endl;
        } else if (n == "2") {
            cout << 2 << endl;
        } else if (n == "6") {
            cout << 3 << endl;
        } else if (n == "24") {
            cout << 4 << endl;
        } else if (n == "120") {
            cout << 5 << endl;
        } else if (n == "720") {
            cout << 6 << endl;
        } else {
            cout<<factorialinv(n);//5040  7 lleva 4 cifras
        }

        


    }


    return 0;
}
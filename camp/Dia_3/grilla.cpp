#include <bits/stdc++.h>
using namespace std;



int main(){
    int n;cin>>n;
    int a,b;cin>>a>>b;
    int d=a+b; //revisar si esto es par
    while(n--){
        long long x,y; //se queda quieto
        char c;
        cin>>x>>y>>c;
        if(x==a and y ==b){
            if(c=='N'){
                cout<<"NO"<<endl;
            } else{
                cout<<"SI"<<endl;
            }
        }else{
        if(x==a and y%2==0){
            if(b%2==0){
            if(c=='N'){
                cout<<"NO"<<endl;
            } else{
                cout<<"SI"<<endl;
            }
        } else {
            if(c=='B'){
                cout<<"NO"<<endl;
            } else{
                cout<<"SI"<<endl;
            }
        }
        }else{
        long long z=x+y; //a donde se movio
        if(d%2==0 ){ //par es ngro
            if(z%2==0){ //cae en par y es negro
                if(c=='N'){
                    cout<<"NO"<<endl;
                } else{
                    cout<<"SI"<<endl;
                }
            } else{ //cae en impar, es blanco
                if(c=='B'){
                    cout<<"NO"<<endl;
                } else{
                    cout<<"SI"<<endl;
                }
            }
        } else { //impar es negro
            if(z%2==0){ //cae en par y es blanco
                if(c=='B'){
                    cout<<"NO"<<endl;
                } else{
                    cout<<"SI"<<endl;
                }
            } else{ //cae en impar, es negro
                if(c=='N'){
                    cout<<"NO"<<endl;
                } else{
                    cout<<"SI"<<endl;
                }
            }
        }
    }
    }
}
    return 0;
}
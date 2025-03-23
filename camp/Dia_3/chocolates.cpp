#include <bits/stdc++.h>
using namespace std;


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int choco,tiendas;
    cin>>choco>>tiendas;
    if(tiendas==1){int a,b;cin>>a;cin>>b;if(b<choco){cout<<-1<<endl;} else cout<<abs(a)<<endl;} else if (tiendas ==2){
        int ua,ub;
        cin>>ua>>ub;
        int aua = abs(ua);
        int aub = abs(ub);
        int car=min(aua,aub);
        int distancia=(2*car+max(aua,aub)); //esto sirve para cuando son complementarios
        int ca,cb;
        cin>>ca>>cb;
        int total=ca+cb;

        if(total<choco){cout<<-1<<endl;} else if (ca<choco and cb<choco and total >=choco)
        {int x;
            //si comparten signo
            if(ua*ub>0)cout<<abs(max(aua,aub)); else{
            cout<<abs(distancia)<<endl;} }
        
        else if(ca<choco and cb>=choco){cout<<aub<<endl;
        } else if(cb<choco and ca>=choco){cout<<aua<<endl;
        } else if(cb>choco and ca>choco){cout<<abs(min(aua,aub));
        }

    } else if(tiendas ==3){
        int a,b,c;
        cin>>a>>b>>c;
        int aa= abs(a);int ab= abs(b); int ac=abs(c);
        int absmedio = aa+ab+ac-min({aa,ab,ac})-max({aa,ab,ac});
        int medio =a+b+c-min({a,b,c})-max({a,b,c});
        int choa,chob,choc;
        cin>>choa>>chob>>choc; //1 1 1
        if(a*b*c>0 and a*b>0 and b*c >0){ //osea los 3 estan en el mismo lado
            cout<<absmedio<<endl;
            while(true){cout<<"yes";}
        } else if (max({a,b,c})<abs(min({a,b,c}))*2+medio){
            cout<<max({a,b,c});
        }else {
            cout<<abs(min({a,b,c}))*2+medio;
        }

    }
    

    return 0;
}
#include<bits/stdc++.h>
using namespace std;
#define debug(x) cerr << #x << " = " << (x) << endl;



int main(){
    int t;
    cin>>t;
    while(t--){
        string a,b,c,d;
        cin>>a>>b>>c>>d;

        
        int lasta=a[a.size()-1]-'0';
        int lastb=b[b.size()-1]-'0';
        int lastc=c[c.size()-1]-'0';
        int lastd=d[d.size()-1]-'0';
        if(lasta==0) lasta=10;
        if(lastb==0) lastb=10; 
        if(lastc==0) lastc=10;
        if(lastd==0) lastd=10;
        //cout<<lasta<<lastb<<lastc<<lastd<<endl;
        int p=lasta*lastb*lastc*lastd;
        int sum=0;
        int elfo=0;
        int nums[]={lasta,lastb,lastc,lastd};
        for(int i=0;i<4;i++){
            sum=(p/nums[i])+nums[i];
            if(sum%2==0){
                elfo++;
            }
            //debug(sum);
        }
        cout<<elfo<<endl;


    }
    
    return 0;
}
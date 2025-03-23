#include <bits/stdc++.h>
using namespace std;

#define debug(x) cerr << #x << " = " << (x) << endl;


int main(){
    long long n; cin>>n;
    unordered_map<long long, long long> frecuen;
    long long sumdia=0;
    for(int i =0;i<n;i++){
        long long precio; //141
        cin>>precio; //6
        frecuen[precio]++;
        sumdia+=precio; //omegalul es 0;

    }
    
    int q;cin>>q;
    long long omegalul=0;
    for(int i=0;i<q;i++){
        //debug(i);
        string orden;
        cin>>orden;
        //debug(sumdia);
        if(orden=="INFLATION"){
            long long cantidad;
            cin>>cantidad;//esto es omegalul
            omegalul+=cantidad;
            sumdia+=cantidad*n; // 11 += 1*5
            //debug(i) debug(sumdia);

        } else { //SET
            long long que,cosa;
            cin>>que>>cosa; //6 1
            //debug(que) debug(cosa);
            if(que==cosa){cout<<sumdia<<endl;continue;}
            long long truque = que-omegalul; //6-5
            //debug(i);
            //debug(omegalul) //5
            //debug(truque); //1
            
            if(frecuen.find(truque)!= frecuen.end()){
                long long cuanto = frecuen[truque]; //4
                //debug(cuanto);
                sumdia += (cosa-que)*cuanto;
                //debug(sumdia);
                frecuen[cosa-omegalul]+=cuanto;
                //debug(cosa-omegalul);
                frecuen[truque]=0;
                //debug(sumdia);
            }
            
        }
        cout<<sumdia<<endl;

    }


}
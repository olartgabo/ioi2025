#include <bits/stdc++.h>
using namespace std;
#define debug(x) cerr << #x << " = " << (x) << endl;

map<long long, long long >m;
void invfact(long long cifras){
    double a =1;
    for(long long i=6; ;i++){
        a+=log10(i);
        long long nums = (long long)floor(a) + 1;
        if (m.find(nums) == m.end()) {
            m[nums] = i;
        }
        if (nums >= cifras) break;
    }
}

int main(){
    string n;
    while(cin>>n){
        if (n == "1"||n=="0") {
            cout <<1<< endl;
        } else if (n=="2") {
            cout <<2<< endl;
        } else if (n=="6") {
            cout <<3<< endl;
        } else if (n=="24") 
        {cout <<4<< endl;} 
        else if (n=="120") {
            cout <<5<< endl;
        }else if (n=="720") {
            cout <<6<< endl;}
        else {
            long long larga = n.length();
            invfact(larga);
            cout<<m[larga];
            
            
         }
        
        }


    return 0;
}
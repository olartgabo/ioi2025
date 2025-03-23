#include <bits/stdc++.h>
using namespace std;
#define debug(x) cerr << #x << " = " << (x) << endl;
long long sumaC(long long n){
    long long div=n;
    long long sum=0;
    while(div>=10){
        sum+=div%10;
        //cout<<sum<<endl;
        div=div/10;
        //cout<<"divi"<<div<<endl;
        if(div<10){
            sum+=div;
        }
    }
    return sum;
}
int main(){
    cout<<sumaC(13717333319616);

}




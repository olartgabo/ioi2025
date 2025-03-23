#include <iostream>
using namespace std;
#define debug(x) cerr << #x << " = " << (x) << endl;
long long pira(long long n,long long k){
    long long xd =n;
    for(long long i=1;i<k;i++){
        //debug(xd);
        xd=(xd*10+n);
        
        debug(i)debug(xd);
    }
    return xd;
}
int main() {
    long long N, K;
    cin >> N >> K;
    //pira(N,K);
    int S = 0;
    long long temp = N;
    bool all_less = true;
    while (temp > 0) {
        int d = temp % 10;
        S += d;
        if (d * K >= 10) {
            all_less = false;
        }
        temp /= 10;
    }
    
    if (all_less) {
        cout << S * K << endl;
        
    } else {
        if (S % 9 == 0) {
            cout << 9 * K << endl;
        } else {
            cout << (S % 9) * K << endl;
        }
    }
    
    return 0;
}


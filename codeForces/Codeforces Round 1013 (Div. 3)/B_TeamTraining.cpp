#include <bits/stdc++.h>

using namespace std;

int main(){

    int t;
    cin>>t;
    vector<int> minfuer;
    vector<int> listaeq;
    for(int i=0;i<t;i++){
        int n,x;
        cin>>n>>x;
        minfuer.push_back(x);
        vector<int> equipo(n);
        for(int i=0;i<n;i++){
            cin>>equipo[i];
        }
        int mine= *min_element(equipo.begin(), equipo.end());
        int equ = n * mine; // 4 * min(blabla)
        listaeq.push_back(equ);
    }



    return 0;
}
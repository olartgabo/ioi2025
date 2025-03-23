#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;cin>>n;
    int a;
    vector<int>lista;
    while (true) {
        cin >> a;
        if(a == 0) break;
        lista.push_back(a);
    }
    int l=0;
    int r =n;
    int sum=0;
    int maxsum=0;
    queue<int> listasums;
    listasums.push(0);
    while(r <=lista.size()){
        sum = 0;
        for (int j = l; j < r; j++){
            sum += lista[j]; //bloque a manda itera siguiente
        }
        maxsum = max(sum, listasums.back());
        listasums.push(maxsum);
        l++;
        r++;
    }
    cout<<"The maximum winning streak is "<<listasums.back();

    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main() {
    int a;
    while (true) {
        cin >> a;
        if(a == 0) break;



        vector<int> lista(a);
        for(int i = 0; i < a; i++){
            cin >> lista[i]; //llenar
        }
        int actualSum = 0, maxSum = 0;
        for(auto i:lista){
            actualSum =max(actualSum+i,i);
            maxSum = max(maxSum, actualSum);
        }
        if(maxSum > 0)
            cout << "The maximum winning streak is " << maxSum << ".\n";
        else
            cout << "Losing streak." << "\n";
    }
    return 0;
}
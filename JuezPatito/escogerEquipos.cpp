#include <bits/stdc++.h>
using namespace std;

int main() {
    string linea;
    while(getline(cin, linea)) {
        if(linea.empty())
            continue;
        
        vector<int> jugadores;
        stringstream ss(linea);
        int capacidad;
        
        while(ss >> capacidad) {
            jugadores.push_back(capacidad);
        }
        
        sort(jugadores.begin(), jugadores.end(), greater<int>());
        
        int suma1 = 0, suma2 = 0;
        for (size_t i = 0; i < jugadores.size(); i++) {
            if(i % 2 == 0) {
                suma1 += jugadores[i];
            } else {
                suma2 += jugadores[i];
            }
        }
        
        cout << abs(suma1 - suma2) << endl;
    }
    return 0;
}

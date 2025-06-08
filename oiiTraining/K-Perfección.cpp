#include <iostream>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;
using ll = long long;

const int MOD = 1e9 + 7;

// Memo para contar divisores
map<ll, int> divisor_cache;

// Función para contar divisores de x
int count_divisors(ll x) {
    if (divisor_cache.count(x)) return divisor_cache[x];
    int cnt = 0;
    for (ll i = 1; i * i <= x; ++i) {
        if (x % i == 0) {
            cnt += (i * i == x ? 1 : 2);
        }
    }
    return divisor_cache[x] = cnt;
}

int main() {
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for (int& x : a) cin >> x;

    sort(a.begin(), a.end()); // para generar permutaciones únicas
    int total = 0;

    do {
        bool valid = true;
        ll prod = 1;
        for (int i = 0; i < n - 1; ++i) {
            prod *= a[i];
            if (count_divisors(prod) % 2 != k) {
                valid = false;
                break;
            }
        }
        if (valid) total = (total + 1) % MOD;
    } while (next_permutation(a.begin(), a.end()));

    cout << total << '\n';
    return 0;
}

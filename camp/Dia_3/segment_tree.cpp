#include <bits/stdc++.h>
using namespace std;

const int MAX_LEN = 1e5 +9;

int sum[4*MAX_LEN];

void push_up(int rt){
    sum[rt] = sum[rt*2] + sum[rt*2+1];
}

void build(int lista[], int rt, int L, int R){
    if(L==R){
        sum[rt] = lista[L];
    }else{
        int mid = (L+R)/2;
        build(lista, rt*2,L,mid);
        build(lista, rt*2+1,mid+1,R);
        push_up(rt);
    }


}
void update(int rt, int L, int R, int pos, int k)
{
    if (L == R)
    {
        sum[rt] += k;//modifica sumando a x valor
        return;
    }

    int mid = (L + R) /2;
    if (L <= pos and pos <= mid)
        update(rt * 2, L, mid, pos, k);
    if (mid + 1 <= pos and pos <= R)
        update(rt * 2 + 1, mid + 1, R, pos, k);

    push_up(rt);

    return;
}
int query(int rt, int L, int R, int ql, int qr)
{ 
    if (ql > R or qr < L)
        return 0;              // Case 1 (disjoint)

    if (ql <= L and R <= qr)
        return sum[rt];        // Case 2 (fully contained)

    int mid = (L + R) >> 1;    // Case 3 (intersection)
    return query(2 * rt, L, mid, ql, qr) + query(2 * rt + 1, mid + 1, R, ql, qr);
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int lista[] = {1, 4, 5, 7, 8, 9, 2};
    int n = sizeof(lista) / sizeof(lista[0]);

    // Build the segment tree
    build(lista, 1, 0, n-1);

    // Perform some queries
    cout << "Sum of range [0, 3]: " << query(1, 0, n-1, 0, 3) << endl; // Expected: 1 + 4 + 5 + 7 = 17
    cout << "Sum of range [2, 5]: " << query(1, 0, n-1, 2, 5) << endl; // Expected: 5 + 7 + 8 + 9 = 29

    // Perform some updates
    update(1, 0, n-1, 3, 3); // Add 3 to element at index 3 (7 becomes 10)
    cout << "Sum of range [0, 3] after update: " << query(1, 0, n-1, 0, 3) << endl; // Expected: 1 + 4 + 5 + 10 = 20

    update(1, 0, n-1, 5, -4); // Subtract 4 from element at index 5 (9 becomes 5)
    cout << "Sum of range [2, 5] after update: " << query(1, 0, n-1, 2, 5) << endl; // Expected: 5 + 10 + 8 + 5 = 28

    return 0;
}
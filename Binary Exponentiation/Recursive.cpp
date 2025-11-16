#include<bits/stdc++.h>
using namespace std;
#define ll long long

int binpow(int a, ll n, int m) { // O(log n)
    if(n == 0) return 1 % m;
    ll cur = binpow(a, n/2, m);
    if(n % 2 == 0) {
        return cur * cur % m;
    }
    else {
        return cur * cur % m * a % m;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout << binpow(1e8 + 9, 1e18, 1e9 + 7);
    return 0;
}
